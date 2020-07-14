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
	    cin>>n;
	    int chef=0;
	    int monty=0;
	    for(int j=0;j<n;j++)
	    {
	        int a;
	        int b;
	        cin>>a>>b;
	        int suma=0;
	        int sumb=0;
	        while(a!=0)
	        {
	            int d=a%10;
	            a=a/10;
	            suma+=d;
	        }
	        while(b!=0)
	        {
	            int d=b%10;
	            b=b/10;
	            sumb+=d;
	        }
	        if(suma>sumb)
	        {
	            chef++;
	        }
	        else if(suma==sumb)
	        {
	            chef++;
	            monty++;
	        }
	        else
	        {
	            monty++;
	        }
	    }
	    if(monty>chef)
	        cout<<"1"<<" "<<monty<<endl;
	    else if(monty==chef)
	        cout<<"2"<<" "<<monty<<endl;
	    else
	        cout<<"0"<<" "<<chef<<endl;
	}
	
	return 0;
}
