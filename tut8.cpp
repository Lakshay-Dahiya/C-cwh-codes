#include <iostream>
#include <iomanip>

using namespace std;
int main(){
    const float a = 3.7;
   // a = 7; //error because we've declared a as constant

   int x = 3;
   int y = 78;
   int z = 1234;
   
   cout<<"Using Endl"<<endl;
   cout<<x<<endl;
   cout<<y<<endl;
   cout<<z<<endl;

   cout<<"Using Setwidth"<<endl;
   cout<<setw(4)<<x<<endl;
   cout<<setw(4)<<y<<endl;
   cout<<setw(4)<<z<<endl;
    return 0;
}