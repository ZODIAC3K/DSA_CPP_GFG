//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // function to convert a given Gray equivalent n to Binary equivalent.
    int grayToBinary(int n)
    {
        string binaryRepresentation = "";
        for (int i = 0; i <= 31; i++) 
        {
            if (n & (1 << i)) 
            {
                binaryRepresentation = '1' + binaryRepresentation;
            } 
            else 
            {
                binaryRepresentation = '0' + binaryRepresentation;
            }
        }
    
        int startIndex = 0;
        for (int i = 0; i <= 31; i++) 
        {
            if (binaryRepresentation[i] == '1') 
            {
                startIndex = i;
                break;
            }
        }
        binaryRepresentation = binaryRepresentation.substr(startIndex, 32 - startIndex);
    
        string grayCode = "";
        grayCode += binaryRepresentation[0];
        int previousBit = binaryRepresentation[0] - '0';
        for (int i = 1; i < binaryRepresentation.length(); i++) 
        {
            int currentBit = binaryRepresentation[i] - '0';
            if (previousBit ^ currentBit) 
            {
                grayCode = grayCode + '1';
                previousBit = 1;
            } 
            else 
            {
                grayCode = grayCode + '0';
                previousBit = 0;
            }
        }
    
        int decimalResult = 0;
        for (int i = 0; i < grayCode.length(); i++) 
        {
            decimalResult = decimalResult * 2 + (grayCode[i] - '0');
        }
    
        return decimalResult;
    }
};

//{ Driver Code Starts.

// Driver code
int main()
{
    int t,n;
    cin>>t;//testcases
    while(t--)
    {
        cin>>n;//initializing n
        
        Solution ob;
        //calling function grayToBinary()
       cout<< ob.grayToBinary(n)<<endl;
    }
}

// } Driver Code Ends