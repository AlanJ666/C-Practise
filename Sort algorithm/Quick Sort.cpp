#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution{
	public:
		void QuickSort(vector<int> &nums, int begin, int end){
			if(begin>end){
				return;
			}
			int key = nums[begin];
			int left = begin;
			int right = end;
			while(left<right){
				while(nums[right]>=key && left<right){
					right--;
				}
				while(nums[left]<=key && left<right){
					left++;
				}
				swap(nums[left], nums[right]);
			}
			nums[begin] = nums[left];
			nums[left] = key;
			QuickSort(nums, begin, left-1);
			QuickSort(nums, left+1, end);
		}
};

int main(){
	Solution func;
	vector<int> nums = {6,1,2,7,9,3,4,5,10,8};
	func.QuickSort(nums, 0, nums.size()-1);
	for(int i=0; i<nums.size(); i++){
		cout<< nums[i]<< endl;
	}
	return 0;
}