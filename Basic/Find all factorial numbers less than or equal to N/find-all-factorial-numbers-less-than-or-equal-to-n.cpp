//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    vector<long long> factorialNumbers(long long N)
    {
        vector <long long>v;
        long long a=1,b=2;
        while(a<=N)
        {
            v.push_back(a);
            a=factorial(b++);
        }
        return v;
    }
    long long factorial(long long n)
    {
        if(n==0)
        return 1;
        return n*factorial(n-1);
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long N;
        cin>>N;
        Solution ob;
        vector<long long> ans = ob.factorialNumbers(N);
        for(auto num : ans){
            cout<<num<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}
// } Driver Code Ends