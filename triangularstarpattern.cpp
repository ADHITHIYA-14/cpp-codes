#include<iostream>
using namespace std;


int main(){

	int n;
    cin>>n;
    int i=0,j=0;
    
    while(i<n)
    {
        while(j<=i)
        {
            cout<<"*";
            j++;
            
        }
        j=0;
        i++;
        cout<<endl;
    }
    
}


