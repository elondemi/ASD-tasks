
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum = 0;
        for(int i = 1; i <= num / 2; i++){
            if(num % i == 0){
                sum += i;
            }
        }
        return sum == num;
    }
};


int main(){
    Solution s;
    int num;
    cout << "Shenoni numrin: ";
    cin >> num;
    
    cout << (s.checkPerfectNumber(num) ? "true" : "false");
    return 0;
}