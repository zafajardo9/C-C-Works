//SST snippet
/*
    g++ {filename}.cpp
    ./a.out
    ./name

    g++ {filename}.cpp -o {filename} && ./{filename}

    g++ main.cpp -o main && ./main.exe



    freopen("input.txt", "r", stdin);
*/


/*
    ${workspaceRoot} the path of the folder opened in VS Code
    ${file} the current opened file
    ${fileBasename} the current opened file's Basecamp
    ${fileDirname} the current opened file's dirname
    ${fileExtname} the current opened file's extension
    ${cwd} the task runner's current working directory on startup
*/


#include <iostream>

//typedef unsigned long long int 11;
using namespace std;


    

int main() {
    //To be erased
    freopen("input.txt", "r", stdin);


    int a, b, c;
    cout << "Hello" << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    cout << "Inputted Number is :" << a  + b + 3 << endl;

    cout << "Inputted is :" << c << endl;
    return  0;
}

/*


main - main function

C
    ifndef: add preprocessor include guard
    typedef-struct: add typedef struct definition with prefix
    main: create main function
C++
    also have ifndef to include include guard
    cop-class to insert a class which respect the coplien form

*/



