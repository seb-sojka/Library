/******************************************************
**Date: 8/7/2016
**Description: Creates a library database that includes members and books. Book and members can be added to member.
** The class can also calculate fine on members for late fees. Members can check out, request and returns books.
**It can also increase the date in  days to calculate fines.
***********************************************************************************/

#ifndef LIBRARY_HPP
#define LIBRARY_HPP

#include <string>
#include <vector>
#include "Patron.hpp"

class Library
{
private:
    std::vector<Book*> holdings;
    std::vector<Patron*> members;
    int currentDate;
public:
    Library();
    void addBook(Book*);
    void addPatron(Patron*);
    std::string checkOutBook(std::string pID, std::string bID);
    std::string returnBook(std::string bID);
    std::string requestBook(std::string pID, std::string bID);
    std::string payFine(std::string pID, double payment);
    void incrementCurrentDate();
    Patron* getPatron(std::string pID);
    Book* getBook(std::string bID);
};

#endif
