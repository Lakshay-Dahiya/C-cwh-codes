#include <iostream>
using namespace std;

int main(){
    for(int i=0; i<10 ; i++){
        cout<<i<<endl;
        if(i==5){
            break;       //breaks the entire loop
        }
    }

    for(int j=0 ; j<10 ; j++){
        if(j==5){
            continue;     //just breaks the current iteration
        }
        cout<<j<<endl;
    }
    return 0;
}