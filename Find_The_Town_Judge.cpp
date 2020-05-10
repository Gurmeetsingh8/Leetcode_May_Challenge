class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        vector<int>indegree(N+1,0);
        vector<int>outdegree(N+1,0);
        for (auto &i : trust)
        {
            indegree[i[1]]++;
            outdegree[i[0]]++;
        }
        int judge = -1;
        for(int i=1;i<outdegree.size();i++) {
            if((outdegree[i] == 0) && (indegree[i] == N-1))
                judge = i;
        }
        return judge;
    }
};
