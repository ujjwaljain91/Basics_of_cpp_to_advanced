#include <iostream>
using namespace std;

int main(){
    int rows, column;
    cout<<"Enter the no of rows =";
    cin>>rows;
    cout<<"Enter the the number of column = ";
    cin>>column;
    int matrix1[rows][column];
    int matrix2[rows][column];
    int matrix3[rows][column];
    int product[rows][column];
    cout<<"Enter the element of matrix :";
     for (int i = 0; i < rows; i++) {
        for (int j = 0; j < column; j++) {
            cout << "Enter element for first matrix at position " << i << "," << j << ": ";
            cin >> matrix1[i][j];
        }
    }
    cout<<endl;

    cout << "Enter the elements of the second matrix:" << endl;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < column; j++) {
            cout << "Enter element for second matrix at position " << i  << "," << j  << ": ";
            cin >> matrix2[i][j];
        }
    }
    cout<<endl;

     for (int i = 0; i < rows; i++) {
        for (int j = 0; j < column; j++) {
           product[i][j]=matrix1[i][j]*matrix2[i][j];
        }
    }
    cout<<endl;
    cout << "The product of the two matrices is:" << endl;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < column; j++) {
            cout << product[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}