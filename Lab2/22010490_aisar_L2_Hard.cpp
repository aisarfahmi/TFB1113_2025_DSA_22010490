  /*
Maximum size square sub-matrix with all 1s
ID = 22010490
Name = Aisar Fahmi bin Zamri
Lab = 2_Hard
Link = https://www.geeksforgeeks.org/dsa/maximum-size-sub-matrix-with-all-1s-in-a-binary-matrix/
*/

#include <bits/stdc++.h>
using namespace std;

int maxSquareRecur(int i, int j, vector<vector<int>> &mat, int &ans) {
    

    if (i<0 || i==mat.size() || j<0 || j==mat[0].size()) 
        return 0;
    
    int right = maxSquareRecur(i, j+1, mat, ans);
    int down = maxSquareRecur(i+1, j, mat, ans);
    int diagonal = maxSquareRecur(i+1, j+1, mat, ans);

    if (mat[i][j]==0) return 0;
    

    int val = 1+min({right, down, diagonal});
    ans = max(ans, val);
    
    return val;
}

int maxSquare(vector<vector<int>> &mat) {

    int ans = 0;
    maxSquareRecur(0,0,mat, ans);
    return ans;
}

int main() {
    vector<vector<int>> mat = 
    {{0, 1, 1, 0, 1}, 
     {1, 1, 0, 1, 0},
     {0, 1, 1, 1, 0},
     {1, 1, 1, 1, 0},
     {1, 1, 1, 1, 1},
     {0, 0, 0, 0, 0}};
    cout << maxSquare(mat) << endl;

    return 0;
}