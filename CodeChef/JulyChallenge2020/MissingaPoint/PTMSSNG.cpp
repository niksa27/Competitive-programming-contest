#include<iostream>
using namespace std;
#include<map>

int main()
{
    // faster input output
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
        map<long long, int> hash1;
        map<long long,int> hash2;
        int limit = 4*n-1;
        for(int j=0;j<limit;j++)
        {
            int no1,no2;
            cin>>no1>>no2;
            hash1[no1]++;
            if(hash1[no1]==2)
                hash1[no1]=0;
            hash2[no2]++;
            if(hash2[no2]==2)
                hash2[no2]=0;
        }
        
        map<long long,int> :: iterator itr;
        for(itr=hash1.begin();itr!=hash1.end();itr++)
        {
            if(itr->second ==1)
            {
                cout<<itr->first<<" ";
                break;
            }
        }
        
        for(itr=hash2.begin();itr!=hash2.end();itr++)
        {
            if(itr->second ==1)
            {
                cout<<itr->first<<endl;
                break;
            }
        }       

        
    }
    return 0;
}