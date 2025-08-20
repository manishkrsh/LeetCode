class StockSpanner {
public:
    // stack to store {price, span}
    stack<pair<int, int>> st;

    StockSpanner() {
    }
    
    int next(int price) {
        int span = 1;  // at least today counts
        // merge spans of all previous prices <= current
        while (!st.empty() && st.top().first <= price) {
            span += st.top().second;
            st.pop();
        }
        st.push({price, span});
        return span;
    }
};