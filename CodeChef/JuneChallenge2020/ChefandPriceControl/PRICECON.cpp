#include <iostream>
using namespace std;

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
	    int k;
	    cin>>n;
	    cin>>k;
	    //vector<int> arr;
	    long long loss=0;
	    for(int j=0;j<n;j++)
	    {
	        long long no;
	        cin>>no;
	        if(no>k)
	            loss=loss+(no-k);
	            
	    }
	    cout<<loss<<endl;
	}
	return 0;
}
