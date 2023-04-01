#include<iostream>
using namespace std;
class matrix
{
    int a[3][3];
    public:
    void getdata()
    {
        int i,j;
        cout<<"enter the element of the matrix\n:";
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                cin>>a[i][j];
            }
            // cout<<"\n";
        }
    cout<<"-----------------------\n";
    }
    void display()
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<a[i][j];
                cout<<" ";
            }
            cout<<"\n";
        }
    }
    void operator-(void)
    {
         for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                a[i][j] = -a[i][j];
                cout<<a[i][j];
                cout<<" ";
            }
            cout<<"\n";
        }
    }
};
int main()
{
    matrix m;
    m.getdata();
    m.operator-();
    // m.display();
    return 0;
}