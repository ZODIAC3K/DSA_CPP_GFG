//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {

            unordered_map<int, int> mb;
            unordered_map<int, int> mc;
            vector<int> result;
            
            
            for(int i = 0; i<n2; i++){
                mb[B[i]]++;
            }
            
            for(int i = 0; i<n3; i++){
                mc[C[i]]++;
            }
            
            
            
            for(int i = 0; i<n1; i++){
                if(mb.find(A[i]) != mb.end()){
                    if(mc.find(A[i]) != mc.end()){
                        if(result.empty() || result.back() != A[i]){
                            result.push_back(A[i]);
                        }
                    }
                }
            }
            
            // int maxsize = INT_MIN;
            
            // maxsize = max(n1, n2);
            // maxsize = max(maxsize, n3);
            // char gratest = '';
            
            // if(maxsize == n1){
            //   gratest = 'A';
            // }else if(maxsize == n2){
            //     gratest = 'B';
            // }else{
            //     gratest = 'C';
            // }
            
            // for(int i = 0; i < maxsize; i++){
            //     if(A.find(greated[i])
            // }
            
            return result;

            
        }
};

//{ Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}
// } Driver Code Ends