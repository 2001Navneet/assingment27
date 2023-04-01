#include<iostream>
using namespace std;
class numbers
{
    int x,y,z;
    public:
    void setdata(int a, int b,int c)
    {
        x=a;
        y=b;
        z=c;
    }
  
    numbers operator-(void)
    {
       
       x = -x;
       y= -y;
       z = -z;
    
    }
      void display()
    {
        cout<<"\nx= "<<x<<"\ny = "<<y<<"\nz = "<<z;

    }
};
int main()
{ 
    numbers n,n2;
    int a,b,c;
    cout<<"enter the vlaue of a b and c: \n";
    cin>>a>>b>>c;
    n.setdata(a,b,c);
     n.operator-();
    n.display();


    return 0;
}