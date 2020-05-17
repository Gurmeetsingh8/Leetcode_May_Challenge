bool aresame(int *count, int *cur_count)
{
    for(int i=0; i<26; i++)
    {
        if(count[i]!=cur_count[i])
            return false;
    }
    return true;
}

int * frequency(string s)
{
    int *ans = new int[26];
    for(int i=0; i<s.length(); i++)
    {
        ans[s[i]-'a']++;
    }
    return ans;
}
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> list;
        if(p.length() > s.length()) return list;
        int *count = new int[26];
        int *cur_count = new int[26];
        int N = s.length();
        int M = p.length();
        count = frequency(p);
        cur_count = frequency(s.substr(0,M));

        if(aresame(count,cur_count))
            list.push_back(0);

        for(int i = M; i < N; i++)
        {
            cur_count[s[i-M]-'a']--;
            cur_count[s[i]-'a']++;
            if(aresame(count,cur_count))
                list.push_back(i-M+1);
        }
        return list;
    }
};
