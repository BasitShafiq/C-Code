#include<iostream>
using namespace std;

//functon prototypes
void Largest(const int[],int);
void Smallest(const int arr[], int SIZE);

int main() {
	const int SIZE = 10;
	int arr[SIZE];
	cout << "Enter ten values in the array\n";
	for (int i = 0; i < SIZE; i++) {
		cout << "Enter values "<<i+1<<" in the array\n";
		cin >> arr[i];
	}
	Largest(arr, SIZE);
	Smallest(arr, SIZE);
	return 0;
}

//Function to get the largest value from the array
void Largest(const int arr[],int SIZE) {
	int large = arr[0];
	for (int i = 0; i < SIZE; i++) {

		if (arr[i] > large) {

			large = arr[i];
		}
	}
	cout << "The largest value in the array is " << large << "\n";
}

//Function to get he smallest value from the array 
void Smallest(const int arr[], int SIZE) {
	int small = arr[0];
	for (int i = 0; i < SIZE; i++) {

		if (arr[i] < small) {

			small = arr[i];
		}
	}
	cout << "The smallest value in the array is " << small << "\n";
}