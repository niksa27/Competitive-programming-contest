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
	    long long no;
	    cin>>no;
	    //int jerrywin=0;
	    while(true)
	    {
    	    if(no%2!=0)
    	    {
    	        break;
    	    }
    	    else
    	    {
    	        no=no/2;
    	    }
	    }
	    long long ans=no/2;
	    cout<<ans<<endl;
	}
	return 0;
}
