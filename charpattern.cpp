#include<iostream>
using namespace std;


int main(){

    int i,j,k,n;
 
    cin>>n;
    
 
    for(i=1;i<=n;i++)
    {
        k = i;
        for(j=1;j<=i;j++,k++)
        {
           cout<<((char)(k+64));
        }
         cout<<endl;
    }
  
}


