#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    bool array_contain(vector<int>& vec, int nr){
        for(int i = 0; i < vec.size(); i++){
            if(vec[i] == nr) return true;
        }
        return false;
    }
    
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> intersection;
        for(int i = 0; i < nums1.size(); i++){
            if(array_contain(nums2, nums1[i]) && !array_contain(intersection, nums1[i])) intersection.push_back(nums1[i]);
        }
        return intersection;
    }
};

int main() {
    
 Solution sn;
 vector<int> nums1;
 vector<int> nums2;
 nums1.push_back(1);
 nums1.push_back(2);
 nums1.push_back(3);
 nums2.push_back(3);
 nums2.push_back(2);
 vector<int> result = sn.intersection(nums1, nums2);
 for(int i = 0; i < result.size(); i++)
 {
  std::cout << result[i];   
 }
}