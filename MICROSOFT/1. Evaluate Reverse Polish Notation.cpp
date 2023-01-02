class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int ans = 0;
        int num = stoi(tokens[0]);
        st.push(num);
        int i = 1;
        int len = tokens.size();
        while(i<len)
        {
            if(tokens[i] == "+")
            {
                int n1 = st.top();
                st.pop();
                int n2 = st.top();
                st.pop();
                ans = n1 + n2;
                st.push(ans);
            }
            else if(tokens[i] == "-")
            {
                int n1 = st.top();
                st.pop();
                int n2 = st.top();
                st.pop();
                ans = n2 - n1;
                st.push(ans);
            }
            else if(tokens[i] == "*")
            {
                int n1 = st.top();
                st.pop();
                int n2 = st.top();
                st.pop();
                ans = n2 * n1;
                st.push(ans);
            }
            else if(tokens[i] == "/")
            {
                int n1 = st.top();
                st.pop();
                int n2 = st.top();
                st.pop();
                if(n1 != 0)
                ans = n2/n1;
                st.push(ans);
            }
            else
            {
                ans = stoi(tokens[i]);
                st.push(ans);
            }
            i++;
        }
        return st.top();
    }
};
