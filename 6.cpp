#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter 2 numbers";
    cin>>a>>b;
    cout<<"Numbers before swapping"<<endl;
    cout<<"Number1 : "<<a<<" Number2: "<<b<<endl;

int temp;
temp=a;
a=b;
b=temp;

    cout<<"Numbers after swapping"<<endl;
    cout<<"Number1 : "<<a<<" Number2: "<<b<<endl;

    return 0;
}
