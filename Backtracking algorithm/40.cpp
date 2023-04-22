#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> tmp;
        dfs(candidates, target, ans, tmp, 0);
        return ans;
    }

    void dfs(vector<int> &candidates, int target, vector<vector<int>> &ans, vector<int> &tmp, int idx){
        if( idx == candidates.size()){
            return;
        }
        if( target == 0){
            ans.emplace_back(tmp);
            return;
        }
        dfs(candidates, target, ans, tmp, idx+1);
        if( target-candidates[idx] >= 0){
            tmp.emplace_back(candidates[idx]);
            dfs(candidates, target-candidates[idx], ans, tmp, idx+1);
            tmp.pop_back();
        }
    }
};

int main(){
	Solution func;
	vector<int> nums = {10,1,2,7,6,1,5};
	int target = 8;
	vector<vector<int>> ans;
	ans = func.combinationSum2(nums, target);
	return 0;
}