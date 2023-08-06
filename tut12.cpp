#include <iostream>
using namespace std;
int main(){
    int a = 7;
    int *b= &a;

    cout<<a<<endl;  //value of a
    cout<<&a<<endl; //address of a
    cout<<b<<endl;  //address of a
    cout<<&b<<endl; //address of b
    cout<<*b<<endl; //value of a

    return 0;
}