#include <iostream>
using namespace std;
#include<vector>
#include<cstdlib>

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
	    long long n;
	    cin>>n;
	    vector<long long> arr;
	    long long no;
	    for(int j=0;j<n;j++)
	    {
	        cin>>no;
	        arr.push_back(no);
	    }
	    
	    long long skip=0;
	    for(int k=0;k<n-1;k++)
	    {
	        skip+=(abs(arr[k+1]-arr[k])-1);
	    }
	    cout<<skip<<endl;
	}
	return 0;
}
