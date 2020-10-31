#include <vector>
#include "book.h"
using namespace std;
class student {
private:
    bool hasOverdue;
    vector<book> borrowedBooks;
public:
    void setOverdue();          //if theres an overdue book, set hasOverdue to true
    bool isThereOverdue();      //check if the student has any overdue books
    void addBook(book b);       //add book to vector
    int numBorrowed();
    vector<book> getBorrowed();
};
