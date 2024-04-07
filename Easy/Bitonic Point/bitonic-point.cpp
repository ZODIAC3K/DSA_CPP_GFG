//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	
	int findMaximum(int arr[], int n)
	{
	    // Edge Cases 
        if (n == 1)
        {
          return arr[0];  
        }
        if (n == 2)
        {
            if(arr[0] > arr[1])
            {
                return arr[0];
            }else
            {
                return arr[1];
            }
        }
        
        // Actual logic
        int low = 0, high = n - 1, mid = 0;
        
        while (low <= high) {
            mid = low + (high - low) / 2;
            // check if mid is more than both of its adjacent elements
            // if mid is last element then mid + 1 element doesnt exist
            if (mid == n - 1 || (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]) )
            {
                return arr[mid];
            }
            // selects right side of array
            else if (arr[mid] > arr[mid - 1]) 
            {
                low = mid + 1;
            }
            // selects right left side of array
            else 
            {
                high = mid - 1;
            }
        }
        return -1; // Element doen't have Bitonic Point
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