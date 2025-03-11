#include <iostream>
#include <string>
using namespace std;
void readThreeNumbers(int &n1, int &n2, int &n3)
{
    cout << "Please enter the First number\n";
    cin >> n1;

    cout << "Please enter the Seceond number\n";
    cin >> n2;

    cout << "Please enter the Third number\n";
    cin >> n3;
}

int checkMaxOfThreeNumbers(int n1,int n2, int n3)
{
    if(n1 > n2)
    {
        if(n1 > n3)
        {
            return n1;
        }
        else 
            return n3;
    }

    else
    {
        if(n2 > n3)
        {   \
            return n2;
        }
        else    
            return n3;
    }
}

void printResults(int max)
{
    cout << "The max number is: " << max << endl;
}
int main()
{
    int n1, n2 , n3;
    readThreeNumbers(n1,n2, n3);
    printResults(checkMaxOfThreeNumbers(n1, n2 , n3));
    
    return 0;
}