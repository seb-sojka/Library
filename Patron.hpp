/******************************************************
**Date: 8/7/2016
**Description: A patron of the library. Can get the name of patron and the ID number. 
** Also can add and remove books from patron's checkout books. Can return the books
** checked out by patron. Patron can pay thier late fees and return the fine that
** currently patron has remaining. 
***********************************************************************************/

#ifndef PATRON_HPP 
#define PATRON_HPP
#include <string> 
#include <vector> 
#include "Book.hpp"
class Patron 
{ 
private:     
	std::string idNum;
	std::string name;
	std::vector<Book*> checkedOutBooks;
	double fineAmount;
public:
	Patron(std::string idn, std::string n);
	std::string getIdNum();
	std::string getName();
	std::vector<Book*> getCheckedOutBooks();
	void addBook(Book* b);
	void removeBook(Book* b);
	double getFineAmount();
	void amendFine(double amount); 
};
#endif
