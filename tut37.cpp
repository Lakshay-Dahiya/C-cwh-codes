#include <iostream>
using namespace std;

//Base Class
class Employee{
    public:
        int id;
        float salary;
        Employee (int inpID)
        {
            id=inpID;
            salary=34.0;
        }
        Employee(){} // default constructor

};

// DERIVED CLASS
class Programmer : public Employee{
    public:
        int langcode;
        Programmer(int inpId)
        {
            id=inpId;
            langcode = 9;
        }
        

        void getdata(){
            cout<<id<<endl;
        }

};

int main(){
    Employee harry(1) ,rohan(2);
    cout<<harry.salary<<endl;
    cout<<rohan.salary<<endl;

    Programmer sam(10);
    cout<<sam.langcode<<endl;
    cout<<sam.id<<endl;
    sam.getdata();
    return 0;
}