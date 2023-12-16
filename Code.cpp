class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> freq;
        for(char c:s){
            freq[c]++;
        }
        for(char c:t){
            if(freq[c]==0||freq.find(c)==freq.end()){
                return false;
            }
            freq[c]--;
        }
        for(const auto& ch:freq){
            if(freq[ch.first]!=0){
                return false;
            }
        }
        return true;
    }
};
