//TO GENERATE FIBONACCI SEQUENCE USING RECURSION
#include<iostream>
using namespace std;

int fib(int n)
{   //cout<<"{"<<n<<"}\t";
    int fibTerm;
    if((n==1)|(n==0))
        fibTerm=n;
    else
        fibTerm = (fib(n-1)+fib(n-2));
    return fibTerm;

}

int main()
{
     int n,i=0;
     cout<<"Input the number of terms for Fibonacci series:",cin>>n;
     cout<<"\n Fibonacci series is as follows\n";
     while(i<n)
     {
         cout<<"  "<<fib(i)<<endl;
         i++;
     }
     return 0;
}
