#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int i;
    cout<<"enter the text to encrypt : ";
    string string1;
    cin>>string1;
    for(i=0;i<string1.length();i++)
    {
        string1[i]+=5;
    }
    cout<<string1;
    return 0;
}
