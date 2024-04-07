//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	
	int findMaximum(int arr[], int n)
	{
        if (n == 1) {
          return arr[0];  
        }
        if (n == 2)
        {
            if(arr[0] > arr[1]){
                return arr[0];
            }else{
                return arr[1];
            }
        }
    
        int low = 0, high = n - 1, mid = 0;
        
        while (low <= high) {
            mid = low + (high - low) / 2;
    
            if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
            {
                return arr[mid];
            } 
            else if (arr[mid] > arr[mid - 1])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        return arr[mid];
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
        auto ans = ob.findMaximum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends