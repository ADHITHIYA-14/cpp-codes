#include<iostream>
using namespace std;
int main()
{
    int ror= 15 | 30;    //for or operator
    int rand = 15 & 30;  //for and operator
    int rnot = ~15;     //for not operator
    int rxor = 15^30;   //for xor operator
    int rls = 15 << 2;  //for left shift operator
    int rrs = 15>>2;  //for right shift operator

    cout << ror <<endl;
    cout << rand <<endl;
    cout << rnot <<endl;
    cout << rxor <<endl;
    cout << rls <<endl;
    cout << rrs <<endl;
 return 0;
}