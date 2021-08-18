#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

//functions prototype
void getHours(int hours[], const int empID[], int SIZE);
void getName(string name[],const int empID[],int SIZE);
void getPayRate(double payRate[], const int empID[], int SIZE);
void giveWages(double wages[], const double payRate[],const int hours[], int SIZE);

int main() {
	const int SIZE = 7;
	int empID[SIZE] = { 5658845,4520125,7895122,8777541,8451277,1302850,7580489 };
	int hours[SIZE];
	string name[SIZE];
	double payRate[SIZE];
	double wages[SIZE];
	cout << setprecision(2) << fixed<<showpoint;

    getName( name,  empID,  SIZE);
	getHours( hours,  empID,  SIZE);
	getPayRate( payRate,  empID,  SIZE);
	giveWages( wages,  payRate,  hours,  SIZE);
	
	// Displaying the identification ID and wages of employees
	for (int i = 0; i < SIZE; i++) {
		cout << "The name of the employee is " << name[i];
		cout << endl;
		cout << "The identification number is " << empID[i];
		cout << endl;
		cout << "And gross wages of this employee is " << wages[i];
		cout << endl;
		cout << endl;
	}
	return 0;

}

//function to get the number of hours an employee works
void getHours( int hours[],const int empID[], int SIZE) {
	for (int i = 0; i < SIZE; i++)
	{
		cout << "Enter the hours worked by employee whose ID is " << empID[i]<<"\n";
		cin >> hours[i];
		while (hours[i] < 0) {
			cout << "You cannot put negative values\n";
			cout << "Enter the hours worked by employee whose ID is " << empID[i]<<"\n";
			cin >> hours[i];

		}
	}
	
}
void getName(string name[],const int empID[],int SIZE ) {
	for (int i = 0; i < SIZE; i++) {
		
		cout << "Enter the name of employee whose ID is " << empID[i] << "\n";
		getline(cin, name[i]);
	}
}
//Function to get the hourly pay rate 
void getPayRate(double payRate[], const int empID[], int SIZE) {
	for (int i = 0; i < SIZE; i++)
	{
		cout << "Enter the hourly pay Rate worked by employee whose ID is " << empID[i]<<"\n";
		cin >> payRate[i];
		while (payRate[i] < 15) 
		{
			cout << "You cannot give value less than 15\n";
			cout << "Enter the hourly pay Rate worked by employee whose ID is " << empID[i]<<"\n";
			cin >> payRate[i];

		}
	}

}
//function to calculate the wages of employees
void giveWages(double wages[], const double payRate[], const int hours[], int SIZE) {
	for (int i = 0; i < SIZE; i++) 
	{
		wages[i] = hours[i] * payRate[i];
	}
	
}

