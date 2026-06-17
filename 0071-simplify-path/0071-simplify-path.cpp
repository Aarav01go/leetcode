class Solution {
public:
    string simplifyPath(string path) {
        vector<string> dr;
        stringstream ss(path);
        string tkn;
        while (getline(ss, tkn, '/')) {
            if (tkn == "" || tkn == ".") continue;
            if (tkn == "..") {
                if (!dr.empty()) dr.pop_back();
            } else {
                dr.push_back(tkn);
            }
        }
        string res = "";
        for (auto& d : dr) {
            res += "/" + d;
        }
        return res.empty() ? "/" : res;
    }
};