#include <iostream>
using namespace std;
#include<vector>
#include<map>
#include<algorithm>
#include<climits> 

int main() {
	// your code goes here
	ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

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
	    map <long long,long long> hash1;
	    
	    long long min=INT_MAX;
	    for(int j=0;j<n;j++)
	    {
	        long long no;
	        cin>>no;
	        hash1[no]++;
	        if(no<min)
	            min=no;
	    }
	    for(int j=0;j<n;j++)
	    {
	        long long no;
	        cin>>no;
	        hash1[no]--;
	        if(no<min)
	            min=no;
	    }
	    
	   //cout<<"min: "<<min<<endl;
	   
	   
	    map <long long,long long> :: iterator itr;
	    vector<long long> final;
	    int flag=0;
	    
	    for(itr=hash1.begin();itr!=hash1.end();itr++)
	    {
	        if(itr->second%2!=0)
	        {
	            flag=1;
	            break;
	        }
	        
	        long long x=itr->second;
	        while(x>=2)
	        {
	            final.push_back(itr->first);
	            x=x-2;
	        }
	        while(x<=-2)
	        {
	            final.push_back(itr->first);
	            x=x+2;

	        }
	        
	    }
	    if(flag==1)
	    {
	        cout<<"-1"<<endl;
	        continue;
	    }
	    
	    sort(final.begin(),final.end());
	    int size = final.size()/2;
	    long long cost=0;
	    for(int k=0;k<size;k++)
	    {
	        if((min*2)< final[k])
	        {
	            cost=cost+(min*2);
	        }
	        else
	        {
	            cost=cost+final[k];
	        }
	            
	    }
	    cout<<cost<<endl;
	}
	return 0;
}
