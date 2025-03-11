#include <iostream>
using namespace std;

int readPositiveNumber(string message)
{
  
   int n = 0;
    do
    {
        cout << message << "\n";
        cin >> n;

    } while (n <= 0);
    

    return n;
}

int calculateFactorial(int n)
{
    int result = 1;
    for(int i = n; i >= 1; i--)
    {
        result = i * result;
    }

    return result;
}



int main()
{
   cout << calculateFactorial(readPositiveNumber("Please Enter a positive number ??")) << endl;
}