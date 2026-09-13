class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> pairs = {
            {')', '('}, {'}', '{'}, {']', '['}
        };
        stack<char> st;
        
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } else {
                if (st.empty() || st.top() != pairs[c]) {
                    return false;
                }
                st.pop();
            }
        }
        
        return st.empty();
    }
};