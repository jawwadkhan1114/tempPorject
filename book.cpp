//
// Created by jawwa on 10/30/2020.
//

#include "book.h"

book::book(string name){
    this->isOverdue = false;                //book is not overdue
    this->returnTime = 5 * 1;              //5 seconds is 1 day. 30 days soo 5 * 30
    this->name = name;
}

//compare current time to the time the book was taken out
double book::getDiff() {
    double duration;
    duration = ( std::clock() - this->borrowStartTime ) / (double) CLOCKS_PER_SEC;
    return duration;
}

//set when the book is overdue
void book::setOverDue(bool isOverdue) {
    this->isOverdue = isOverdue;
}

//get the time when the book should be returned
double book::getreturnTime() {
    return this->returnTime;
}

void book::setStartime() {
    this->borrowStartTime = clock();        //set borrowStartTime to when the book is taken out
}

string book::getname(){
    return this->name;
}

bool book::isItOverdue() {
    return this->isOverdue;
}

