#include<iostream>
using namespace std;

//Function Prototypes
void largerthanN(const int[], int, int);

int main() {
	int num;
	const int SIZE=7;
	int arr[SIZE] = {15,16,17,18,19,20,21};
	cout << "Enter the number: N\n";
	cin >> num;
	//calling the function to find larger number
	largerthanN(arr, SIZE, num);
	return 0;
}

//Function to find the number greater than the number specified
void largerthanN(const int arr[], int SIZE, int num) {
	bool status = false;
		for (int i = 0; i < SIZE; i++) {
			if (arr[i] > num) 
			{
				cout << "The numbers larger then "<<num << " is\n";
				cout << arr[i];
				cout << endl;
				status = true;
			}
		}
		if (status == false) {
			cout << "No number greater than " << num << " is found\n";
		}
}