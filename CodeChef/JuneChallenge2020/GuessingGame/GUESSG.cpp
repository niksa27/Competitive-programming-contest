#include <iostream>
using namespace std;

int main() {
	// your code goes here	

	// As it grader based problem No output.txt file  
	// & input file contains sample only how the interaction happens between grader and you

	int n;
	cin>>n;
	int j=1;
	
	int low=1;
	int high= n;
	char c;
	int flag=0;
	for(int i=0;i<300;i++)
	{
	    cout<<j<<endl;
	    cin>>c;
	    if(c=='E')
	    {
	        break;
	    }
	    if(c=='L' && j==1)
	    {
	        continue;
	    }
	    if (c=='G' && j==1)
	    {
	        j = (low+high)/2;
	        continue;
	    }
	    if(flag==0)
	    {
	        flag=1;
	    }
	    else if(flag==1)
	         {
    	        flag=0;
    	        if(c=='L')
    	        {
    	            high=j-1;
    	            j=(low+high)/2;
    	       
    	        }
    	        else if(c=='G')
    	        {
    	            low=j+1;
    	            j=(low+high)/2;
    	        }
    	     }
	}
	return 0;
}

