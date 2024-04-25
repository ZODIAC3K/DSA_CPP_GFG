//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        vector<int> checker;
        
        for(int i = 0; i<x.size(); i++){
            if(checker.empty()){
                checker.push_back(x[i]);
            }
            else{
                if(x[i] == '}' && checker.back() == '{'){
                    checker.pop_back();
                }else if(x[i] == ')' && checker.back() == '('){
                    checker.pop_back();
                }else if(x[i] == ']' && checker.back() == '['){
                    checker.pop_back();
                }else{
                    checker.push_back(x[i]);
                }
            }
        }
        
        return checker.empty()? true : false;
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends