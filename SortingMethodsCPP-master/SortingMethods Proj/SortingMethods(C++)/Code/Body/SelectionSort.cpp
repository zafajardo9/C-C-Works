#include "SelectionSort.h"

vector<double> selectionSort(vector<double> vectorInput) {

	for (int i = 0; i < vectorInput.size() - 1; i++) { // This loop goes through the vector n - 1 times, where n is the size of the vector
													   // n - 1 is because you don't need to check the last element
		double min = INT_MAX;						   // Every loop, we need to find the new minimum
		int min_index = i;

		for (int j = i; j < vectorInput.size(); j++) { // This loop goes through all elements (n - iteration) each iteration 

			if (vectorInput[j] <= min) { // If the current element is less than the current minimum, swap
				min = vectorInput[j]; // Set the current element as the new minimum...
				min_index = j; // ...and remember where the minimum was located
			}

		}

		if (min_index != i) { // Check if the minimum isn't already at the front
			vectorInput[min_index] = vectorInput[i];
			vectorInput[i] = min;
		}

		printIteration(vectorInput, i + 1); // comment to hide iteration
	}

	return vectorInput;
}