#include <iostream>
#include <string>
#include <list>
#include <vector>

using namespace std;

vector<int> vector_numbers;
//vector_numbers.size()
int main() {

    int input;

    cout<<"The 2D vector is:"<<endl;
    
    for (int j = 0; j < 10; j++)
    {
        cin >> input;
        vector_numbers.push_back(input);
    }


    //Printing Vector
    for (int i = 0; i < 10; i++) {
         cout << vector_numbers[i] << endl;
    }


    return  0;
}