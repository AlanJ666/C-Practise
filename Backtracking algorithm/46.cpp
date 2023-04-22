#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void permuteCore(vector<vector<int>> &result, vector<int>&nums,int begin) {
        if (begin == nums.size() - 1) {
            result.push_back(nums);
            return;
        }

        for (int i = begin; i < nums.size(); ++i) {
        	// 枚举全排列
            std::swap(nums[i], nums[begin]);
            permuteCore(result, nums, begin+1);
            // 恢复原数组
            std::swap(nums[i], nums[begin]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        if (nums.size() == 0) return vector<vector<int>>();
        vector<vector<int>> result;
        permuteCore(result, nums, 0);
        return result;
    }
};

int main(){
	Solution func;
	vector<int> nums = {1,2,3};
	vector<vector<int>> ans;
	ans = func.permute(nums);
	return 0;
}