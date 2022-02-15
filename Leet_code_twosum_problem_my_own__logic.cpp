#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int> nums;
	nums={3,2,4};
	int target=6;
int i=nums.size(),j=0;
	while(i>j){
		if(nums[i]+nums[j]==target)break;
		if(i==j+1){
			i--;
			j=-1;	
		       }
		j++;
	}
	cout<< i << j;

}        
	


	

