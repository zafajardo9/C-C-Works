/* Name: SortingMethods.h
 * Desc: Header file for SortingMethods
 *       Has all sorting methods involved
 * Auth: Jonathan Alcantara
 */
#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<double> selectionSort(vector<double>);
vector<double> bubbleSort(vector<double>);
vector<double> insertionSort(vector<double>);
vector<double> heapSort(vector<double>);
vector<double> mergeSort(vector<double>);
vector<double> quickSort(vector<double>);

int main() {

	int input = 0;

	cout << "Try any of these sorting methods by typing in their number: \n"
		<< "1: SelectionSort \n"
		<< "2: BubbleSort \n"
		<< "3: InsertionSort \n"
		<< "4: HeapSort \n"
		<< "5: MergeSort \n"
		<< "6: QuickSort \n"
		<< "\nEnter 7 to exit.\n";

	while (cin >> input) {

		switch (input) {
			case 1:
				cout << "SelectionSort selected\n";
				break;
			case 2:
				cout << "BubbleSort selected\n";
				break;
			case 3:
				cout << "InsertionSort selected\n";
				break;
			case 4:
				cout << "HeapSort selected\n";
				break;
			case 5:
				cout << "MergeSort selected\n";
				break;
			case 6:
				cout << "QuickSort selected\n";
				break;
			default:
				cout << "Invalid input, try again\n";
				break;
		}

	}

}


vector<double> selectionSort(vector<double> inputVector) {
	return inputVector;
}

vector<double> bubbleSort(vector<double> inputVector) {
	return inputVector;
}

vector<double> insertionSort(vector<double> inputVector) {
	return inputVector;
}

vector<double> heapSort(vector<double> inputVector) {
	return inputVector;
}

vector<double> mergeSort(vector<double> inputVector) {
	return inputVector;
}

vector<double> quickSort(vector<double> inputVector) {
	return inputVector;
}