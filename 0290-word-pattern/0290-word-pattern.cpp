class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> mp;
        unordered_map<string, char> rev;
        string tmp;
        int n = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ' || i == s.size() - 1) {
                if (i == s.size() - 1)
                    tmp += s[i];
                if (n >= pattern.size())
                    return false;
                if (mp.find(pattern[n]) == mp.end()) {
                    if (rev.find(tmp) != rev.end())
                        return false;
                    mp[pattern[n]] = tmp;
                    rev[tmp] = pattern[n];
                } else {
                    if (mp[pattern[n]] != tmp)
                        return false;
                }
                n++;
                tmp = "";
            } else
                tmp += s[i];
        }
        return n==pattern.size();
    }
};