/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

struct thap
{
    char a, b, c;
    int n;
};
struct stack
{
    thap th[200];
    int top = -1;
    void push(thap a)
    {
        top++;
        th[top] = a;
    }
    thap pop()
    {
        thap t =th[top];
    
        top--;
        return t;
    }
    bool is_empty()
    {
        return top==-1?true:false;
    }
};

void thapHN(int n, char a, char b, char c) 
{
    stack s;
    thap tt;
    tt.n=n;
    tt.a=a;
    tt.b=b;
    tt.c=c;
    s.push(tt);
    while(!s.is_empty())
    {
        thap t = s.pop();
        if(t.n==1)
            cout<<"\n"<<t.a<<"-->"<<t.c;
        else
        {
           
            thap t1;
            t1.n=t.n-1;
            t1.a=t.a;
            t1.b=t.c;
            t1.c=t.b;
            s.push(t1);
            
            thap t2;
            t2.n=1;
            t2.a=t.a;
            t2.b=t.b;
            t2.c=t.c;
            s.push(t2);
            
            thap t3;
            t3.n=t.n-1;
            t3.a=t.b;
            t3.b=t.a;
            t3.c=t.c;
            s.push(t3);
        }
    }
}

int main()
{
    thapHN(3, 'a', 'b', 'c');
    
    return 0;
}
