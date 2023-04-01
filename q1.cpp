// operator overloading and friend function
#include<iostream>
using namespace std;
class complex
{
    int a,b;
    public:
    void setdata(int x,int y)
    {
        a=x;
        b=y;
    }
void display()
{
    cout<<"a+bi= "<<a<<" + "<<b<<"i"<<endl;
}
complex operator+ (complex c)
{
    complex temp;
    temp.a = a+c.a;
    temp.b = b+c.b;
    return temp;
}
// overloadig - operator
complex operator-(complex d)
{
    complex temp;
    temp.a = a-d.a;
    temp.b = b-d.b;
    return temp;
}
complex operator*(complex t)
{
    complex temp;
    temp.a = a*t.a;
    temp.b = b*t.b;
    return temp;
}
bool operator==(complex e)
{
    if(a == e.a && b == e.b)
        return true;
    else 
        return false;
}
};
int main()
{
    complex c1,c2,c3;
    c1.setdata(10,7);
    c2.setdata(5,6);
    c3 = c1.operator+(c2);

    c3.display();
    c3= c1.operator-(c2);
    c3.display();
    cout<<"\n";

    c3 = c1.operator*(c2);
    c3.display();
cout<<"\n";
    
    cout<<"compare c1 and c2 ="<<(c1==c2);
    return 0;
}