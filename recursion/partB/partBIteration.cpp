//TO GENERATE FIBONACCI SEQUENCE USING iteration
#include<iostream>
using namespace std;
int fibo(int n);
int main()
{
    int n,i;
    cout<<"\n Enter the number of terms for fibonacci series:";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<" "<<fibo(i);
    }
    return 0;
}
int fibo(int n)
{
    int fib=0,a=0,b=1;
    if((n==0 )|(n==1))
        return n;
    for(int i=2; i<=n;i++)
    {
        fib=a+b;
        a=b;
        b=fib;
    }
    return fib;
}
