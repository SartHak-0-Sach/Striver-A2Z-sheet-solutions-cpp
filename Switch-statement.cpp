/*
    Time complexity: O(1)
    Space complexity: O(1)
*/

#include <iostream>
#include <vector>
#define PI 3.14
using namespace std;

double areaSwitchCase(int ch, vector<double> a) {

    double area = 0.0;
    switch (ch) {
        case 1: // Circle
            area = PI * a[0] * a[0];
            break;

        case 2: // Rectangle
            area = a[0] * a[1];
    }
    return area;
}

int main(int argc, char const *argv[])
{
    int ch;
    vector<double> a(2);
    double area;
    cout << "Enter the choice of the shape you want to find the area of: \n";
    cout << "1. Circle\n";
    cout << "2. Rectangle\n";
    cin >> ch;
    cout << "Enter the length and breadth of the rectangle: \n";
    cin >> a[0] >> a[1];
    area = areaSwitchCase(ch, a);
    cout << "The area of the rectangle is: " << area << endl;
    return 0;
}