paste the code
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int n,i;
    cout<<"enter the number of arguments : ";
    cin>>n;
    cout<<"enter the numbers one by one : ";
    int min=2147483647;
    for(i=0;i<n;i++)
    {
        int isNumber=1;
        while(isNumber)
        {
            string str;
            cin>>str;
            int will;
            for(i=0;i<str.length();i++)
            {
                if(isdigit(str[i])==false)
                {
                    will=0;
                    break;
                }
                else
                {
                    will=1;
                }
            }
            if(will==1)
            {
                int num=stoi(str);
                if(num<min)
                {
                    min=num;
                }
                isNumber=0;
            }
            else
            {
                cout<<"enter a valid number.."<<"\n";
            }
        }
    }
    cout<<"the smallest number is : "<<min;
    return 0;
}
