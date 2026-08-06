class Solution {
public:
    int calculate(string s) {
        stack<int> dabba;
        long long num = 0;
        int sign = 1, result = 0;
        int i = 0;
        while (i < s.size()) {
            char c = s[i];
            if (c == ' ') { i++;
                continue;
            }
            if (isdigit(c))
                num = num * 10 + (c - '0');
            else if (c == '+') { result += sign * num;
                num = 0;
                sign = 1;
            }
            else if (c == '-') { result += sign * num;
                num = 0;
                sign = -1;
            }
            else if (c == '(') { dabba.push(result);
                dabba.push(sign);
                result = 0;
                sign = 1;
            }
            else if (c == ')') { result += sign * num;
                num = 0;
                result *= dabba.top();
                dabba.pop();
                result += dabba.top();
                dabba.pop();
            }
            i++;
        }
        return result + sign * num;
    }
};