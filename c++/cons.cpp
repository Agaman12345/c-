#include<iostream>
#include<math.h>
using namespace std;
class qued
{
    private:
    float a,b,c;
    float x1,x2;
    public:
    qued()
    {
        a=0;b=0;c=0;

    }
    void getdata()
    {
        cout<<"\n enter the number :";
        cin>>a>>b>>c;

    }
    float disc()
    {
        return(b*b-4*a*c);
    }
    void root_equal()
    {
        cout<<"\n root are equal\n";
        cout<<"\n x1=2="<<-b/(2*a)<<endl;
         
    }
    void root_real()
    {
        cout<<"\n root are real and unequal\n";
        x1=(-b+sqrt(disc()))/(2*a);
        x2=(-b+sqrt(disc()))/(2*a);
    }
    void root_imag()
    {
        float rpart,ipart;
        rpart=-b/(2*a);
        ipart=sqrt(abs(disc()))/(2*a);
        cout<<"\n root are imaginary\n";
        cout<<"\n x1="<<rpart<<"+i"<<ipart<<endl;
        cout<<"\n x2 ="<<rpart<<"-i"<<ipart<<endl;

    }
};
int main()
{
    qued r1;
    
    r1.getdata();
    if(r1.disc()==0)
    r1.root_equal();
    else if(r1.disc()>0)
    r1.root_real();
    else
r1.root_imag();

}