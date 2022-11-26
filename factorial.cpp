
/******************************************************************************
Get a number from user for which you need to find the factorial,
then calculate the factorial and give it as the output.
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{   
    int a;
    cout<<"Enter a number:";
    cin>>a;
    
    int fact = 1, i;
    for(i=1; i<=a; i++)
    fact = fact * i;
    cout<<"Factorial of "<<a<<" is "<<fact;
   
    return 0;
}
