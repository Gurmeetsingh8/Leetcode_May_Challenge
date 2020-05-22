bool compare (pair<char,int>&m1, pair<char,int>&m2) {
    return (m1.second > m2.second);
}
class Solution {
public:
    string frequencySort(string s) {
        map<char,int> m;
        for(int i=0; i<s.size(); i++) {
            if(m.find(s[i])==m.end())
                m[s[i]]=1;
            else
                m[s[i]]++;
        }
        string ans;
        vector<pair<char,int>> v(m.begin(),m.end());
        sort(v.begin(),v.end(),compare);
        for(auto i =0;i<v.size();i++)
        {
            while(v[i].second--)
            {
                ans+=v[i].first;
            }
        }
        return ans;
    }
};
