#include <iostream>
#include <cmath>
using namespace std;
const float PI = 3.141592653589793238;
void readNumbers(float &n1)
{
    cout << "Please Enter Number 1\n";
    cin >> n1;

}

float calculateRecatngleArea(float d)
{
    return (PI * pow(d, 2)) / 4;
}

void printResult(float area)
{
     cout << "Area: " << area;
}
int main()
{
    float d;
    readNumbers(d);
    printResult(calculateRecatngleArea(d));
    
    return 0;
}