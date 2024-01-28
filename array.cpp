#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int row,column;
    cout<<"enter row size"<<endl;
    cin>>row;
     cout<<"enter column size"<<endl;
    cin>>column;

    int a[row] [column];
    cout<<"enter array element"<<endl;
    for(int i=0;i<row;i++)
    {
      for(int j=0;j<column;j++)  
      {
        cin>>a[i][j];
      }
    }
    cout<<"array element"<<endl;
    for( int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)  
        {
           cout<<a[i][j]<<" "; 
        }
        cout<<"\n";
    }
    getch();
}