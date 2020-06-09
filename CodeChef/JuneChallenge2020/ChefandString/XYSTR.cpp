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
	    string s;
	    cin>>s;
	    int cnt=0;
	    int end=s.size()-1;
	    for(int j=0;j<end;j++)
	    {
	        if(s[j]!=s[j+1])
	        {
	            cnt++;
	            j++;
	        }
	    }
	    cout<<cnt<<endl;
	}
	return 0;
}
