//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        sort(arr,arr+n);
        int maxi=arr[n-1]; // last element of sorted array
        int mini=arr[0]; // first element of sorted array
        int res=maxi-mini; // lowers possible value without adding or subtracting k
        
        for(int i=1;i<n;i++){
            mini=min(arr[0]+k,arr[i]-k); 
            // we should add k in sorted lowest element and subtract k for other element and compair
            // so that we can find out which element is actually lowest by subtracting k
            maxi=max(arr[n-1]-k,arr[i-1]+k);
            // we  should subtract k in shorted highest element and add k into other elements
            // so that we can find out which element is actually highest after adding k.
            
            // but why are we not adding k  in sortest highest element?
            // or subtracting k in sortest lowerst element?
            
            if(mini < 0){
                continue;
            }
            
            res=min(res,maxi-mini);
        }
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends