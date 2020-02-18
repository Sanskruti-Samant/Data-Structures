//3a factorial of a number using recursion
#include<iostream>
using namespace std;
//factorial function
int fact (int n)
{
    if(n==0)
        return 1;//base condition
    else
        return n*fact(n-1);
}
int main()
{
    int num;
    cout<<"Enter the number:";
    cin>>num;
    cout<<"\n Factorial of entered number :"<<fact(num);
    return 0;
}
