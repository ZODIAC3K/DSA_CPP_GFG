//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
	public:
		int find_median(vector<int> v)
		{
		    sort(v.begin(), v.end());
            if(v.size() % 2 == 0)
            {
                if(v.size() == 2)
                {
                    return floor((v[0]+v[1])/2);
                }
                else
                {
                    return floor((v[(v.size())/2] + v[(v.size() - 1)/2]) / 2);
                }
                
            }
            else
            {
                return v[(v.size())/2];    
            }
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(n);
    	for(int i = 0; i < n; i++)
    		cin>>v[i];
    	Solution ob;
    	int ans = ob.find_median(v);
    	cout << ans <<"\n";
    }
	return 0;
}

// } Driver Code Ends