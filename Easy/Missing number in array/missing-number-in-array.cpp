//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;




// } Driver Code Ends
// User function template for C++

class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        int sum = 0, actual_sum = 0, missing_number = -1, size = array.size();
        if(size != n)
        {
            for(int i = 0; i<size; i++)
            {
                sum += array[i];
            }
            
            actual_sum = (n * (n + 1)) / 2;
            missing_number = actual_sum - sum;
            return missing_number;
            
        }else{
            return -1;
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.missingNumber(array, n) << "\n";
    }
    return 0;
}
// } Driver Code Ends