#include <iostream>
using namespace std;

bool isPrime(int n)
{
    
    if (n <= 1)
        return false;
 
    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
 
    return true;
}

void printPrime(int n)
{
    for (int i = 2; i <= n; i++) {
        if (isPrime(i))
            cout << i <<endl;
    }
}
// Driver Code
int main()
{
    int n;
    cin>>n;
    printPrime(n);
}

