class Solution {
public:
    string getPermutation(int n, int k) {
        string s="";
        // +48 is added to convert it to ASCII (int to string)
        for(int i=1;i<=n;i++)
        {
            s.push_back(i+48);
        }
        k--;
        do 
        {
            if(k==0)
                break;
            k--;
        }while(next_permutation(s.begin(),s.end()));      
        return s;
    }
};
