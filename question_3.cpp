#include<iostream>
using namespace std;

void INIT(int**& mat, int rows, int cols) {
    mat = new int* [rows];
    for (int i = 0; i < rows; i++) {
        mat[i] = new int[cols];
    }
}

void INPUT(int** mat, int rows, int cols) {
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> mat[i][j];
        }
    }
}

void DISPLAY(int** mat, int rows, int cols) {
    cout << "Matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int SUM(int** mat, int rows, int cols) {
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += mat[i][j];
        }
    }
    return sum;
}

void TRANS(int** mat, int rows, int cols) {
    cout << "Transpose of the matrix:" << endl;
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            cout << mat[j][i] << " ";
        }
        cout << endl;
    }
}

void ROWS_WISE(int** mat, int rows, int cols) {
    cout << "Row-wise sum of the matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        int rsum = 0;
        for (int j = 0; j < cols; j++) {
            rsum += mat[i][j];
        }
        cout << "Sum of row " << i + 1 << ": " << rsum << endl;
    }
}

void COL_WISE(int** mat, int rows, int cols) {
    cout << "Column-wise sum of the matrix:" << endl;
    for (int i = 0; i < cols; i++) {
        int csum = 0;
        for (int j = 0; j < rows; j++) {
            csum += mat[j][i];
        }
        cout << "Sum of column " << i + 1 << ": " << csum << endl;
    }
}

int main()
{
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    int** matrix;
    INIT(matrix, rows, cols);
    INPUT(matrix, rows, cols);

    DISPLAY(matrix, rows, cols);

    int sum = SUM(matrix, rows, cols);
    cout << "Sum of the elements of the matrix: " << sum << endl;

    TRANS(matrix, rows, cols);

    ROWS_WISE(matrix, rows, cols);

    COL_WISE(matrix, rows, cols);

  
    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
