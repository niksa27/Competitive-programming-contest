#include <iostream>
using namespace std;
#include<vector>
#include<algorithm>

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
	    long long n,x;
	    cin>>n>>x;
	    vector<long long> arr;
	    for(int j=0;j<n;j++)
	    {
	        int no;
	        cin>>no;
	        arr.push_back(no);
	    }
	    sort(arr.begin(),arr.end());
	    long long days=0;
	    int rem=0;
	    for(int k=0;k<n;k++)
	    {
	        while(arr[k]>x)
	        {
	            days++;
	            x=x*2;
	        }
	        if(2*arr[k]>=x)
	        {
	            days++;
	            x=arr[k]*2;
	        }
	        else
	        {
	           	rem++;
	        }
	    }
	    cout<<days+rem<<endl;
	}
	return 0;
}
