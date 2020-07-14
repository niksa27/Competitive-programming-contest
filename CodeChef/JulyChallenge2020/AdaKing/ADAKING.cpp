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
	    int k;
	    cin>>k;
	    char arr[64];
	    for(int j=0;j<64;j++)
	    {
	        arr[j]='X';
	    }
	    arr[0]='O';
	    k--;
	    for(int j=1;j<=k;j++)
	    {
	        arr[j]='.';
	    }

	    for(int j=0;j<64;j++)
	    {
	       cout<<arr[j];
	       if((j+1)%8 ==0)
	        cout<<endl;
	    }
	}
	return 0;
}
