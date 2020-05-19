class StockSpanner {
public:
    StockSpanner() {

    }

    int next(int price) {
        if(s.empty())
        {
            s.push(price);
            map[price]=1;
            return 1;
        }
        int count = 0;
        while(!s.empty() && price >= s.top())
        {
            count += map[s.top()];
            s.pop();
        }
        s.push(price);
        map[price]=count+1;
        return map[price];

    }
private:
    unordered_map<int,int> map;
    stack<int>s;
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
