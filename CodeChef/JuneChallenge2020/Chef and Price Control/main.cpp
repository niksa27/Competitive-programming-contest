#include <iostream>
using namespace std;

int main() {
	// your code goes here
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
