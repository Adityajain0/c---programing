#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num,i,check=0;
    cout<<"Enter the number"<<endl;
    cin>>num;

    for(i=0;i<num;i++)
    {
        if(num%i==0){
            check++;
        }
    }
    if(check==2){
        cout<<"The number is prime";
    }
    else{
        cout<<"the number is not prime";
    }
}


   