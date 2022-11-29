/******************************************************************************
Write a program to reverse a given number and execute it.
*******************************************************************************/

#include <iostream>
#include<string>
#include <algorithm> 

using namespace std;

int main()
{   
    string a;
    cout<<"Enter a Number:";
    cin>>a;
    reverse(a.begin(), a.end());
    cout<<"Reverse is:"<<a;
    return 0;
}
