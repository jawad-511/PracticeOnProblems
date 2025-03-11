#include <iostream>
using namespace std;

void readMarks(int &mark1, int &mark2, int &mark3)
{
    cout << "Enter mark 1\n";
    cin >> mark1;

    cout << "Enter mark 2\n";
    cin >> mark2;

    cout << "Enter mark 3\n";
    cin >> mark3;
}

int sumOfThreeMarks(int mark1, int mark2, int mark3)
{
    int sum = mark1 + mark2 + mark3;
    return sum;
}

float calculateAverage(int mark1, int mark2, int mark3)
{
    float avg = (float) (sumOfThreeMarks(mark1, mark2, mark3)) / 3;
    return avg;
}


void printResults(float avg)
{
    cout << "The average is " << avg << endl;
}

int main()
{
    int mark1, mark2, mark3;
    readMarks(mark1, mark2, mark3);
    printResults(calculateAverage(mark1, mark2, mark3));

    return 0;
}