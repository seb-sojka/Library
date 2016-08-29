/******************************************************
**Date: 8/7/2016
**Description: A book of the library. Can get and set the title, author, and ID number of book and its location.
** Can move location of the book from on shelf, on hold shelf, and checked out. Can also
** set out how has it checked out. It also sets the check out length of the book, 21 days.
***********************************************************************************/
#include "Book.hpp"

using namespace std;

/*********************************************************************
** Description: Only constructor. Input includes three string for ID number, author,
** and title of the book. Sets ID number, author and title. Sets the location of book on shelf
** and checked out and requested by to blank (NULL)
*********************************************************************/
Book::Book(string idc,string t, string a)
{
	idCode = idc;
	title = t;
	author = a;
	setCheckedOutBy(NULL);
	setRequestedBy(NULL);
	setLocation(ON_SHELF);
}

//Returns check out length of the book, 21 days. 
int Book::getCheckOutLength()
{
	return CHECK_OUT_LENGTH;
}

string Book::getIdCode()
{
	return idCode;
}

string Book::getTitle()
{
	return title;
}

string Book::getAuthor()
{
	return author;
}

Locale Book::getLocation()
{
	return location;
}

void Book::setLocation(Locale localeIn)
{
	location = localeIn;
}

Patron * Book::getCheckedOutBy()
{
	return checkedOutBy;
}

void Book::setCheckedOutBy(Patron *patronIn)
{
	checkedOutBy = patronIn;
}

Patron * Book::getRequestedBy()
{
	return requestedBy;
}

void Book::setRequestedBy(Patron *patronIn)
{
	requestedBy = patronIn;
}

int Book::getDateCheckedOut()
{
	return dateCheckedOut;
}

void Book::setDateCheckedOut(int dateIn)
{
	dateCheckedOut = dateIn;
}

