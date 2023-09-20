#include<bits/stdc++.h>

using namespace std;

void moveZeroes(vector<int>& nums) {
         int lastNonZeroFoundAt = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            nums[lastNonZeroFoundAt++] = nums[i];
        }
    }
    for (int i = lastNonZeroFoundAt; i < nums.size(); i++) {
        nums[i] = 0;
    }
    }

int main(){
    int n; cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++){
        cin >> nums[i];
    }
    moveZeroes(nums);
    for (auto i = nums.begin(); i != nums.end(); i++){
        cout << *i << " ";
    }
    return 0;
}