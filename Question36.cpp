#include <iostream>
using namespace std;

enum enOperationType{Add = '+', Subtraction = '-',
                    Multiply = '*' , Divide = '/' };

float readNumber(string message)
{
    int n = 0;

    cout << message << endl;
    cin >> n;

    return n;
  
}

enOperationType readOperationType()
{
    char opType;
    cout << "Enter operation you want (+ , - , * , /)\n";
    cin >> opType;

    enOperationType operationType = (enOperationType) opType;
    return operationType;
}

float calculate(float n1, float n2, enOperationType opType)
{
    switch(opType){

        case enOperationType::Add:
             return n1 + n2;
        case enOperationType::Subtraction:
            return n1 - n2;
        case enOperationType::Multiply:
             return n1 * n2;
        case enOperationType::Divide:
            return n1 / n2;     
        default:
            return n1 + n2;
    }

}
int main()
{
    int number1 = readNumber("Please Enter The first number?");
    int number2 = readNumber("Please Enter The Second number?");

    enOperationType opType = readOperationType();
    float result = calculate(number1, number2, opType);
    cout << endl << "Result is " << result << endl;

    return 0;
}
