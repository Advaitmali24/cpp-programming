#include<iostream>
using namespace std;
int main()
{
int a;
int fact=1;
cout<<"enter any num to create factorial of:";
cin>>a;
for(int i=1;i<=a;i++){
fact=fact*i;
cout<<"factorial of"<<a<<"is:"<<fact<<endl;
}
return 0;
}
