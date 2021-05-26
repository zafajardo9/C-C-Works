#include <iostream>
#include <string>
#include <list>

using namespace std;

   //Multiplication table

int main() {

    int a[100][100]; //will change to
    int range_number;

    //for style only
    cout << "\t=============================" << endl;
    cout << "\t=\tMULTIPLICATION TABLE\t=" << endl;
    cout << "\t=============================" << endl;

    cout << "enter the range of the number :" << endl;
    cin >> range_number;


    for (int i = 1; i <= range_number; i++)
    {   
        for (int j = 1; j <= range_number; j++)
        {
            a[i][j] = (i) * (j);
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
    


    return  0;
}