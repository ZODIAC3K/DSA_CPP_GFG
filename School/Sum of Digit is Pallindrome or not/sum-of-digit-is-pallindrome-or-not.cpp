//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int isDigitSumPalindrome(int n) {
        
        int rem,m,rems,rev=0, sum=0;
        
        while(n>0){    
            rem=n%10;
            sum+=rem;
            n/=10;
        }
        //put value of sum to m
        m=sum;
        //reverse the sum
        while(m>0){
            rems=m%10;
            rev=rev*10+rems;
            m/=10;
        }
        //check if reverse is equal to sum or not
        if(sum==rev)
            return 1;
        else 
            return 0;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isDigitSumPalindrome(N) << "\n";
    }
}

// } Driver Code Ends