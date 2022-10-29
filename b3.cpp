/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

long fibo(int a) 
{
   if(a < 2) return 1;
   else 
   {
       return fibo(a - 1) + fibo(a - 2);
   }
}

int main()
{
    
    cout<<fibo(25);
    return 0;
}
