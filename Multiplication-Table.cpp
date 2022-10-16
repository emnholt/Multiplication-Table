#include <iostream>
#include <iomanip>


using namespace std;
int main() {
    //Variables for rows and columns
    int c;
    int r;
    int firstRow;
    int firstCol;
  
    // Ask for input for two numbers 1-11
    cout << "Enter two numbers greater than 1 and  less than 11: " << endl;
    cin >> c;
    // Loop through until two valid numbers 1-11 are input
    while (c >= 11 || c <= 1) {
        cout << "Try again, enter two numbers between 1 and 11: " << endl;
        cin >> c;
    }
    cin >> r;
    while (r >= 11 || r <= 1) {
        cout << "Try again, enter two numbers between 1 and 11: " << endl;
        cin >> r;
        cout << endl;
    }
    cout << "First variable is " << c << endl;
    cout << "Second variable is " << r << endl;
  
    //Multiplication Table:
    // Top row
    cout << setw(3) << " ";
    for (firstRow = 1; firstRow <= c; firstRow++) {
        cout << setw(3) << firstRow;
    }
    cout << endl;
  
    // Table
    for (firstRow = 1; firstRow <= r; firstRow++) {
        cout << setw(3) << firstRow;
        for (firstCol = 1; firstCol <= c; firstCol++) {
                cout << setw(3) << firstRow * firstCol;
        }
        cout << endl;
    }
    return 0;
}
