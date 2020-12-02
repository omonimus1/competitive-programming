// https://leetcode.com/problems/valid-parentheses/submissions/
class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        int len = s.size(); 
        if(len <=1 )
            return false;

        for(int i =0;  i< len; i++)
        {
            
            if(s[i] == '}' || s[i] == ']' || s[i] == ')')
            {
                // if stack is empty, this means that we have a non matching parenthesis; 
                if(st.size() == 0)
                    return false; 
                // check if the element of the stack actually match our closing parenthesis; 
                char parenthesis = st.top(); 
                    st.pop();
                    if(parenthesis == '{' && s[i] != '}')
                        return false; 
                    else if(parenthesis == '(' && s[i] != ')')
                        return false; 
                    else if(parenthesis == '[' && s[i] != ']')
                        return false; 
            }
            else
                st.push(s[i]);
        }
        if(st.size() > 0)
            return false; 
        return true; 
    }
};