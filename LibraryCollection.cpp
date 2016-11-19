/******************************************************
**Date: 8/7/2016
**Description: Creates a library database that includes members and books. Book and members can be added to member.
** The class can also calculate fine on members for late fees. Members can check out, request and returns books.
**It can also increase the date in  days to calculate fines.
***********************************************************************************/
#include "LibraryCollection.hpp"
#include <iostream>

using namespace std;

/*********************************************************************
** Description: Defualt constructor. Sets current days to 0.
*********************************************************************/
Library::Library()
{
	//Sets current dates to 0
	currentDate = 0;
}

/*********************************************************************
** Description: Add a book to holdings of library
*********************************************************************/
void Library::addBook(Book * bookIn)
{
	holdings.push_back(bookIn);
}

/*********************************************************************
** Description: Add a member to members list of the library
*********************************************************************/
void Library::addPatron(Patron * memberIn)
{
	members.push_back(memberIn);
}

/*********************************************************************
** Description: Checks out books for members. Checks to see if book is
** already not checked out or on request. Also checks to see member and 
** book are a part of library. Uses member ID number and book ID number.
*********************************************************************/
string Library::checkOutBook(string pID, string bID)
{
	//Returns string to show if book is successful checked out or what prevented check out
	string result;

	//Pointer to desired book. Will be NULL if book is not found
	Book *book = getBook(bID);

	//Pointer to member. Will be NULL if member is not found
	Patron *patron = getPatron(pID);

	//Checks to see if book exist with library
	if (book == NULL)
	{
		//Returns book not found
		result = "book not found";
	}

	//Checks to see if member exist with library
	else if (patron == NULL)
	{
		//Returns book not found
		result = "patron not found";
	}

	//Checks to see if book is already checked out
	else if ((book)->getLocation() == CHECKED_OUT)
	{
		result = "book already checked out";
	}

	//Checks if book is hold for another member
	else if (((book)->getLocation() == ON_HOLD_SHELF) && !((book)->getRequestedBy() == patron))
	{
		result = "book on hold by other patron";
	}
	else
	{
		//Checks out book to patron
		book->setCheckedOutBy(patron);
		
		//set date of checking out the book
		book->setDateCheckedOut(currentDate);
		
		//Moves location of book to CheckedOut
		book->setLocation(CHECKED_OUT);
		
		//Sets requested by to blank (NULL)
		book->setRequestedBy(NULL);
		
		//Adds book to patron's checked out book.
		patron->addBook(book);
		
		//Returns successful check out of book 
		result = "check out successful";
	}

	//Return result of trying to check out book
	return result;
}

/*********************************************************************
** Description: Return books for members. Checks to see if book is
** already in library . Also checks to see member and book are a part of library.
** Will place book on hold if on request. Uses book ID number.
*********************************************************************/
string Library::returnBook(string bID)
{
	//Returns string to show if book is successful returned or what prevented the return
	string result;

	//Pointer to returning book. Will be NULL if book is not found
	Book *book = getBook(bID);

	//Pointer to patron currently has the book out
	Patron *patron = (book)->getCheckedOutBy();

	//Checks to see if book exist with library
	if (book == NULL)
	{
		//Returns book not found
		result = "book not found";
	}

	//Checks to see if book is already in the library
	else if (!((book)->getLocation() == CHECKED_OUT))
	{
		//Returns book is within library
		result = "book already in library";
	}
	else
	{
		//removes book from patron's checked out list
		(patron)->removeBook(book);

		//Checks to see if someone has requested the book
		if ((book)->getRequestedBy() == NULL)
		{
			//If book does not a request on it, its location in on the shelf.
			(book)->setLocation(ON_SHELF);
		}
		
		else
		{
			//If book does a request on it, its location in on holdshelf.
			(book)->setLocation(ON_HOLD_SHELF);
		}
		
		//Sets checked out to NULL
		(book)->setCheckedOutBy(NULL);
		
		//Returns the book return was successful
		result = "returned successful";
	}

	//Return result of trying to return book
	return result;
}

