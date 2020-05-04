class Solution {
public:
    int findComplement(int num) {
        int output=0;
        int i = 0;
        while(num>0)
        {
            int p = num%2;
            if(p==0)
                output+=pow(2,i);
            i++;
            num/=2;
        }
        return output;
    }
};
