#include<iostream>
using namespace std;


int main()
{
    int n,a=0,c,b=1,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        c = a+b;
        a = b;
        b = c;
    }
    cout<<a;
}
