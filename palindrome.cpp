#include<iostream>
using namespace std;
int main()
{
int num,rev=0,rem,ori;
cout<<"enter any intiger value:";
cin>>num;
ori=num;
while(num!=0){
rem=num%10;
rev=rev*10+rem;
num/=10;
}
if(ori==rev){
cout<<"no is palindrome no";
}
else {
cout<<"no is not palindrome no";
}
}
