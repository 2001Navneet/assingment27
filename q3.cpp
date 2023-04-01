// adding two complex no by using friend function
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
        cout<<"a+ib"<<a<<"+"<<b<<"i"<<endl;
    }
   friend complex operator+(complex c1, complex c2);
};
complex operator+(complex c1, complex c2)
{
    complex temp;
    temp.a = c1.a+c2.a;
    temp.b = c1.b+c2.b;
    return temp;

}
int main()
{
    complex c1,c2,c3;
    c1.setdata(4,5);
    c2.setdata(7,4);
    c3 = c1+c2;
    c3.display();
    return 0;
}