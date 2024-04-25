//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    unordered_map<int, bool> freq;
	    vector<int> data;
	    
	    for(int i = 0; i < n; i++){ // O(n)
	        if(freq.find(arr[i]) == freq.end()){
	            freq[arr[i]] = true;
	            data.push_back(arr[i]);
	        }
	    }
	    sort(data.begin(), data.end());
	    if(freq.size() >= 2){
	      return data[data.size() - 2];
	    }
	    else{
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
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends