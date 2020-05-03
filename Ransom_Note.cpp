class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int n = ransomNote.length();
        int m = magazine.length();
        map<char,int>mag;
        map<char,int>ran;
        for(int i=0;i<n;i++)
        {
            if(ran.find(ransomNote[i]) == ran.end())
                ran[ransomNote[i]] = 1;
            else
                 ran[ransomNote[i]]++;
        }

        for(int i=0;i<m;i++)
        {
            if(mag.find(magazine[i]) == mag.end())
                mag[magazine[i]] = 1;
            else
                 mag[magazine[i]]++;
        }

        map<char,int>::iterator i;
        for(i=ran.begin(); i!=ran.end(); i++)
        {
            if(ran[i->first] > mag[i->first])
                return false;
        }
        return true;
    }
};
