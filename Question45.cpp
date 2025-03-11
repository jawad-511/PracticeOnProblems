#include <iostream>
using namespace std;

void printLettersAtoZ()
{
    for(int i = 'A'; i < 'Z'; i++)
    {
        cout << char(i) << endl;
    }
}
int main()
{

    printLettersAtoZ();
    return 0;
}
