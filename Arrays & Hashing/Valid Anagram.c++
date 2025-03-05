class Solution {
    public:
        bool isAnagram(string s, string t) {
            map<char,int>map;
            for (auto c : s) {
                map[c]++;
        }
        for (auto c : t) {
                if(map[c]==0) return false;
                else map[c]--;
        }
        for (auto ch : s) {
                if (map[ch] != 0) {
                    return false;
                }
            }
        return true; 
        }
    };
    