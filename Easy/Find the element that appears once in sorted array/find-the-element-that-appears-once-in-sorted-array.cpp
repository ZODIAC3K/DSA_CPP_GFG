//{ Driver Code Starts
// Driver code

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
  public:
    int findOnce(int arr[], int n)
    {
        int low = 0;
        int high = n - 1;
    
        // If the array has only one element then it will be the element that appears once
        if (n == 1) 
            return arr[0];
    
        while (low <= high) {
            int mid = low + (high - low) / 2;
    
            // Check if the middle element is the single element
            if ((mid == 0 || arr[mid - 1] != arr[mid]) && (mid == n - 1 || arr[mid] != arr[mid + 1])) {
                return arr[mid];
            }
    
            // If mid is even, check the next element
            if (mid % 2 == 0) {
                if (arr[mid] == arr[mid + 1]) {
                    low = mid + 2;
                } else {
                    high = mid - 1;
                }
            }
            // If mid is odd, check the previous element
            else {
                if (arr[mid] == arr[mid - 1]) {
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
        }
    
        // No single element found
        return -1;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int A[n];
        for(int i = 0;i < n;i++)
        {
            cin>>A[i];
        }
        
        Solution ob;
        
        int res = ob.findOnce(A,n);
        cout << res << endl;
    }
    
    return 0;
}
// } Driver Code Ends