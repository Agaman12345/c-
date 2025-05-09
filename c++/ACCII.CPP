#include<iostream>
using namespace std;
class A
{
    char ch;
    public:
    void input()
    {
        cout<<"enter any charecter";
        cin>>ch;
    }
    void output()
    {
        cout<<"ascii value"<<ch<<"is"<<(int)ch;
    }
};
int main()
{
    A obj;
    obj.input();
    obj.output();
    return 0;

}