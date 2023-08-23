

#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "\n\n Welcome to the demo for arrays and strings!\n\n";

    // Create an int array
    int myNumbers[12];
    
    myNumbers[0] = 11;
    myNumbers[1] = 2;
    myNumbers[2] = 333;
    myNumbers[11] = 11111111;




    cout << "\n\n expected is 11... " << myNumbers[1] << endl;
    cout << "\n\n expected is a null value... " << myNumbers[2] << endl;
    // cout << "\n\n ?? out of bounds ?? ... " << myNumbers[12] << endl;

    // Let's code up a for loop
    for (int i = 0; i <= 12; i++) {
        cout << "\n\n " << i << "  " << myNumbers[i];
    }
    cout << endl << endl;

    // Here is a 2D array:
    // 3 rows, 2 columns 
    int my2darray[3][2];

    // hard-code the values.
    my2darray[0][0] = 11;
    my2darray[0][1] = 12;

    my2darray[1][0] = 21;
    my2darray[1][1] = 22;

    my2darray[2][0] = 31;
    my2darray[2][1] = 32;

    cout << "\n\n\n";
    // Nested for loop
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cout << my2darray[i][j] << "  ";
        }
        cout << "\n\n";
    }
    cout << "\n\n\n";

    int row0col0 = 71;

    // Fill my 2D array with a nested for() loop!
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            my2darray[i][j] = row0col0++;
        }
        // subtract two
        row0col0 = row0col0 - 2; 
        row0col0 += 10;
    }
   
    cout << "\n\n\n";
    // Nested for loop
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cout << my2darray[i][j] << "  ";
        }
        cout << "\n\n";
    }
    cout << "\n\n\n";






}

