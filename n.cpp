#include<iostream>
#include<cstring>
using namespace std;
class cstring
{
    public:
    char str[20];
    void get_string()
    {
        cout<<"\nEnter the string:";
        cin>>str;
    }
    void display()
    {
        cout<<"\nentered string is: "<<str;
    }
    // function to concatenate two string
    cstring operator+(cstring x)
    {
        cstring s;
        strcpy(s.str,str);
        strcat(s.str,x.str);
        return s;
    }
    // funtion overloading to compare two string
    int operator==(cstring &t);
   
};
int cstring::operator==(cstring &t)
 {
        int equalornot=1;
        for(int i =0; str[i]!='\0';i++)
        {
            if(str[i]!=t.str[i])
              {equalornot = 0;
              break;
              }
              
        }
        return equalornot;
    }
int main()
{
   cstring str1,str2,str3;
   str1.get_string();
   str2.get_string();
    str3 = str1+str2;
  cout<<"\n\nthe concatenated string is:";
  str3.display();

  int result = 0;
  result=(str1==str2);
  if(result==1)
  {
    cout<<"string are equal\n";

  }
  else
  {
    cout<<"string are not equal\n";
  }


    return 0;
}