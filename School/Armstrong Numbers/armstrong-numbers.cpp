//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
        if( n>99 || n<1000)
        {
            int initial_value = n;
            int r = -1;
            int sum = 0;
            
            while(n != 0)
            {
                r = n%10; // last digit of number.
                sum += pow(r,3);
                n = n/10; // remove last digit from given number so that it would trigger while conditon
            }
            
            return sum == initial_value? "Yes" : "No";
        }
        else
        {
            return "No";
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends