#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution{
	public:
		void InsertSort(vector<int> &nums){
			int tmp = 0;
			for(int i=0; i<nums.size(); i++){
				tmp = nums[i];
				int j=i-1;
				for(; j>=0 && tmp<nums[j]; j--){
					nums[j+1] = nums[j];
				}
				nums[j+1] = tmp;
			}
		}	
};

int main(){
	Solution func;
	vector<int> nums = {2,1,5,3,4};
	func.InsertSort(nums);
	for(int i=0; i<nums.size(); i++){
		cout<< nums[i]<< endl;
	}
	return 0;
}