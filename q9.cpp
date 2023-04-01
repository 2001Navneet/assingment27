#include<iostream>
using namespace std;
class mystring
{
    char str[500];
    public:
    void accept_string()
    {
        cout<<"Enter the string: \n";
        cin>>str;

    }
    void display()
    {
        cout<<"\nThe entered string is : "<<str;
    }
    void operator!();// oveloading ! operator 
};
void mystring::operator!()
{
    for(int i=0; str[i]!='\0';i++)
    {
        if(str[i]>= 65 && str[i]<= 90)
        {
            str[i] = str[i]+32;// it will convert in lowercase
        }
        else if(str[i]>=97 &&  str[i]<=122)
        {
            str[i] = str[i]-32; // it will conver into capital letter
        }
    }
    cout<<"\n\n Reverse case string is: "<<str;
}
int main()
{
    mystring s1;
    s1.accept_string();
  cout<<"\n\n string is: ";
  s1.display();
  s1.operator!();// OR !s1;(we can call in this way also)
    return 0;
}