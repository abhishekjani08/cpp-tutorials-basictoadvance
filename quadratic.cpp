/******************************************************************************
Get the values of a, b and c (coefficients of quadratic equation) as input from the user and calculate 
the roots and print as the output.
*******************************************************************************/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a,b,c;
    float x1,x2;
    cout<<"Enter a:\n";
    cin>>a;
    cout<<"Enter b:\n";
    cin>>b;
    cout<<"Enter c:\n";
    cin>>c;
    x1=(-b + sqrt((b*b)-4*a*c))/ 2*a;
    x2=(-b - sqrt((b*b)-4*a*c))/ 2*a;
    if(x1==x2)
    {
        cout<<"Roots are equal\n";
        cout<<"Root 1 = Root 2 = "<<x1;
    }
    else 
    {
        cout<<"Root1=\n"<<x1;
        cout<<"Root2=\n"<<x2;
    }
    return 0;
}
