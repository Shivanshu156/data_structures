#include<iostream>

using namespace std;

int main()
{
    int a = 5;
    int *p = &a;
    // cout<<"Address of a is "<<p<<" \n";
    // cout<<"Value at address p is "<<*p<<" \n";
    int A[5] = {1,2,3,4,5};
    cout<<"value of A is "<<A<<" \n";
    cout<<"value at A is "<<*A<<" \n";
    cout<<"value at A+1 is "<<*(A+1)<<" \n";

}