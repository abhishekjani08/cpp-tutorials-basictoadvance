/******************************************************************************
Write a program to identify if the number is Strong number or not
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{   
    int a;
    cout<<"Enter a Number:";
    cin>>a;
    
    int fact = 1;
    int sum=0;
    for(int i=1; i<=a; i++)
    {
    fact = fact * i;
    sum = sum + a % 10;
    a = a/10;
    }
    
    if(a==sum)
    {
        cout<<"It is a Strong Number"<<fact<<"  "<<sum;
    }
    else
    {
        cout<<"Not a Strong Number"<<fact<<"  "<<sum;
    }

    return 0;
}
