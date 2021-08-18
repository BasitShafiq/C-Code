#include <iostream>
using namespace std;
//functions Prototype
void result(char[], const char[], int[], int);

int main()
{
    const int SIZE = 20;
    char correct[SIZE] = {'A', 'D', 'B', 'B', 'C', 'B', 'A', 'B', 'C', 'D', 'A', 'C', 'D', 'B', 'D', 'C', 'C', 'A', 'D', 'B'};
    char answer[SIZE];
    int number[SIZE];

    result(answer, correct, number, SIZE);

    return 0;
}
//Function to get answers from the user
void result(char answer[], const char correct[], int number[], int SIZE)
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter the options \n";
        cin >> answer[i];
        while (answer[i] != 'A' && answer[i] != 'B' && answer[i] != 'C' && answer[i] != 'D')
        {
            cout << "Error!\n";
            cout << "Enter the options \n";
            cin >> answer[i];
        }
    }

    bool status = true;
    int count = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (correct[i] != answer[i])
        {
            status = false;
            count++;

            number[i] = i;
        }
        else
        {
            number[i] = 0;
        }
    }

    cout << "The wrong asnwers are\n";
    cout << count;
    cout << endl;
    cout << "The correct asnwers are\n";
    cout << 20 - count;
    cout << endl;
    if (count < 15)
    {

        cout << "You are fail\n";
    }
    else
    {
        cout << "Congratulations! You are pass\n";
    }
    cout << "The incorrect answers numbers are\n";
    for (int i = 0; i < 20; i++)
    {
        if (number[i] != 0)
        {

            cout << number[i] << " ";
        }
    }
}












//Function to check the correct answer
void checkAnswer(const char correct[], const char answer[], int SIZE)
{
    bool status = true;
    int count = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (correct[i] != answer[i])
        {
            status = false;
            count++;
        }
    }
    for (int j = 0; j < SIZE; j++)
    {
        cout << answer[j];
        cout << endl;
    }
    cout << "The wrong asnwers are\n";
    cout << count;
    cout << "The correct asnwers are\n";
    cout << count - 20;
}