#include "BubbleSort.h"

vector<double> bubbleSort(vector<double> vectorInput) {

	for (int i = 0; i < vectorInput.size() - 1; i++) { // This loop goes through the vector n - 1 times, where n is the size of the vector
													   // n - 1 is because you don't need to check the last element
		bool sorted = true;							   // This checks if the array is sorted before the last loop; unnecessary if you want the barebones algorithm

		for (int j = i; j < vectorInput.size() - 1; j++) { // This loop goes through n - 1 elements, as each element is being compared to the next

			if (vectorInput[j] > vectorInput[j + 1]) { // If the current element is greater than the next element, swap
				double temp = vectorInput[j];
				vectorInput[j] = vectorInput[j + 1];
				vectorInput[j + 1] = temp;
				sorted = false;
			}

		}

		if (sorted) { // If nothing switches positions, the algorithm is done
			cout << "Vector sorted before reaching the end\n";
			return vectorInput;
		}

		printIteration(vectorInput, i + 1); // comment to hide iteration

	}

	return vectorInput;
}