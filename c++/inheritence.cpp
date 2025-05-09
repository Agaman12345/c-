#include<iostream>
using namespace std;
class A
{
    public:
    void display()
    {
        cout<<"my stp computer class\n";
    }
};
class B:public A
{
    public :
    void pharm()
    {
        cout<<"jdfhtdsjghimdsljfhhdgkdg";
    }
};
int main()
{
    B ob ;
    ob.display();
    ob.pharm();

}