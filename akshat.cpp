#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
   string temp;
   int ans=0;
   cin>>temp;
   string stop="";
   stop+='x';
   while(temp!=stop)
   {
       ans+=stoi(temp);
       cin>>temp;
   }
   cout<<ans<<endl;

    return 0;
}