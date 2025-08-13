Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
 

Example 1:

Input: s = "()"

Output: true

Example 2:

Input: s = "()[]{}"

Output: true

Example 3:

Input: s = "(]"

Output: false

Example 4:

Input: s = "([])"

Output: true

Example 5:

Input: s = "([)]"

Output: false

 

Constraints:

1 <= s.length <= 104
s consists of parentheses only '()[]{}'.

//CPP CODE HERE
 bool isValid(string s) {
        stack<char> st;
        for(auto i:s){
            if(i=='('||i=='{'||i=='['){
                st.push(i);
            }
            else{
                if(st.empty()||(st.top()=='('&& i!=')')||(st.top()=='{'&& i!='}')||(st.top()=='['&& i!=']')){
                    return false;
                }
                else st.pop();
            }
        }
        return st.empty();
    }
