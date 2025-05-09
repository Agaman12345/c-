#include<iostream>
using namespace std;
class A
{
    int n,i,r;
    public :
    void table()
    {
        cout<<"enter the number";
        cin>>n;
        for(i=1;i<=10;i++)
        {
            r=n*i;
            cout<<n<<"* "<<i<<"="<<r<<endl;

        }
    }
};
int main()
{
    A obj;
    obj.table();

}