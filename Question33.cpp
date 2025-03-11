#include <iostream>
using namespace std;
int readNumberInRange(int from, int to)
{
    int grade;
    do
    {
        /* code */
        cout << "Enter Grade between " << from << " and " << to <<endl;
        cin >> grade;  
    } while (grade < from || grade > to);
    
    return grade;
}

char getGradeLetter(int grade)
{
    if(grade >= 90)
    {
        return 'A';
    }
    else if(grade >= 80)
    {
        return 'B';
    }
    else if(grade >= 70)
    {
        return 'C';
    }
    else if(grade >= 60)
    {
        return 'D';
    }
    else if(grade >= 50)
    {
        return 'E';
    }
    else
        return 'F';
}
int main()
{

    int grade = readNumberInRange(0, 100);
    cout << "Your Grade is = " << getGradeLetter(grade);
    return 0;
}