/******************************************************************************
Write a program to identify if the number is Strong number or not
*******************************************************************************/

#include <iostream>

using namespace std;

int factorialfunction(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int checkstrong(int a){
    int temp = a ;
    int dividedigits = temp % 10;
    int sum = sum + factorialfunction(dividedigits);
    temp /= 10;
return sum;
}
int main()
{
    int a;
    cout << "Enter a Number:";
    cin >> a;


    if (factorialfunction(a))
    {
        cout << "It is a Strong Number";
            
    }
    else
    {
        cout << "Not a Strong Number";
    }
    return 0;
}
