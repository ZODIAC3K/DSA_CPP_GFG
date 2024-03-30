//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        vector <int> count (string s)
        {
            vector<int> result;
            int upperCount = 0, lowerCount = 0, numberCount = 0, otherCount = 0;
            
            for(int i=0; i<s.size(); i++)
            {
                if(isdigit(s[i]))
                {
                    numberCount++;
                }
                else if(!isdigit(s[i]) && islower(s[i]))
                {
                    lowerCount++;
                }
                else if(!isdigit(s[i]) && isupper(s[i]))
                {
                    upperCount++;
                }
                else
                {
                    otherCount++;
                }
            }
            result.push_back(upperCount);
            result.push_back(lowerCount);
            result.push_back(numberCount);
            result.push_back(otherCount);
            return result;
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        vector <int> res = ob.count (s);
        for (int i : res)
            cout << i << '\n';
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends