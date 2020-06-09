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
        int first=0;
        int second=0;
        int third=0;
        int arr[n];
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        int flag=1;
        for(int k=0;k<n;k++)
        {
            if(arr[k]==5)
            {
                first++;
            }
            else if(arr[k]==10)
            {
                second++;

                if(first>=1)
                {
                    first--;
                }
                else
                {
                    flag=0;
                    break;
                }
                
            }
            else 
            {
                third++;
                if(second>=1)
                {
                    second--;
                }
                else if(first>=2)
                {
                    first=first-2;
                }
                else
                {
                    flag=0;
                    break;
                }
            }
        }
        if(flag==0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
	return 0;
}
