//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for c++
class Solution {
  public:
    string removeChars(string string1, string string2) {
        string final = "";
        vector<char> val;
        
        for(int i  = 0; i < string1.size(); i++){
            val.push_back(string1[i]);
        }
        
        for(int i = 0; i < string2.size(); i++){
            for(int j = 0; j<val.size(); j++){
               if(val[j] == string2[i]){
                    val.erase(val.begin() + j);
                    j--;
                }
            }
        }
        
        for(int j = 0; j<val.size(); j++){
            final += val[j];
        }
        
        return final;
        
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string string1,string2;
        cin >> string1; 
        cin >> string2;
        Solution ob;
        cout << ob.removeChars(string1,string2) << endl;
    }
    return 0;
}

// } Driver Code Ends