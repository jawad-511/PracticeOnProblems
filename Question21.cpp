#include <iostream>
#include <cmath>
using namespace std;
const float PI = 3.141592653589793238;
void readNumbers(float &n1)
{
    cout << "Please Enter Number 1\n";
    cin >> n1;

}

float calculateCircleAreaByCircumference(float L)
{
    return pow(L, 2) / (4 * PI);
}

void printResult(float area)
{
     cout << "Area: " << area;
}
int main()
{
    float L;
    readNumbers(L);
    printResult(calculateCircleAreaByCircumference(L));
    
    return 0;
}