// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int s=1,e=n;
        while(s+1<e)
        {
            int mid = s + (e-s)/2;
            if(isBadVersion(mid)==true)
                e=mid;
            else
                s=mid;
        }
        if(isBadVersion(s)) return s;
        else return e;
    }
};
