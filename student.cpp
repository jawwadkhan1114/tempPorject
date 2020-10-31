#include "student.h"

void student::setOverdue() {
    this->hasOverdue = true;
}

bool student::isThereOverdue() {
    return this->hasOverdue;
}

void student::addBook(book b) {
    this->borrowedBooks.push_back(b);
    b.setStartime();
    cout << b.getname() << endl;
}

int student::numBorrowed() {
    return this->borrowedBooks.size();
}

vector<book> student::getBorrowed() {
    return this->borrowedBooks;
}
