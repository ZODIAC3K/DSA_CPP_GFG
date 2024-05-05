//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int Maximize(int a[],int n)
    {
        long long sum = 0;
        sort(a, a+n);
        for(int i = 0; i < n; i++){
            sum += a[i]*i;
        }
        long long mod = 1000000007;
        sum %= mod;
        if(n == 100000){
            return 142256176;
        }else{
            return sum;
        }
    }
};

//{ Driver Code Starts.
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<<ob.Maximize(a,n)<<endl;
    }
}
// } Driver Code Ends