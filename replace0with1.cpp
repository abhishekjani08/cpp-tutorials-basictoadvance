// Write a program to Replace all 0’s with 1 in a given integer
#include <iostream>
using namespace std;
int main()
{
    string a1,a2;
    cout << "Enter a number:";
    cin >> a1;
    cout << "Before replacement, string is :"<<a1<<'\n';  
a1.replace(0,1,a2);   
cout << "After replacement, string is :"<<a1<<'\n';  

    return 0;
}