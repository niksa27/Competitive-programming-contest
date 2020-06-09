#include <iostream>
using namespace std;
#include<vector>
int main() {
	// your code goes here
	//below 2 lines are for running code on your local machine 
    //Remove these 2 lines while using code online on codechef as they provide thier own input
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int n;
	    cin>>n;
	    vector<vector <int>> ans(n);

	    int cnt=1;
	    int ref=cnt;
	    for(int j=0;j<n;j++)
	    {
	        //ans[j]=vector<int>(n);
	  
	        if(j%2==0)
	        {
	            cnt=ref;
    	        for(int k=0;k<n;k++)
    	        {
    	            ans[j].push_back(cnt++);
    	        }
    	        ref=cnt+n;
	        }
	        else
	        {
	            cnt=cnt+(n-1);
	            for(int k=0;k<n;k++)
    	        {
    	            ans[j].push_back(cnt--);
    	        } 
	        }
    	        //ans[j]=row;
    	    
	    }
	    for(int l=0;l<n;l++)
	    {
	        for(int m=0;m<n;m++)
	        {
	            cout<<ans[l][m]<<" ";
	        }
	        cout<<endl;
	    }
	}
	return 0;
}
