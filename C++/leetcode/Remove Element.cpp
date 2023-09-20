#include<bits/stdc++.h>

using namespace std;

int removeElement(vector<int>& nums, int val) {
        int i = 0;
        for(int elem : nums){
            if(elem != val){
                nums[i] = elem;
                i++;
            }
        }
        return i;
    }

int main(){
    int n; cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++){
        cin >> nums[i];
    }
    cout << removeElement(nums, 3) << endl;
    // for (auto i = nums.begin(); i != nums.end(); i++){
    //     cout << *i << " ";
    // }
    return 0;
}