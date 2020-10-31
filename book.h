#include <iostream>
#include <ctime>
using namespace std;
class book {
private:
    double borrowStartTime;
    double returnTime;
    bool isOverdue;
    string name;
public:
    book(string name);
    double getDiff();
    void setOverDue(bool isOverdue);
    double getreturnTime();
    void setStartime();
    string getname();
    bool isItOverdue();
};

