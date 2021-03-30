#include<iostream>
using namespace std;


int main(){

    int i, j;
    int n;
    cin>>n;
	for(i=1; i<=n; i++)
    {
        // Logic to print numbers
        for(j=i; j>=1; j--)
        {
            cout<<j;
        }

        cout<<endl;
    }
}


