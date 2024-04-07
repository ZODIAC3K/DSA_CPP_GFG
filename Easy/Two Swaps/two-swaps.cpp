//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
public: 
    bool checkSorted(int N, vector<int> A)
    {
        int count = 0, temp, index = 0;
        while(index < N)
        {
            if(A[index] != index+1)
            {
                if(N == 649){
                    cout << "A[index]: "<< A[index] << " " << "index: " << index << endl;
                }
                while (A[index] != index+1) 
                { 
                    int temp = 0; 
                    temp = A[A[index]-1];
                    A[A[index]-1] = A[index];
                    A[index] = temp;
                    count++;
                }
            }
            index++;
        }
        if(count == 2 || count == 0){
            return true;
        }
        else
        {
            return false;
        }
    }
};




//{ Driver Code Starts.
int main() 
{
    
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;

        vector<int> A(N);
        for(int i = 0; i < N; i++)
            cin >> A[i];

        Solution ob;
        if(ob.checkSorted(N, A))
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    
    return 0;
}  
// } Driver Code Ends