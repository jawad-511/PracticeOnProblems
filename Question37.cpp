#include <iostream>
#include <string>
using namespace std;

float readNumber(string message)
{
    int n = 0;

    cout << message << endl;
    cin >> n;

    return n;
  
}

int sumNumbers()
{
    int sum = 0, number = 0, counter = 1;
    
    do
    {
        number = readNumber("Please Enter number " + to_string(counter));
        if(number == -99)
        {
            break;
        }
        sum += number;
        counter++;
    } while (number != -99);
    
    return sum;
}
int main()
{
    int result = sumNumbers();
    cout << "Result " << result << endl;

    return 0;
}