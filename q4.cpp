#include<iostream>
using namespace std;
class time
{
    int hour,minutes,second;
    public:
    void setdata(int a,int b,int c)
    {
        hour= a;
        minutes = b;
        second =c;
    }
    // overloading == operator
    bool operator==(time t)
    {
         if(hour==t.hour&& minutes==t.minutes && second==t.second)
         return true;
         else
             return false;
    }
    // void display()
    

    
};
int main()
{
    int h,min,sec;
    int h1,min1,sec1;
    cout<<"Enter first time: \n";
    cout<<"\nEnter hours: ";
    cin>>h;
    cout<<"\nEnter minutes: ";
    cin>>min;
    cout<<"\nEnter seconds: ";
    cin>>sec;
    cout<<"\n\n";
    cout<<"*************************\n";
    cout<<"Enter second time: \n";
    cout<<"\nEnter hours: ";
    cin>>h1;
    cout<<"\nEnter minutes: ";
    cin>>min1;
    cout<<"\nEnter seconds: ";
    cin>>sec1;
    cout<<"\n\n";

     cout<<"Entered first time: \n";
    cout<<"--------------------------\n";
    cout<<"Enter hours: "<<h<<endl;
    cout<<"Enter minutes: "<<min<<endl;
    cout<<"Enter seconds: "<<sec<<endl;
     cout<<"\n\n";
    cout<<"Entered second time: \n";
    cout<<"---------------------------\n";
     cout<<"Enter hours: "<<h1<<endl;
    cout<<"Enter minutes: "<<min1<<endl;
    cout<<"Enter seconds: "<<sec1<<endl;

    time t,t2,t3;
    t.setdata(h,min,sec);
    t2.setdata(h1,min1,sec1);
    if(t==t2)
    {
        cout<<"Time are same:\n";
        
    }
    else
      cout<<"Time are not same: \n";
    return 0;
}