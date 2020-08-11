#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int a,b,i,j;
    cout<<"enter the two numbers(a,b) : ";
    cin>>a>>b;
    cout<<"prime numbers between "<<a<<" and "<<b<<" are : ";
    for(i=a;i<=b;i++)
    {
        bool isPrime=1;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                isPrime=0;
            }
        }
        if(isPrime)
        {
            cout<<i<<"\n";
        }
    }
    return 0;
}
