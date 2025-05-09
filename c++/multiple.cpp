#include<iostream>
using namespace std;
class A
{
    public :
    void display()
    {
        cout<<"hello sir ";

    }
};
class B
{
    public :
    void sum()
    {
        cout<<"class me hai";

    }
};
class C: public A ,public B
{
    public:
    void add()
    {
        cout<<"sorry ham mumbai me hai";

    }
};
int main()
{
    C ob;
    ob.display();
    ob.sum();
    ob.add();
}