class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        unordered_map<char, int> check;
        for(char c : s){
            check[c]++;
        }
        for(char c : t){
            check[c]--;
            if(check[c] < 0){
                return false;
            }
        }
        return true;
    }
};
