#include <iostream>
#include <fstream>
using namespace std;
// Function Prototypes

void result(char answer[], const char correct[], int number[], int SIZE);

int main()
{
    // Declaring Arrays 
    const int SIZE = 20;
    char correct[SIZE];
    int number[SIZE];
    char answer[SIZE];
    // Opening Files
    ifstream studentAnswer;
    studentAnswer.open("StudentAnswers.txt");
    ifstream CorrectAnswer;
    CorrectAnswer.open("CorrectAnswers.txt");
    // Getting Data from Files 
    if (studentAnswer)
    {
        // Students Answers
        for (int i = 0; i < SIZE; i++)

        {
            studentAnswer >> answer[i];
        }
        // Correct Answers
        for (int i = 0; i < SIZE; i++)

        {
            CorrectAnswer >> correct[i];
        }
    }
    else
    {
        cout << "Error";
    }
    // Calling Function 
    result(answer, correct, number, SIZE);
    return 0;
}


void result(char answer[], const char correct[], int number[], int SIZE)
{

    bool status = true;
    int count = 0;

    int percentageCorrect;
    // Loop to show correct answers of wrong questions 
    for (int i = 0; i < SIZE; i++)
    {
        if (correct[i] != answer[i])
        {
            status = false;
            cout << "You have provided " << answer[i];
            cout << endl;
            cout << "But Correct answer was " << correct[i];
            cout << endl;
            count++;

            number[i] = i;
        }
        else
        {
            number[i] = 0;
        }
    }
    // Display Correct and Wrong Number of questions 
    int correctNumber = 20 - count;
    cout << "The wrong asnwers are\n";
    cout << count;
    cout << endl;
    cout << "The correct asnwers are\n";
    cout << correctNumber;
    cout << endl;

    // Percentage Correcrtion display 
    percentageCorrect = (static_cast<double>(correctNumber) / SIZE) * 100;
    cout << "Percentage of question anwsered correctly are\n";
    cout << percentageCorrect;
    cout << endl;

    // To show Pass and fail
    if (percentageCorrect < 70)
    {

        cout << "You are fail\n";
    }
    else 
    {
        cout << "Congratulations! You are pass\n";
    }

    cout << endl;
}

