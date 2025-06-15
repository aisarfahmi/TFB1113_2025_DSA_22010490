  /*
MULTIPLY TWO MATRICES
ID = 22010490
Name = Aisar Fahmi bin Zamri
Lab = 2_Easy
Link = https://www.geeksforgeeks.org/dsa/c-program-multiply-two-matrices/

*/
#include <iostream>
#include <vector>
using namespace std;

void Matrix(vector<vector<int>>& m1, vector<vector<int>>& m2, 
            vector<vector<int>>& res) {
    int row1 = m1.size();
    int column1 = m1[0].size();
    int row2 = m2.size();
    int column2 = m2[0].size();

    if (column1 != row2) {
        cout << "Invalid Input: Columns of Matrix 1 must equal Rows of Matrix 2" << endl;
        exit(EXIT_FAILURE);
    }

    res.resize(row1, vector<int>(column2, 0)); 
  
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < column2; j++) {
            for (int k = 0; k < column1; k++) {
                res[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
}

void inputMatrix(vector<vector<int>>& mat, int rows, int cols, const string& name) {
    cout << "Enter elements of " << name << " (" << rows << "x" << cols << "):\n";
    mat.resize(rows, vector<int>(cols));
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            cin >> mat[i][j];
}

int main() {
    int r1, c1, r2, c2;
    vector<vector<int>> m1, m2, res;

    cout << "Enter how many rows and columns of Matrix 1: \n";
    cout << "Rows:";
    cin >> r1;
    cout <<"Column:";
    cin >> c1;
    cout << "Enter how many rows and columns of Matrix 2:\n ";
     cout << "Rows:";
    cin >> r2;
    cout <<"Column:";
    cin >> c2;

    inputMatrix(m1, r1, c1, "Matrix 1");
    inputMatrix(m2, r2, c2, "Matrix 2");

    Matrix(m1, m2, res);

    cout << "Multiplication of given two matrices is:\n";
    for (const auto& row : res) {
        for (int val : row) {
            cout << val << "\t";
        }
        cout << endl;
    }

    return 0;
}
