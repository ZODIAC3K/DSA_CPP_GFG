//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    
    
    long long merge(long long arr[], long long low ,long long mid , long long high){
        long long count= 0;
        
        long long left = low;
        long long right = mid+1;
        
        long long temp[high-low+1];
        long long k=0;
        
        
        while(left <= mid && right <= high){
            if(arr[left] <= arr[right]){
                temp[k++] = arr[left++];
            }
            else{
               temp[k++] = arr[right++];
                count += (mid - left + 1);
            }
        }
        
        while(left <= mid){
             temp[k++] = arr[left++];
        }
        while(right <= high){
             temp[k++] = arr[right++];
        }
        
        for(int i=low;i<=high;i++){
            arr[i] = temp[i-low];
        }
        
        return count;
    }

      long long mergesort(long long arr[], long long low ,long long high){
        long long count = 0;
        
        if(low <high) {
        
            long long  mid = low +(high-low)/2;
            
            count += mergesort(arr  , low , mid);
            count += mergesort(arr , mid+1 , high);
            
            count += merge(arr  , low , mid , high);
        
        }
        
        return count;
    }
    
    
    long long int inversionCount(long long arr[], long long N)
    {
          long long c = mergesort(arr , 0  , N-1);
        
        return c;
    }

};

//{ Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}

// } Driver Code Ends