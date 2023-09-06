#include <iostream>
using namespace std;

int sum(int a, int b){
    // a and b formal parameters
    int sum = a+b;
    return sum;
}

int sum2(int a, int b); //Function Prototype

void g();

int main(){
    int x;
    int y;
    cout<<"enter first number"<<endl;
    cin>>x;
    cout<<"enter second number"<<endl;
    cin>>y;

    // x and y actual parameters 

    cout<<"the sum is "<<sum(x,y)<<endl;
    g();
    cout<<"the sum is "<<sum2(x,y)<<endl;
    return 0;
}

int sum2(int a, int b){
    int sum = a+b;
    return sum;
}

void g(){
    cout<<"Hello!!!"<<endl;
}