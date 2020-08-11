#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int i,j,m,k;
    string str;
    cout<<"enter the string : ";
    cin>>str;
    for(i=0;i<str.length();i++)
    {
        j=str[i];
        if(j>=97 && j<=122)
        {
            m=j-96;
            if(i==0)
            {
                for(k=1;k<=m;k++)
                {
                    cout<<"#";
                }
            }
            else if(i%2==0)
            {
                for(k=1;k<=m;k++)
                {
                    cout<<"#";
                }
            }
            else
            {
                for(k=1;k<=m;k++)
                {
                    cout<<"$";
                }
            }
        }
            else
            {
                m=j-64;
                if(i==0)
                {
                    for(k=1;k<=m;k++)
                    {
                        cout<<"#";
                    }
                }
                else if(i%2==0)
                {
                    for(k=1;k<=m;k++)
                    {
                        cout<<"#";
                    }
                }
                else
                {
                    for(k=1;k<=m;k++)
                    {
                        cout<<"$";
                    }
                }
            }
    }
    return 0;
}
//97 and 122
