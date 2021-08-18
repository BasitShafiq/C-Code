#include <iostream>
#include <cstdlib>
#include <ctime>
// Function prototypes
void GetUser(int[], int);
void Compare(int[], int[], int);
using namespace std;
int main()
{
    unsigned seed = time(0);
    int randomNumber;
    int max = 9;
    int min = 1;
    const int SIZE = 5;
    int lottery[SIZE];
    int User[SIZE];

    // Generating random numbers and storing in lottery array
    srand(seed);
    for (int i = 0; i < SIZE; i++)
    {
        lottery[i] = (rand() % (max - min) + min);
    }
    GetUser(User, SIZE);
    Compare(User, lottery, SIZE);

    return 0;
}
// Getting input from user
void GetUser(int user[], int SIZE)
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter a number " << i + 1 << ": ";
        cin >> user[i];
    }
}
// Function to check user wins or not
void Compare(int user[], int lottery[], int SIZE)
{
    bool status = false;
    int count = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (user[i] != lottery[i])
        {
            status = false;
        }
        else
        {
            count++;
        }
    }
    cout << "The number of matching digits are \n";
    cout << count;
    cout << endl;
    if (status == false)
    {
        cout << "Oh! You lost\n";
    }
    else
    {
        cout << "Congratulations! You won";
    }
    // Displaying correct answer
    for (int i = 0; i < SIZE; i++)
    {
        cout << lottery[i];
        cout << endl;
    }
}