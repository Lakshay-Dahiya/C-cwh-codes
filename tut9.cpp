#include <iostream>
using namespace std;
int main(){
    int age ;
    cout<<"enter age"<<endl;
    cin>>age;
    switch (age)
    {
    case 18:
        cout<<"kid pass"<<endl;
        break;
    case 8:
        cout<<"not allowed"<<endl;
    default:
    cout<<"allowed"<<endl;
        break;
    }
    return 0;
}