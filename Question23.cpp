#include <iostream>
#include <cmath>
using namespace std;
const float PI = 3.141592653589793238;
void readNumbers(float &n1, float &n2 , float & n3)
{
    cout << "Please Enter Number 1\n";
    cin >> n1;

    cout << "Please Enter Number 2\n";
    cin >> n2;

    cout << "Please Enter Number 3\n";
    cin >> n3;


}

float calculateCircleAreaByTriangle(float a, float b , float c)
{
    float p = (a + b + c) / 2;

    return (PI) * (pow(a * b * c, 2)) / (pow(4 * sqrt(p*(p-a) * (p-b) * (p-c)), 2));
}

void printResult(float area)
{
     cout << "Area: " << area;
}
int main()
{
    float a, b , c;
    readNumbers(a, b, c);
    printResult(calculateCircleAreaByTriangle(a, b , c));
    
    return 0;
}