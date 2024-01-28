#include <iostream>
using namespace std;

void main()
{
    int a[6], temp,size,loc,min ,i, j;

    cout<<"Enter the array size:";
    cin>>size;
     
     cout<<"Enter array element:"<<endl;
     for(i=0;i<size;i++)
{
    cin>>a[i];
}
for(i=0;i<(size-1);i++)
{
    min=a[i];
    loc=i;
    for(j=i+1;j<size;j++)
    {
        if(a[j]<min)
        {
            min=a[j];
            loc=j;
        }
    }
    temp=a[i];
    a[i]=a[loc];
    a[loc]=temp;
}
    