//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(long long arr[], int n) {
        unordered_map<long long, int> freqMap;
        vector<int> result;
        
        
        for (int i = 0; i < n; i++) {
            freqMap[arr[i]]++;
        }
        

        for (auto& entry : freqMap) {
            if (entry.second > 1) {
                result.push_back(entry.first);
            }
        }
        

        if (result.empty()) {
            return vector<int>{-1};
        }
        

        sort(result.begin(), result.end());
        

        return result;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends