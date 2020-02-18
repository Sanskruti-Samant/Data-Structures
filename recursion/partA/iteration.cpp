
#include<iostream>
using namespace std;
int fact(int n);
int main()
{
    int num,i;
    cout<<"Enter the number:";
    cin>>num;
    cout<<"\n Factorial of entered number :"<<fact(num);

}
int fact(int n)
{
    int fact1=1,i;
    for(i=n;i>0;i--)
    fact1=fact1*i;
    return(fact1);
}
