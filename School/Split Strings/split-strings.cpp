//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution
{   
public:
    vector<string> splitString(string S) 
    { 
        // string S1 = "";
        // string S2 = "";
        // string S3 = "";
        // for(int i = 0; i < S.size(); i++)
        // {
        //     if(isdigit(S[i]))
        //     {
        //         S2 += S[i];
        //     }
        //     else if ( islower(S[i]) || isupper(S[i]) )
        //     {
        //         S1 += S[i];
        //     }
             
        //     else
        //     {
        //         S3 += S[i];
        //     }
        // }
        // return {S1,S2,S3};
        
        vector<string> result(3); // Initialize vector to store S1, S2, S3 so size is 3;

        for (int i = 0; i < S.size(); ++i) {
            char ch = S[i];
            if (isdigit(ch)) {
                result[1] += ch; // S2
            } else if (islower(ch) || isupper(ch)) {
                result[0] += ch; // S1
            } else {
                result[2] += ch; // S3
            }
        }
    
        return result;
    } 
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution ob;
        vector<string> result = ob.splitString(S);
        for (int i = 0; i < result.size(); ++i)
        {
            if(result[i] == "")
                cout<<-1<<"\n";
            else
                cout<<result[i]<<"\n";
        }
    }
    return 0; 
} 


// } Driver Code Ends