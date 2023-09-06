#include <iostream>
using namespace std;
int glo = 9;
void sum(){
    //int a;
    cout<<glo<<endl;
}
int main(){
    int glo = 5;
    glo = 700;
    sum();
    cout<< glo<<endl;
    return 0;
}