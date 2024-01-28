#include<iostream>
using namespace std;

int main()
{
    int a=3;
    int* b= &a;
    cout<<"The number of a"<<&a<<endl;
    cout<<"The number of a"<<* b<<endl;
//pointer to pointer
int** d=&b;
cout<<"the number of value(value(d)) is"<<endl <<**d;
    return 0;
}