/*POTD:-23 feb 
Unique Paths in a Grid
EasyAccuracy: 50.47%Submissions: 22K+Points: 2
Lamp
Don't Miss Out on the Chance to Work with Leading Companies! Visit the GFG Job Fair Now!  

You are given a matrix grid of n x  m size consisting of values 0 and 1. A value of 1 means that you can enter that cell and 0 implies that entry to that cell is not allowed.

You start at the upper-left corner of the grid (1, 1) and you have to reach the bottom-right corner (n, m) such that you can only move in the right or down direction from every cell.

Your task is to calculate the total number of ways of reaching the target modulo (109+7).
Note: The first (1, 1) and last cell (n, m) of the grid can also be 0


Example 1:

Input:
n = 3, m = 3
grid[][] = {{1, 1, 1};
            {1, 0, 1};
            {1, 1, 1}}
Output:
2
Explanation:
1 1 1
1 0 1
1 1 1
This is one possible path.
1 1 1
1 0 1
1 1 1
This is another possible path.
Example 2:

Input:
n = 1, m = 3
grid = {{1, 0, 1}}
Output :
0
Explanation:
There is no possible path to reach the end.

Your Task:  
You don't need to read input or print anything. Your task is to complete the function uniquePaths() which takes 2 integers n, and m, and a matrix of size n*m as input and returns the number of unique paths from cell (1,1) to (n,m) modulo (109+7)


Expected Time Complexity: O(n*m)
Expected Auxiliary Space: O(n*m)


Constraints:
1 ≤ n*m ≤ 106*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  	const long long int Mod=1000000007; // target modulo 10^9+7 accoring to question;
    int countpath(int n,int m,int i,int j,vector<vector<int>> arr,int &count){
        if(i==n and j==m){
            return 1;
        }
       
		if(arr[i][j+1]==0 and arr[i+1][j]==0){ // No path found;
            return 0;
        }
       //cout<<"Count at "<<i<< " "<< j<<":-"<<count<<endl;
       cout<<"Recursive call for "<<i<<" "<<j<<endl;
       
       
       // DOWN RECURSIVE CALL 
        if(arr[i+1][j]!=0 and i<n ){  //i<n because if n=2 so should not greater than or equal to 2 but we can not change j so j can be equal;
           count+= countpath(n,m,i+1,j,arr,count)%Mod;
        }
       //RIGHT RECURSIVE CALL
        if(arr[i][j+1]!=0 and j<m ){
           count+= countpath(n,m,i,j+1,arr,count)%Mod;
        }    
		
		return count;  
    }
    
    int uniquePaths(int n, int m, vector<vector<int>> &grid) {
        int count=0;
        int ans= countpath(n-1,m-1,0,0,grid,count); 
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cout<<"No of test cases:-"<<endl;
    cin >> t;
    while (t--) {
        int n,m,x;
        cout<<"enter n and m :-";
        cin>>n>>m;
        
        vector<vector<int>> grid(n,vector<int>(m));
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>grid[i][j];
            }
        }

        Solution ob;
        cout << ob.uniquePaths(n,m,grid) << endl;
    }
    return 0;
}
// } Driver Code Ends