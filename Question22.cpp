#include <iostream>
#include <cmath>
using namespace std;
const float PI = 3.141592653589793238;
void readNumbers(float &n1, float &n2)
{
    cout << "Please Enter Number 1\n";
    cin >> n1;

    cout << "Please Enter Number 2\n";
    cin >> n2;

}

float calculateCircleAreaByTriangle(float a, float b)
{
    return ((PI * pow(b, 2)) / 4) * (2 * a - b) / (2 * a + b);
}

void printResult(float area)
{
     cout << "Area: " << area;
}
int main()
{
    float a, b;
    readNumbers(a, b);
    printResult(calculateCircleAreaByTriangle(a, b));
    
    return 0;
}