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
    int count(vector <int> &vec, int nr){
        int counter = 0;
        for(int i = 0; i < vec.size(); i++){
            if(vec[i] == nr) counter++;
        }
        return counter;
    }
    
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> intersection;
        for(int i = 0; i < nums1.size(); i++){
            if(array_contain(nums2, nums1[i])) {
                if(count(intersection, nums1[i]) < count(nums1, nums1[i]) && count(intersection, nums1[i]) < count(nums2, nums1[i])) {
                    intersection.push_back(nums1[i]);
                }
            }
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
 nums1.push_back(2);
 nums2.push_back(2);
 nums2.push_back(2);
 vector<int> result = sn.intersect(nums1, nums2);
 for(int i = 0; i < result.size(); i++)
 {
  std::cout << result[i];   
 }   
}

