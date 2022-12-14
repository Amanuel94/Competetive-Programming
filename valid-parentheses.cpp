class Solution {
public:
    bool isValid(string s) {
        vector<int> stack;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '('|| s[i] == '[' || s[i] == '{')
                stack.push_back(s[i]);
            else{
                if (stack.size() == 0)
                    return false;
                else{
                    if((stack[stack.size()-1] == '(' && s[i] == ')') || stack[stack.size()-1] == '{' && s[i] == '}' || stack[stack.size()-1] == '[' && s[i] == ']'){
                        stack.pop_back();
                    }
                    else
                        return false;
                }
            }
        }
        if(stack.size() == 0)
            return true;
        else
            return false;
        
    }
};
