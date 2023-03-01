// Given the age of a persion, write a function to check if the is eligible to vote or not.
#include <iostream>
using namespace std;
bool vote(int age)
{
    if (age >= 18)
    {
        return true;
    }
    return false;
}
int main()
{
    cout << "Enter the age : ";
    int age;
    cin >> age;
    if (vote(age) == true)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}