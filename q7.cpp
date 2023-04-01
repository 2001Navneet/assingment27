#include<iostream>
using namespace std;
class fraction
{
    long num;
    long deno;
    public:
     fraction(long int n=0,long int d = 0)
     {
        num = n;
        deno= d;
     }
     // overloading >> and << operator
     friend void operator>>(istream &in, fraction &f)
     {
        cout<<"\n Numerator : ";
        in>>f.num;
        cout<<"\n Denominator: ";
        in>>f.deno;
     }
     friend void operator<<(ostream &out, fraction &f)
     {
        out<<f.num<<"/"<<f.deno;

     }
     fraction operator++()// preincrement
     {
        ++num;
        ++deno;
        return(*this);
     }
     fraction operator++(int )
     {
        fraction old=*this; // post increment first value get assinged to tmp varible
        num++;
        deno++;
        return old;
     }


};
int main()
{
fraction f1,f2;
cout<<"\n f1: ";

cout<<f1;
cout<<"\n f2 : ";
cout<<f2;
cout<<"\n\n Enter 1st fraction value\n";
cin>>f1;
cout<<"\nf1++ : ";
f1++;
cout<<f1;
cout<<"\n++f1 : ";
++f1;
cout<<f1;
cout<<"\n\nEnter 2nd fraction value \n";
cin>>f2;
f2 =++f1;
cout<<"\n f2 = ++f1";
cout<<"\n f1 : ";
cout<<f1;
cout<<"\n f2 : ";
cout<<f2;
f2 = f1++;
cout<<"\n\n f2 = f1++";
cout<<"\n f1 : ";
cout<<f1;
cout<<"\n f2  : ";
cout<<f2;
return 0;
}



