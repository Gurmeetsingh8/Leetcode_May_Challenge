bool permutation(vector<int>s1_array,vector<int>s2_array)
{
    int n = s1_array.size();
    for(int i=0;i<n;i++)
    {
        if(s1_array[i] !=s2_array[i])
            return false;

    }
    return true;
}

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.length();
        int m = s2.length();
        if(n > m) return false;

        vector<int> s1_array(26,0);
        vector<int> s2_array(26,0);
        for(int i = 0;i < n; i++)
        {
            s1_array[s1[i]-'a']++;
            s2_array[s2[i]-'a']++;
        }


        for(int i=0;i<m-n;i++){
            if(permutation(s1_array,s2_array))
               return true;

               s2_array[s2[i]-'a']--;
               s2_array[s2[i+n]-'a']++;
        }
                if(permutation(s1_array,s2_array))
               return true;
                   return false;


    }
};
