#include "InsertionSort.h"

vector<double> insertionSort(vector<double> vectorInput) {

	// can't leave early; insertionSort goes through all of the elements
	for (int i = 1; i < vectorInput.size(); i++) { // first element is already sorted, avoid checking the last
		int j = i;

		while (j != 0 && vectorInput[j] < vectorInput[j - 1]) { // While the current element is greater than the previous element...
			double temp = vectorInput[j]; // ...swap them
			vectorInput[j] = vectorInput[j - 1];
			vectorInput[j - 1] = temp;

			j--;

		}

		printIteration(vectorInput, i); // comment to hide iteration

	}

	return vectorInput;

}