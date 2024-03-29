//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int diagonalSumDifference(int N, vector<vector<int>> Grid) {
        int left_diagonal = 0, right_diagonal = 0;
        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < N; j++)
            {   
                if(j == i)
                {
                    left_diagonal = left_diagonal + Grid[i][j];
                }
                if (j == N-i-1) // Row = i, Column = j ## Secondary Diagonal == N (Matrix Dimention) - i (Row) - 1 
                {
                    right_diagonal = right_diagonal + Grid[i][j];
                }
            }
        }
        return abs(left_diagonal - right_diagonal);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<vector<int>> Grid1(N, vector<int>(N));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++) cin >> Grid1[i][j];
        Solution ob;
        cout << ob.diagonalSumDifference(N, Grid1) << "\n";
    }
}
// } Driver Code Ends