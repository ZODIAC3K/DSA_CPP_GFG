//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string modify (string s)
    {
        string result = "";
        for(int i = 0; i < s.size(); i++){
            if(s[i] != ' ')
            {
                result += s[i];
            }
            else
            {
                continue;    
            }
        }
        return result;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    cin.ignore ();
    while (t--)
    {
        string s;
        getline (cin, s);
        Solution ob;
        cout <<ob.modify (s) << endl;
    }
    return 0;
}


// } Driver Code Ends