#include<iostream>
using namespace std;
class hello
{
    public:
    string name;
    void show()
    {
        cout<<"my name is :"<<name<<endl;
        
    }
};
    int main()
     {
        hello ob;
        ob.name="rajesh";
        ob.show();

     }

