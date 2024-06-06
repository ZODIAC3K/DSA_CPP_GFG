//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searche
    int searchInSorted(int arr[], int N, int K) 
    { 
        // linear search...
        // for(int i = 0; i<N; i++){
        //     if(arr[i] == K){
        //         return 1;
        //     }
        // }
        // return -1;
        
        
        int left = 0; // starting index
        int right = N-1; // size - 1 end index
        
        while(left <= right){
            int mid = left + (right - left) / 2;
            
            if(arr[mid] == K){
                return 1;
            }
            
            if(arr[mid] > K){
                right = mid-1;
            }else{
                left = mid + 1;
            }
        }
        
        return -1;
       
    }
};

//{ Driver Code Starts.


int main(void) 
{ 
    
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        Solution ob;
        cout << ob.searchInSorted(arr, n, k) << endl;

    }

	return 0; 
} 

// } Driver Code Ends