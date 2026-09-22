class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for(string i : tokens) {
            if(i != "+" && i != "-" && i != "*" && i != "/") {
                st.push(stoi(i));
            }
            else {
                int x = st.top();
                st.pop();

                int y = st.top();
                st.pop();

                if(i == "+")
                    st.push(y + x);
                else if(i == "-")
                    st.push(y - x);
                else if(i == "*")
                    st.push(y * x);
                else
                    st.push(y / x);
            }
        }

        return st.top();
    }
};