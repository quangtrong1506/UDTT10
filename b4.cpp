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
       int x = 1;
       int y = 1;
       int kq = 0;
       for (int i = 2; i <= a; i++) {
           kq = x + y;
           x = y;
           y = kq;
       }
       return kq;
   }
}

int main()
{
    
    cout<<fibo(2);
    return 0;
}
