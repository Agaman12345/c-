#include<iostream>
using namespace std;
class A
{
    public:
    void display()
    {
        cout<<"ehllo everyone my name is gopal hai\n";

    }
};
class B:public A
{
    public :
    void display2()
    {
        cout<<"hello sir\n";
    }
};
class C:public B{
    public:
    void pharm()
    {
        cout<<"class 4 me hai mohan ji pita ";
    }
};
int main()
{
    C ob;
    ob.display();
    ob.display2();
    ob.pharm();
}