// to overload unary operator
#include<iostream>
using namespace std;
class integer
{
    int num;
    public:
    integer()
    {

    }
    integer(int x)
    {
        num = x;
    }
    void operator++(void)// pre increment
    { 
        num = ++num;
    }
     void operator++(int) // post increment
    { 
        num = num++;
    }
    void operator--(void)
    {
        num = --num;
    }
    void display()
    {
        cout<<"the vlaue of a after incrementing is="<<num<<endl;
    }
    void dec()
    {
        cout<<"the vlaue  after decrementing = "<<num;
    }
};
int main()
{
    integer i(4);
    i.operator++();
    i.display();
     i.operator--();
     i.dec();
     
     return 0;
}
 