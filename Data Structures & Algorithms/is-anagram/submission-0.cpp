class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        unordered_map<char,int> freq;
        for(char c:s){
            freq[ c - 'a']++;
        }
        for(char c:t){
           freq[c -'a']--;
        }
        for(auto x:freq){
            if(x.second != 0){
                return false;
            }
        }
        return true;
    }
};
