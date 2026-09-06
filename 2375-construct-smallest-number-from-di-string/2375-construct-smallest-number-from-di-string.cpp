class Solution {
public:
    string smallestNumber(string pattern) {
        string s = "";
        stack<int> st;
        int i = 1;
        for(int j = 0; j <= pattern.size(); j++) {
            st.push(i++);
            if(j == pattern.size() || pattern[j] == 'I') {
                while(!st.empty()) {
                    s += to_string(st.top());
                    st.pop();
                }
            }
        }
        return s;
    }
};