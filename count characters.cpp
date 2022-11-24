/******************************************************************************
Take an integer as the input from the user and then calculate 
the number of digits in the given input and print it as the output.
*******************************************************************************/

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
   char a[20];
   
   cout<<"Enter a number:";
   cin>>a;
  
   cout<<"Number of characters:"<<strlen(a);

    return 0;
}
