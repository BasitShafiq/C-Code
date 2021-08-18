#include <iostream>
#include <string>
using namespace std;

//Function prototypes
void getJarSale(const string[], int[], int);
void Report(const string[], const int[], int);
void highestSale(const string[], const int[], int);
void smallestSale(const string[], const int[], int);

int main()
{
    const int SIZE = 5;
    string salsa[SIZE] = {"mild", "medium", "sweet", "hot", "zesty"};
    int jarSold[SIZE];
    // Calling functions
    getJarSale(salsa, jarSold, SIZE);
    Report(salsa, jarSold, SIZE);
    highestSale(salsa, jarSold, SIZE);
    smallestSale(salsa, jarSold, SIZE);
    return 0;
}
// Funtion to get the number of jars sold
void getJarSale(const string salsa[], int jarSold[], int SIZE)
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter the jars sold for " << salsa[i] << endl;
        cin >> jarSold[i];
        while (jarSold[i] < 0)
        {
            cout << "Error\n";
            cout << "Enter the jars sold for " << salsa[i] << endl;
            cin >> jarSold[i];
        }
    }
}
// funtion to display the report on the screen
void Report(const string salsa[], const int jarSold[], int SIZE)
{

    for (int i = 0; i < SIZE; i++)
    {
        cout << "The sale for " << salsa[i] << " is " << jarSold[i] << endl;
    }
    int total = 0;
    for (int j = 0; j < SIZE; j++)
    {
        total += jarSold[j];
    }
    cout << "The total number of jars sold are\n";
    cout << total << endl;
}
// Function to get the highest sale
void highestSale(const string salsa[], const int jarSold[], int SIZE)
{
    int large = jarSold[0];
    string largeName = salsa[0];
    for (int i = 0; i < SIZE; i++)
    {
        if (jarSold[i] > large)
        {
            large = jarSold[i];
            largeName = salsa[i];
        }
    }
    cout << "The largest sale is of " << largeName << " having sales " << large << endl;
}

// Funttion to get samllest sale
void smallestSale(const string salsa[], const int jarSold[], int SIZE)
{

    int small = jarSold[0];
    string smallName = salsa[0];
    for (int i = 0; i < SIZE; i++)
    {
        if (jarSold[i] < small)
        {
            small = jarSold[i];
            smallName = salsa[i];
        }
    }
    cout << "The smallest sale is of " << smallName << " having sales " << small << endl;
}