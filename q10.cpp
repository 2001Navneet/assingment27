#include<iostream>
using namespace std;
class matrix
{
    int a[3][3];
    public:
    void setdata()
    {
        int i,j;
        cout<<"enter the element of the matrix: \n";
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                cin>>a[i][j];
                
            }
            cout<<" ";
        }
        cout<<"\n";
    }

    void showdata()
    {
        int i,j;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                cout<<a[i][j];
                cout<<" ";
            }
            cout<<"\n";
        }
        
    }
    void operator+(matrix n)
    {
        int mat[3][3];
        for(int i = 0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                mat[i][j]= a[i][j]+n.a[i][j];
            }
            cout<<"\n";
        }
        cout<<" ";
     cout<<"\n Addition of the matrix is: \n\n";
     for(int i= 0;i<3;i++)
     {
        for(int j=0;j<3;j++)
        {
            cout<<mat[i][j]<<" ";

        }
        cout<<"\n";
     }
   
    }
};

int main()
{
    matrix m,n,p;
     m.setdata();
     n.setdata();
     cout<<"\n First matrix : \n\n";
     m.showdata();
     cout<<"\n second matrix: \n\n";
     n.showdata();
     m+n;
   // m.operator+(n);//
    return 0;
}