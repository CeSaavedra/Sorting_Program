#include <array>
#include <iostream>
using namespace std;
/**
* Cesar Saavedra
* September 19, 2022
* This program demonstrates the ability to create a 
* sort algorithm for bubble sort and selection sort using
* an array object.
*/


//Constants
const int SIZE = 14;
const int ONE = 1;

//Prototypes
void displayTitle();
void bubbleSort(array<int,SIZE>& arr);
void selectionSort(array<int, SIZE>& arr);
void swapElements(int& current, int& next);

//Returns void; Uses an array object within PbR parameters. Used to sort array object using bubble sort
void bubbleSort(array<int, SIZE>& arr) {

	//For loop goes through each element within the array
	for (int i = 0; i < SIZE; i++) {

		//For loop uses to compare elements
		for (int x = 0; x < (SIZE-ONE); x++) {

			//If the current element is larger than the next element then...
			if (arr[x] > arr[x+ONE]) {
				//Utilizes swap function to swap elements
				swapElements(arr[x], arr[x + ONE]);
			}
		}
	}
}
//Returns void; Uses an array object within PbR parameters. Used to sort array object using selection sort
void selectionSort(array<int, SIZE>& arr) {

	//For loop goes through array until second to last element
	for (int i = 0; i < SIZE-ONE; i++) {
		
		//Max variable within first for loop
		int max = i;

		//For loop that goes through each element to the next
		for (int x = i + ONE; x < SIZE; x++) {
			//If the max is smaller than the x subscript
			if (arr[x] > arr[max]) {
				//New max
				max = x;
			}
		}
		
		//If the max is not the same as i
		if (max != i) {
			//Utilizes swap function to swap elements
			swapElements(arr[max], arr[i]);
		}
	}
}

//Returns void; Uses 2 PbR integer values within parameters; Swaps the 2 integers accordingly for sort methods
void swapElements(int& current ,int& next) {
	
	//Temp variable is used so the "current" int is not lost when swap is performed
	int tempInt = current;
	//Swap is performed
	current = next;
	next = tempInt;
}

//Returns void, Takes no parameter. Displays title.
void displayTitle() {
	cout << "\n\tWelcome to my Sorting Program\n\n";
}


int main() { //Main Function

	//2 Array Objects that hold the same values
	array<int,SIZE> numList1 = { 98, 78, 102, 67, 45, 83, 29, 184, 2, 68, -7, 56, 121, 5 };
	array<int,SIZE> numList2 = { 98, 78, 102, 67, 45, 83, 29, 184, 2, 68, -7, 56, 121, 5 };

	displayTitle();

	//Array Object is displayed before and after it is sorted using Bubble Sort
	cout << "Before Bubble Sort:\n";
	for (int i = 0; i < SIZE; i++) {
		cout << "\tNumber " << i+ONE << " = " << numList1[i] << endl;
	}

	bubbleSort(numList1);

	cout << "\nAfter Bubble Sort:\n";
	for (int i = 0; i < SIZE; i++) {
		cout << "\tNumber " << i + ONE << " = " << numList1[i] << endl;
	}

	//Array Object is displayed before and after it is sorted using Selection Sort
	cout << "\nBefore Selection Sort:\n";
	for (int i = 0; i < SIZE; i++) {
		cout << "\tNumber " << i + ONE << " = " << numList2[i] << endl;
	}

	selectionSort(numList2);

	cout << "\nAfter Selection Sort:\n";
	for (int i = 0; i < SIZE; i++) {
		cout << "\tNumber " << i + ONE << " = " << numList2[i] << endl;
	}
}