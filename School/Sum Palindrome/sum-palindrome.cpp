//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
   private: 
        long long int reverseNum(int n){
            string rev = to_string(n);
            reverse(rev.begin(),rev.end());
            long long int ans = stoll(rev);
            
            return ans;
        }
    public:
        long long isSumPalindrome(long long n){
        // code here
            for (int i=0; i<=5 ; i++){
                if (n==reverseNum(n)){
                    return n;
                }
                else{
                    n += reverseNum(n);
                }
            }
            return -1;
        }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        Solution ob;
        cout<<ob.isSumPalindrome(n)<<endl;
    }
    return 0;
}

// } Driver Code Ends