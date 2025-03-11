#include <iostream>
using namespace std;

void readNumbers(float &n1, float &n2)
{
    cout << "Please Enter Number 1\n";
    cin >> n1;

    cout << "Please Enter Number 2\n";
    cin >> n2;
}

float calculateRecatngleArea(float a, float b)
{
    return a * b;
}

void printResult(float area)
{
     cout << "Area: " << area;
}
int main()
{
    float n1, n2;
    readNumbers(n1, n2);
    printResult(calculateRecatngleArea(n1,n2));
    
    return 0;
}