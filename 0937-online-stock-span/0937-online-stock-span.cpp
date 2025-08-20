class StockSpanner {
public:
    vector<int> prices;   // store all previous prices
    stack<int> st;        // stack to store indices of "previous greater element"

    StockSpanner() {}

    int next(int price) {
        prices.push_back(price);   // store today's price
        int i = prices.size() - 1; // today's index

        // pop until we find a price greater than current
        while (!st.empty() && prices[st.top()] <= price) {
            st.pop();
        }

        int span;
        if (st.empty()) {
            // no greater element on left -> span = i+1 (all days so far)
            span = i + 1;
        } else {
            // nearest greater on left is at index st.top()
            span = i - st.top();
        }

        // push current index for future queries
        st.push(i);

        return span;
    }
};