// Given two numbers a and b,write a program to print all the prime numbers present between a and b
#include <iostream>
using namespace std;
bool odd(int num)
{
    if (num % 2 != 0)
    {
        return true;
    }
    return false;
}
int main()
{
    int a;
    int b;
    cout << "Enter the two numbers : ";
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (odd(i))
        {
            cout << i << " ";
        }
    }
    return 0;
}