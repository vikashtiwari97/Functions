//Write a function to print square of the 5 natural number
#include<iostream>
using namespace std;
int square(int a)
{
    int square=a*a;
    return square;
}
int main(){
    for(int i=1;i<=5;i++)
    {
        cout<<square(i)<<" ";
    }
    return 0;
}