/******************************************************************************
 Write a program to find Fibonacci series up to n
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a;
    cout<<"Enter a Number:";
    cin>>a;
    cout<<"Fibonacci Sequence is :";
    
    int zero=0;
    int first=1;
    int next=0;
    
    for (int i = 1; i <= a; ++i) {
        if(i == 1) {
            cout << zero << ", ";
            continue;
        }
        if(i == 2) {
            cout << first << ", ";
            continue;
        }
        next= zero + first;
        zero = first;
        first = next;
        
        cout << next << ", ";
    }
    
    return 0;
}
