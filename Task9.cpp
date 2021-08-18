#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <string>
// Function prototypes
void askQuestion();
int queNumberGenerator();
bool checkContinue();
using namespace std;
int main()
{
    bool status;
    const int SIZE = 12;
    int num;
    string fileResponse[SIZE];
    ifstream response;
    response.open("8_ball_responses.txt");

    // Reading responses from File
    for (int i = 0; i < SIZE; i++)
    {
        getline(response, fileResponse[i]);
    }
    // Calling Function
    askQuestion();
    num = queNumberGenerator();
    cout << fileResponse[num];
    cout << endl;
    status = checkContinue();
    while (status == true)
    {
        askQuestion();
        cin.ignore();
        num = queNumberGenerator();
        cout << fileResponse[num];
        cout << endl;
        status = checkContinue();
        cout << endl;
    }

    return 0;
}
void askQuestion()
{
    string que;

    cout << "Enter Your Question\n";
    getline(cin, que);
}

int queNumberGenerator()
{
    unsigned seed = time(0);
    srand(seed);
    int randNum;
    randNum = (rand() % (11 - 0) + 0);
    return randNum;
}
bool checkContinue()
{
    char ans;
    cout << "Continue(Y/N)?";
    cin >> ans;
    if (ans == 'Y' || ans == 'y')
    {
        return true;
    }
    else
    {
        false;
    }
}