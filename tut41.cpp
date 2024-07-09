#include <iostream>
using namespace std;

class base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};
class base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};
class base3
{
protected:
    int base3int;

public:
    void set_base3int(int a)
    {
        base3int = a;
    }
};
//DERIVED CLASS
class Derived : public base1,public base2,public base3{
    public:
        void show(){
            cout<<"value of base1int is "<<base1int<<endl;
            cout<<"value of base2int is "<<base2int<<endl;
            cout<<"value of base3int is "<<base3int<<endl;
            cout<<"sum of all 3 values is "<<base1int + base2int + base3int<<endl;
        }

};
int main(){
    Derived harry;
    harry.set_base1int(25);
    harry.set_base2int(15);
    harry.set_base3int(5);
    harry.show();
    return 0;
}