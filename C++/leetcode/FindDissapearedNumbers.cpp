#include<bits/stdc++.h>

using namespace std;

vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size(), x;
        for(int i = 0; i < n; i++){
            x = abs(nums[i]) - 1;
            nums[x] = (nums[x] > 0 ? -nums[x] : nums[x]);
        }
        
        for(int i = 0; i < n; i++){
            if(nums[i] > 0){
                ans.push_back(i+1);
            }
        }
        
        return ans;
    }

int main(){
    int n; cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++){
        cin >> nums[i];
    }
    vector<int> res = findDisappearedNumbers(nums);
    for (auto i = res.begin(); i != res.end(); i++){
        cout << *i << " ";
    }
    return 0;
}