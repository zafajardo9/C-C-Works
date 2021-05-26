#include "Includes.h"
#include <limits>

#include "BubbleSort.h"
#include "InsertionSort.h"
#include "SelectionSort.h"

vector<double> getVectorInput();
char getSortInput();

int main() {

	while (true) {

		vector<double> vectorInput = getVectorInput();

		if (vectorInput.size() == 0) { // user leaves without entering any input
			return 0;
		}

		vector<double> vectorResult;
		char sortInput = getSortInput();


		if (sortInput == 'x') {
			return 0;
		}

		if (sortInput != 'd') {

			cout << "\nLoop 0: ";

			for (double value : vectorInput) {
				cout << value << ' ';
			}

			cout << '\n';

			switch (sortInput) {
			case '1':
				vectorResult = selectionSort(vectorInput);
				break;
			case '2':
				vectorResult = bubbleSort(vectorInput);
				break;
			case '3':
				vectorResult = insertionSort(vectorInput);
				break;

				cout << '\n';

			}

		}

	}

	return 0;

}

vector<double> getVectorInput() {

	vector<double> resultVector;

	cout << "Please enter data to sort. You can stop by entering a non-numerical value.\n"
		 << "You can exit if you don't enter any data.\n";

	for (double numInput; cin >> numInput;) {
		resultVector.push_back(numInput);
	}
	
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	cout << "\nGiven data: ";

	for (double num : resultVector) {
		cout << num << " ";
	}

	cout << '\n';

	return resultVector;

}

char getSortInput() {

	char sortInput;

	cout << "\nTry any of these sorting methods by typing in their number: \n"
		<< "1: SelectionSort \n"
		<< "2: BubbleSort \n"
		<< "3: InsertionSort \n"
		<< "Enter 'd' if you want to readjust your data.\n"
		<< "Enter 'x' if you want to exit.\n";

	while (cin >> sortInput) {

		switch (sortInput) {
			case '1':
				cout << "\nSelectionSort selected\n";
				return '1';
			case '2':
				cout << "\nBubbleSort selected\n";
				return '2';
			case '3':
				cout << "\nInsertionSort selected\n";
				return '3';
			case 'd':
				return 'd';
			case 'x':
				return 'x';
			default:
				cout << "\nInvalid input, try again\n";
				break;
		}

	}

	return 'x'; // code should never get here, but it's a warning regardless

}