/*********************************************************************
** Description: Allows members to request a book. Checks to see member and book are a part of library.
** Checks to see if book ios already on request. IF book is on the shelf,
** will move book on hold shelf. Uses member ID number and book ID number.
*********************************************************************/
string Library::requestBook(string pID, string bID)
{
	//Returns string to show if book is successful requested or what prevented the request
	string result;

	//Pointer to desired book. Will be NULL if book is not found
	Book *book = getBook(bID);

	//Pointer to member. Will be NULL if member is not found
	Patron *patron = getPatron(pID);

	//Checks to see if book exist with library
	if (book == NULL)
	{
		//Returns book not found
		result = "book not found";
	}

	//Checks to see if member exist with library
	else if (patron == NULL)
	{
		//Returns patron not found
		result = "patron not found";
	}

	//Checks to see if book is already on request
	else if ((book)->getRequestedBy() == NULL)
	{
		//If book is not on request
		//It sets member to request the book
		(book)->setRequestedBy(patron);

		//Checks to see if book is on the shelf
		if ((book)->getLocation() == ON_SHELF)
		{
			//If book is on shelf, move book to hold shelf
			(book)->setLocation(ON_HOLD_SHELF);
		}

		//Returns the request of book was successful
		result = "request successful";
	}
	else 
	{
		//if book is on request, return book is already on hold
		result = "book already on hold";
	}

	//Return result
	return result;
}

/*********************************************************************
** Description: Allows members to pay thier fines. If patron is not found,
** returns patron not found.
*********************************************************************/
string Library::payFine(string pID, double payment)
{
	//Returns string to show if book is successful returned or what prevented the return
	string result;

	//Member paying fine
	Patron *patron;
	patron = getPatron(pID);

	//Checks to see if member exist with library
	if (patron == NULL)
	{
		//Returns patron not found
		result = "patron not found";
	}
	//If patron does exist
	else
	{
		//Pays the fine on the member
		(patron)->amendFine(payment * -1);
		
		//Returns payment was successful
		result = "payment successful";
	}
	return result;
}


void Library::incrementCurrentDate()
{
	//The fine for each day late is $.10 a day
	const double FINE = .1;

	//Gets checkout length, 21 days.
	const int checkOutLength = holdings.at(0)->getCheckOutLength();

	//Increases date by one
	currentDate = currentDate + 1;

	//Loop through all members
	for (unsigned int m = 0; m < members.size(); m = m + 1)
	{
		
		//Loop for each checked out book the member has
		for (unsigned int b = 0; b < (members[m])->getCheckedOutBooks().size(); b = b + 1)
		{
			
			//Checks to see if book is out longer than the check out length, 21 days
			if (currentDate  > checkOutLength + ((members[m])->getCheckedOutBooks().at(b))->getDateCheckedOut())
			{
				
				//Adds fine for late return of books
				members[m]->amendFine(FINE);
			}
		}
	}
}


Patron * Library::getPatron(string pID)
{
	//Will set pointer to patron to NULL if member does not exist
	Patron *patron = NULL;

	// Loop through all members
	//Used unsigned int as size function is unsinged int
	//and allows the library to have more books
	for (unsigned int x = 0; x < members.size(); x = x + 1)
	{
		
		//Checks to see if member ID number matchs a member ID in holdings
		if (pID == (members[x])->getIdNum())
		{
			
			//Returns pointer to member
			patron = members[x];
		}
	}

	//Retruns either NULL or pointer to member
	return patron;
}

Book * Library::getBook(string bID)
{
	//Will set pointer to book to NULL if book does not exist
	Book *Book = NULL;

	//Loops through the holdings to see if book exists
	//Used unsigned int as size function is unsinged int
	//and allows the library to have more books
	for (unsigned int x = 0; x < holdings.size(); x = x + 1)
	{
		
		//Checks to see if book ID number matchs a book in holdings
		if (bID == (holdings[x])->getIdCode())
		{
			
			//Returns pointer to book
			Book = holdings[x];
		}
	}

	//Retruns either NULL or pointer to book
	return Book;
}