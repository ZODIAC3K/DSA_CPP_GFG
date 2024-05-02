//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    
    
    void findallpath(vector<vector<int>> &m, int n, int row, int col, vector<string> &paths, string current_path)
    {
        if( row >= n || col >= n || row < 0 || col < 0 || m[row][col] == 0){
            return;
        }
        
        if(row == n-1    && col == n-1) // meaning I have traversed the whole matrix successfully
        {
            paths.push_back(current_path);
            return;
        }
        
        m[row][col] = 0; // marking current visited cell as 0 to find alternate paths;
        
        findallpath(m, n, row, col+1, paths, current_path + 'R');
        findallpath(m, n, row, col-1, paths, current_path + 'L');
        findallpath(m, n, row-1, col, paths, current_path + 'U');
        findallpath(m, n, row+1, col, paths, current_path + 'D');
        
        m[row][col] = 1; // marking current index as unvisited for other recursive calls;
    }

    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> paths;
        findallpath(m, n, 0, 0, paths, "");
        return paths;
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends