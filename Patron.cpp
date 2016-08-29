/******************************************************
**Date: 8/7/2016
**Description: A patron of the library. Can get the name of patron and the ID number.
** Also can add and remove books from patron's checkout books. Can return the books
** checked out by patron. Patron can pay thier late fees and return the fine that
** currently patron has remaining.
***********************************************************************************/
#include "Patron.hpp"
using namespace std;

/*********************************************************************
** Description: Only constructor. Input includes two string for ID number
** and name. Sets ID number and name along with fine amount to 0.
*********************************************************************/
Patron::Patron(string idn, string n)
{
	//Sets patron's ID number
	idNum = idn;

	//Sets patron's name
	name = n;

	//Sets fine for patron to 0
	fineAmount = 0;
}

string Patron::getIdNum()
{
	return idNum;
}

string Patron::getName()
{
	return name;
}

vector<Book*> Patron::getCheckedOutBooks()
{
	return checkedOutBooks;
}

/*********************************************************************
** Description: Add book to patron's checkout book
*****************************************************************/

void Patron::addBook(Book * b)
{
	checkedOutBooks.push_back(b);
}

/*********************************************************************
** Description: Remove book from patron's checkout book
*****************************************************************/
void Patron::removeBook(Book * b)
{
	//Loops through all the books the poatron has out
	for (int x = 0; x < checkedOutBooks.size(); x = x + 1)
	{
		
		//Check to see if current book ID matchs the desired book to be removed.
		if ((checkedOutBooks[x])->getIdCode() == (b)->getIdCode())
		{
			
			//Removes book from the checkout book list
			checkedOutBooks.erase(checkedOutBooks.begin() + x);
		}
	}
}


double Patron::getFineAmount()
{
	return fineAmount;
}

/*********************************************************************
** Description: Amends the fine amount of the patron
*****************************************************************/
void Patron::amendFine(double amount)
{
	fineAmount = fineAmount + amount;
}
