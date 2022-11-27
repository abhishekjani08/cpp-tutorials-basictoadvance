/*****************************************************************************
Get a number from user and then find the sum of the digits in the given number
******************************************************************************/

#include <iostream>

using namespace std;
   
    int sumofdigits(int n)
    {
        int sum = 0;
        while (n != 0)
            {
                sum = sum + n % 10;
                n = n/10;
            }
        return sum;
    }
    
int main()
{
    int n,sum=0;
    cout<<"Enter a number:";
    cin>>n;
    cout<<"Sum: "<<sumofdigits(n)<<endl;
    return 0;
}
