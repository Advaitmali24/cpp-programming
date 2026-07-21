#include<iostream>
using namespace std;
int main()
{
int a,b;
cout<<"enter any 2 numbers :";
cin>>a>>b;
a=a+b;
b=a-b;
a=a-b;
cout<<"after swapping"<<endl;
cout<<"first number"<<a<<endl;
cout<<"second number"<<b<<endl;
}
