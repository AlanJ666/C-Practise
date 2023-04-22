#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution{
	public:
		void ShellSort(vector<int> &nums){
			int len = nums.size();
			int win = len;
			while(win>1){
				win = win/2;
				for(int i=0; i<len; i=i+win){
					int tmp = nums[i];
					int j = i - win;
					for(; j>=0 && tmp<nums[j]; j=j-win){
						nums[j+win] = nums[j];
					}
					nums[j+win] = tmp;
				}
			}
		}
};

int main(){
	Solution func;
	vector<int> nums = {2,1,5,4,3};
	func.ShellSort(nums);
	for(int i=0; i<nums.size(); i++){
		cout<< nums[i]<< endl;
	}
	return 0;
}