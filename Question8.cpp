#include <iostream>
using namespace std;

enum enPassFail{Pass = 1, Fail = 2};
float readMark()
{
    float mark;
    cout << "Enter the mark you got\n";
    cin >> mark;

    return mark;
}

enPassFail checkMark(int mark)
{
    if(mark >= 50)
    {
        return enPassFail::Pass;
    }
    
    return    enPassFail::Fail;
}

void printResult(enPassFail result)
{
    if(result == enPassFail::Pass)
    {
        cout << "You are pass congratulation\n";

    }
    else
        cout << "You are Fail. Remember it's not the end of the world, all the successfful people the pass through this stage.\n";
}

int main()
{

    printResult(checkMark(readMark()));

    return 0;
}