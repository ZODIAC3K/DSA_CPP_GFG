//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    vector<int> positive;
        vector<int> negative;
        
        for(int i = 0; i < n; i++){
            if(arr[i] >= 0){
                positive.push_back(arr[i]);
            }
            else{
                negative.push_back(arr[i]);
            }
        }
        
        int pos_idx = 0, neg_idx = 0, idx = 0;
        
        while(pos_idx < positive.size() && neg_idx < negative.size() ){
            arr[idx] = positive[pos_idx];
            idx++;
            pos_idx++;
            arr[idx] = negative[neg_idx];
            idx++;
            neg_idx++;
        }
        
        while(pos_idx < positive.size()){
           arr[idx] = positive[pos_idx]; 
           idx++;
           pos_idx++;
        }
        
        while(neg_idx < negative.size()){
           arr[idx] = negative[neg_idx];
           idx++;
           neg_idx++;
        }
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends