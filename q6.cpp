#include<iostream>
#include<cstring>
// operator overload to concatenate two string;
// and to compare two string are equal or not;
using namespace std;
class cstring
{
   public:
   char str[20];
   void get_string()
   {
    cout<<"Enter String: ";
    cin>>str;
   }
   void display()
   {
    cout<<str<<endl;
   }
   cstring operator+(cstring x)
   {
    cstring s;
    strcpy(s.str, str);
    strcat(s.str, x.str);
    return s;
   }
   int operator==(cstring &t);


};
int cstring::operator==(cstring &t)
{
    int equalornot = 1;
    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]!=t.str[i])
        {
            equalornot = 0;
            break;
        }
    }
    return equalornot;
}
int main()
{
    cstring str1,str2,str3;
    int result = 0;
    str1.get_string();
    str2.get_string();
    str3 = str1.operator+(str2);
    cout<<"\n\n concatenated string is: ";
    str3.display();
    result = (str1==str2);
    if(result==1)
    {
        cout<<"\n\n Both string are Equal";
    }
    else{
        cout<<"\n\n Both string are not equal";;
    }

    return 0;
}