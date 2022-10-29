/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int ucln(int a, int b) 
{
    if(a==0||b==0) return b+a;
    if(a==b)return a;
    else 
    {
        if(a > b) return ucln(a%b, b);
        else return ucln(a, b%a);
    }
}

int main()
{
    
    cout<<ucln(20,20);
    return 0;
}
