//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template in C++

class Solution {
  public:
    int firstRepeated(int arr[], int n) {
        unordered_map<int, vector<int>> lower_index_frequency;

        int lowest_value = INT_MAX;
        for(int i = 0; i < n; i++){
                lower_index_frequency[arr[i]].push_back(i+1);
        }
        
        
        for(auto key : lower_index_frequency){
            // cout << "key: " << key.first << " " << "Second[0]: " << key.second[0] << " " << "Key Second Size: " << key.second.size() << endl;
            if(key.second.size() >= 2){
                lowest_value = min(key.second[0], lowest_value);
            }
        }
        
        if(lowest_value == INT_MAX){
           return -1; 
        }
        else{
            return lowest_value;
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

        int arr[n];

        for (int i = 0; i < n; ++i) cin >> arr[i];
        Solution ob;
        cout << ob.firstRepeated(arr, n) << "\n";
    }

    return 0;
}

// } Driver Code Ends