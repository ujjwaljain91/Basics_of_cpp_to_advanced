#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter the number of rows: ";
    cin >> rows;

    cout << "Enter the number of columns: ";
    cin >> cols;

    int matrix1[rows][cols];
    int matrix2[rows][cols];
    int sum[rows][cols];

    cout << "Enter the elements of the first matrix:" << endl;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter element for first matrix at position " << i << "," << j << ": ";
            cin >> matrix1[i][j];
        }
    }
    cout<<endl;

    cout << "Enter the elements of the second matrix:" << endl;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter element for second matrix at position " << i + 1 << "," << j + 1 << ": ";
            cin >> matrix2[i][j];
        }
    }
    cout<<endl;

    // Perform matrix addition
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    cout<<endl;

    cout << "The sum of the two matrices is:" << endl;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
