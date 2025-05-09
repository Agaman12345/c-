#include<iostream>
using namespace std;
class A
{
    int n,count;
    public:
    int input()
    {
        cout<<"enter the number";
        cin>>n;

    }
    int output()
    {
        count=0;
        for(int i=1;i<=0;i++)
        {
            if(n%i==0)
            {
                count++;

            }
        }
        {
        if(count==2)
        cout<<"prime number";
        else
        cout<<"not prime number";

    }

};
int main()
{
    A obj;
    obj.input();
    obj.output();
    return 0;
}
