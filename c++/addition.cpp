#include<iostream>
using namespace std;
class A
{
    int a,b,c;
    public:
    int input()
    {
        cout<<"enter the number";
        cin>>a>>b;
    }
    int sum()
    {
     c=a+b;
    }
    int show()
    {
        cout<<c;

    }

    
};
int main()
{
    A obj;
    obj.input();
    obj.sum();
    obj.show();
    return 0;
}
