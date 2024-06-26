//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    long long sumOfSeries(long long n) {
        // O(n);
        // long long sum = 0;
        // for(int i = 1; i<=n; i++){
        //     sum += pow(i,3);
        // }
        // return sum;
        
        // -------------
        
        // this formula works only for sum of n natural number to the power of 3
        // and formula for sum of n natural number to the power of k is differrent for every k...
        // return  (n*(n+1)/2) * (n*(n+1)/2);
       
        if(n == 0){
            return 0;
        }
        
        return (n*n*n + sumOfSeries(n-1));
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        Solution ob;
        cout << ob.sumOfSeries(N) << "\n";
    }
}
// } Driver Code Ends