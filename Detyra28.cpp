// Example program
#include <iostream>
#include <string>


using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.length() == 0) return 0;
        
        for(int i = 0; i < haystack.length() - needle.length(); i++){
         if(haystack.at(i) == needle.at(0)){
             bool same = true;
             int k = 0;
            for(int j = i; j < i + needle.length(); j++){
             if(haystack.at(j) != needle.at(k)){
                same = false;
                break;
             }
             k++;
            }
            if(same) return i; 
         }
         
        }
        
        return -1;
        
    }
};


int main(){
    
    Solution sln;
    cout << sln.strStr("helelo","ll");
    
}