/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void thapHN(int n, char a, char b, char c) 
{
   if(n == 1) cout<<a<<"---->"<<c<<"\n";
   else
   {
        thapHN(n-1, a,c,b);
        thapHN(1, a,b,c);
        thapHN(n-1, b,a,c);        
   }
}

int main()
{
    thapHN(3, 'a', 'b', 'c');
    
    return 0;
}
