#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str[20];
    int i, length;
    int flag=0;
    cout<<"enter the string : ";
    cin>>str;
    length=strlen(str);
    for(i=0;i<length;i++)
    {
        if(str[i]!=str[length-i-1])
        {
            flag=1;
            break;
        }
    }
    if(flag)
    {
        cout<<str<<" is not a palindrome";
    }
    else
    {
        cout<<str<<" is a palindrome";
    }
    return 0;
}
