//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    long long sumOfDivisors(int N)
    {
        long long sum = 0;
        for(int i = 1; i <= N; i++){
           sum += (N/i)*i; // keep in mind "sum" is int so x decimal any thing becomes floor which is x
           // example 1.0232 become 1 so (n/i)*i suppose n is 4
           // (4/3)*3 = (1.33)*3 but when 4/3 done it is rounded to 1 as int is the the given data type.
           // 1 * 3 = 3 
           // above process is called contribution calculation
           // (total number / current number)* current number weightage in our case is same.
        }
        return sum;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        long long ans  = ob.sumOfDivisors(N);
        cout<<ans<<endl;
    }
    return 0;
}
// } Driver Code Ends