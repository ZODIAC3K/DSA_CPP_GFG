//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
vector<string> extractIntegerWords(string s);

int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        vector<string> ans = extractIntegerWords(str);
        if(ans.size() == 0)
            cout<<"No Integers";
        else
            for(auto i: ans) cout<<i<<' ';
        cout<<endl;
    }
    return 0;
}

// } Driver Code Ends


vector<string> extractIntegerWords(string s)
{
    vector<string> result;
    string numStr; 
    for (int i = 0; i < s.size(); ++i) {
        char c = s[i];
        
        if (isdigit(c)) {
            numStr += c; 
        } else if (!numStr.empty()) { 
            result.push_back(numStr); 
            numStr.clear(); 
        }
    }
 
    if (!numStr.empty()) {
        result.push_back(numStr);
    }
    return result;
}