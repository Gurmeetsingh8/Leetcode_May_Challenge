class Solution {
public:
    string removeKdigits(string num, int k) {
        if(num.length() == k) return "0";
        stack<char>s;
        for(char i: num)
        {
                while(k && !s.empty()&& int(s.top())>int(i))
                {
                    s.pop();
                    k--;
                }
                    s.push(i);

        }

        if(k) while(k--) s.pop();
        stack<char>temp;
        while(!s.empty())
        {
            temp.push(s.top());
            s.pop();
        }

        while(temp.top()=='0' && temp.size()!=1)
            temp.pop();

        num ="";
        while(!temp.empty())
        {
            num.push_back(temp.top());
            temp.pop();
        }
        return num;
    }

};
