class Solution {
public:
    int count(string s, char c){
        int count = 0;
        for(int i = 0; i < s.length(); i++){
            if(s.at(i) == c) count++;
        }
        return count;
    }
    
    
    
    char findTheDifference(string s, string t) {
        for(int i = 0; i < t.length(); i++){
            if(count(t, t.at(i)) != count(s, t.at(i))) return t.at(i);
        }
        return NULL;
    }
};