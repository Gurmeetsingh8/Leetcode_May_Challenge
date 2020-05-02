class Solution {
public:
    int numJewelsInStones(string J, string S) {
        map<char,int>m;
        for(int i=0;i<S.length();i++)
        {
            if(m.find(S[i])==m.end())
                m[S[i]]=1;
            else
                m[S[i]]++;
        }
        int count=0;
        for(int i=0;i<J.length();i++)
        {
            if(m.find(J[i])!=m.end())
                count+=m[J[i]];
        }
        return count;

    }
};
