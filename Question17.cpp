#include <iostream>
#include <cmath>
using namespace std;

void readNumbers(float &n1, float &n2)
{
    cout << "Please Enter Number 1\n";
    cin >> n1;

    cout << "Please Enter Number 2\n";
    cin >> n2;
}

float calculateRecatngleArea(float a, float h)
{
    return a * h / 2;
}

void printResult(float area)
{
     cout << "Area: " << area;
}
int main()
{
    float a, h;
    readNumbers(a, h);
    printResult(calculateRecatngleArea(a,h));
    
    return 0;
}