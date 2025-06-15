  /*
Rotate A Matrix By 90 Degrees
ID = 22010490
Name = Aisar Fahmi bin Zamri
Lab = 2_Medium
Link = https://www.geeksforgeeks.org/dsa/inplace-rotate-square-matrix-by-90-degrees/
*/

#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> rotate(const vector<vector<int>>& mat) {
    int n = mat.size();
    vector<vector<int>> res(n, vector<int>(n));

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            res[n - j - 1][i] = mat[i][j];

    return res;
}

int main() {
    vector<vector<int>> mat = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    mat = rotate(mat);

    for (auto& row : mat) {
        for (int x : row) cout << x << ' ';
        cout << endl;
    }

    return 0;
}