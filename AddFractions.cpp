/*Write a program to Add two fractions
Get the values for numerator and denominator of two fractions, 
then add that fractions. Consider the following format
x3/y3 = (x1/y1) + (x2/y2)
here x3 = (x1*y2) + (x2*y1) and y3 = (y1*y2)*/
#include <iostream>

using namespace std;

int main()
{
    int x1,x2,x3;
    int y1,y2,y3;
    cout<<"X1 & X2:";
    cin>>x1>>x2;
    cout<<"\nY1 & Y2:";
    cin>>y1>>y2;
    x3 = (x1*y2) + (x2*y1);
    y3 = (y1*y2);
    cout<<"Fraction is:"<<x3<<"/"<<y3;
    return 0;
}
