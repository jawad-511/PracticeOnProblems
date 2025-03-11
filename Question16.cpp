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

float calculateRecatngleArea(float a, float d)
{
    return (a) * (sqrt(pow(d, 2) - pow(a, 2)));
}

void printResult(float area)
{
     cout << "Area: " << area;
}
int main()
{
    float a, d;
    readNumbers(a, d);
    printResult(calculateRecatngleArea(a,d));
    
    return 0;
}