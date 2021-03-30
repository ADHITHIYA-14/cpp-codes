#include<iostream>
using namespace std;



int main() 
{
    int i, n, sum = 0;

    
    cin >> n;

    for(i = 1; i <= n; i++) {

        // Check for even or not.
        if((i % 2) == 0) {

            sum += i;

        }
    }

    cout << sum;

    return 0;
    
} 
