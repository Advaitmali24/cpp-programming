#include<iostream>
using namespace std;
int main()
{
int a,mult;
cout<<"enter any no to create table of :";
cin>>a;
for(int i=1;i<=10;++i){
cout<<a<<"x"<<i<<"="<<(a*i)<<"\n";
}
return 0;
}
