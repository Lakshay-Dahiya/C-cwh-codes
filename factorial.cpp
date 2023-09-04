#include <iostream>
using namespace std;
int main(){
    int n;
    int ans = 1;
    cout<<"enter number"<<endl;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        /* code */
        ans = ans*i;

    }
    cout<<ans;
    return 0;
    
}