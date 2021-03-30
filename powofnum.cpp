#include<iostream>
#include<cmath>
using namespace std;

int main() 
{
	 int x, n;
    cin >> x >> n;

    long long ans = 1;
    while(n > 0) 
    {
        ans = ans *x;
        n = n - 1;
    }
    cout << ans;
    return 0;



}