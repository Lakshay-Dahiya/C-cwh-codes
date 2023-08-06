#include <iostream>
using namespace std;
int main(){
    int a = 7;
    int *b= &a;

    cout<<a<<endl;  //value of a
    cout<<&a<<endl; //address of a
    cout<<b<<endl;  //address of a
    cout<<&b<<endl; //address of b
    cout<<*b<<endl<<endl; //value at address of a

    int **c = &b;
    cout<<"Pointer to Pointer"<<endl;
    cout<<c<<endl;  //address of b
    cout<<*c<<endl; //address of a (value at address c)
    cout<<**c<<endl; //value at address value at (value at 'c') or value of a
    return 0;
}