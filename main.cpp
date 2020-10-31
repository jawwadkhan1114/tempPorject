#include <iostream>
#include "student.h"
using namespace std;
int main() {
    //initialize book
    book bk("bk1");
    book bk2("bk2");

    //intialize student
    student st;

    // add books
    st.addBook(bk2);
    st.addBook(bk);
    //start loop
    bool flag = true;
    while(flag){
        for(int i = 0; i < st.numBorrowed(); i++){
            book temp = st.getBorrowed().at(i);
            //cout << temp.getname() << endl;
            if(temp.getDiff() == temp.getreturnTime() && !temp.isItOverdue()){
                temp.setOverDue(true);
                //flag = false;
                cout << "here" << temp.getname();
            }
        }
    }
    return 0;
}
