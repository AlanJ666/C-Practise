#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution{
	public:
		void SelectSort(vector<int> &nums){
			int mintmp = nums[0];
			int idx = 0;
			for(int i=0; i<nums.size(); i++){
				for(int j=i; j<nums.size(); j++){
					mintmp = min(mintmp, nums[j]);
					if(mintmp == nums[j]){
						idx = j;
					}
				}
				swap(nums[i], nums[idx]);
				mintmp = nums[i+1];
			}
		}
};

int main(){
	Solution func;
	vector<int> nums = {5,2,6,1,4,3};
	func.SelectSort(nums);
	for(int i=0; i<nums.size(); i++){
		cout<< nums[i]<< endl;
	}
	return 0;
}