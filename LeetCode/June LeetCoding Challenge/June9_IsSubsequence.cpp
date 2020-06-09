class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.size() > t.size())
            return false;
        if(s.size() == 0 || t.size()==0)
            return true;
        char c = s[0];
        int j=0;
        for(int i=0;i<t.size();i++)
        {
            if(c==t[i])
            {
                j++;
                if(j== s.size())
                    return true;
                else
                    c=s[j];
            }

        }
        return false;
    }
};
