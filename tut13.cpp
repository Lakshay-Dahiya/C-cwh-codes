#include <iostream>
using namespace std;
int main(){
    int marks []={10,20,30,40};
    int*p =  marks; //int*p =&marks ; incorrect for arrays
    cout<<"the value at *p or marks[0] is " <<*p<<endl; 
    cout<<"the value at *(p+1) or marks[1] is "<<*(p+1)<<endl; 
    cout<<"the value at *(p+2) or marks[2] is " <<*(p+2)<<endl; 
    cout<<"the value at *(p+3) or marks[3] is " <<*(p+3)<<endl; 
    return 0;

}