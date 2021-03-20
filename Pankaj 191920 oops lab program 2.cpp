#include<iostream>
using namespace std;
inline int power(int x,int y);
int main()
{
    cout<<"this program work on the concept of inline function"<<endl;
cout<<"the value of power is\n"<<power(2,4)<<endl;
cout<<"the value of power is\n"<<power(2,3)<<endl;
cout<<"the value of power is\n"<<power(2,7)<<endl;
return 0;
}
int power(int p,int q)
{
int result=1,i;
for(i=1;i<=q;i++)
{
result=result*p;
}
return result;
}
