#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> combine;
        dfs(candidates, target, ans, combine, 0);
        return ans;
    }

    void dfs(vector<int> &candidates, int target, vector<vector<int>> &ans, vector<int> &combine, int idx){
        if( idx == candidates.size()){
            return;
        }
        if(target==0){
            ans.emplace_back(combine);
            return;
        }
        dfs(candidates, target, ans, combine, idx+1);
        if(target - candidates[idx] >= 0){
            combine.emplace_back(candidates[idx]);
            dfs(candidates, target-candidates[idx], ans, combine, idx);
            combine.pop_back();
        }
    }
};

int main(){
	Solution func;
	vector<int> nums = {2,3,5};
	int target = 8;
	vector<vector<int>> ans;
	ans = func.combinationSum(nums, target);
	return 0;
}