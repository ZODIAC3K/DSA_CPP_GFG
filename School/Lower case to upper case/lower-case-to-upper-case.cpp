//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;
 
string to_upper(string in);
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		cout << to_upper(str)<<endl;
	}
	return 0;
}
// } Driver Code Ends



string to_upper(string str){
    string result = "";
    for(int i=0; i<str.size(); i++){
        result += toupper(str[i]); 
        // result = result + toupper(str[i]); // here + cannot be used to concatinate the string by default we need to use '+='
    }
    return result;
}