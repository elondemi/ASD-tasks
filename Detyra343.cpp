
#include <iostream>
#include <string>
#include <math.h>
using namespace std;


class Solution {
public:

    int integerBreak(int n) {
        if(n == 2) return 1;
        if (n == 3) return 2;
        if(n == 4) return 4;
        if(n%3 == 0){
            return (int)pow(3, (int)n/3);
        }
        else {
            return (int)pow(3, (int)(n/3)) * (n%3);
        }
    }
};


int main(){
    Solution s;
    cout << s.integerBreak(4);
    return 0;
}