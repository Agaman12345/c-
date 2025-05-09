#include<iostream>
using namespace std;
class A
{
    int a,b,c;
    public:
    void input()
    {
        cout<<"enter two number";
        cin>>a>>b;
    }
    void output()
    {
        c=a*b;
    }
    void  show()
    {
        cout<<"this output is :"<<c;
    }
};
int main(){
A obj;
obj.input();
obj.output();
obj.show();
return 0;
}