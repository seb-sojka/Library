
/******************************************************
**Date: 8/7/2016
**Description: A book of the library. Can get and set the title, author, and ID number of book and its location.
** Can move location of the book from on shelf, on hold shelf, and checked out. Can also
** set out how has it checked out. It also sets the check out length of the book, 21 days.
***********************************************************************************/

#ifndef BOOK_HPP
#define BOOK_HPP

#include <string>

class Patron;

// These three locations are mutually exclusive, but note that
// a Book can be on request for a Patron while being checked
// out to another Patron.  In that case the Book's location is
// CHECKED_OUT, and when it is returned, it's location will
// become ON_HOLD_SHELF. 
enum Locale {ON_SHELF, ON_HOLD_SHELF, CHECKED_OUT};


class Book
{
private:
    std::string idCode;
    std::string title;
    std::string author;
    Locale location;
    Patron* checkedOutBy;
    Patron* requestedBy;
    int dateCheckedOut;
    static const int CHECK_OUT_LENGTH = 21;
public:
    Book(std::string idc, std::string t, std::string a);
    int getCheckOutLength();
    std::string getIdCode();
    std::string getTitle();
    std::string getAuthor();
    Locale getLocation();
    void setLocation(Locale);
    Patron* getCheckedOutBy();
    void setCheckedOutBy(Patron*);
    Patron* getRequestedBy();
    void setRequestedBy(Patron*);
    int getDateCheckedOut();
    void setDateCheckedOut(int);
};


#endif
