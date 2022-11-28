/******************************************************************************
Get the input from the user for the value of n and then find the sum of first n natural numbers.
*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int a,sum=0;
    cout<<"Enter a number:";
    cin>>a;
    for(int i=0;i<=a;i++)
    {
        if(a>0){
           sum=sum+i;
        }
    };
    cout<<"Sum upto "<<a<<" natural numbers is: "<<sum;
    return 0;
}
