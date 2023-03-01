//Given radius of a cricle. write a function to print the area and circumfernce of the circle

#include <iostream>
using namespace std;
double circle(int r)
{
    double c = 2 * 3.14 * r;
    return c;
}
double area(int r)
{
    double area = 3.14 * r * r;
    return area;
}
int main()
{
    cout << "Enter the radius : ";
    int r;
    cin >> r;
    cout << "Area of the Circle : " << area(r) << endl;
    cout << "Circumference of the Circle : " << circle(r);
    return 0;
}