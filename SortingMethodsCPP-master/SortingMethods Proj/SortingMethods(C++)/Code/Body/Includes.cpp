#include "Includes.h"

void printIteration(vector<double> vectorInput, int iteration) {

	cout << "Loop " << iteration << ": ";

	for (double value : vectorInput)
		cout << value << ' ';

	cout << '\n';

}