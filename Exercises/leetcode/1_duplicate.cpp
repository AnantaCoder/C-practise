#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++) {
            for(int j = i + 1; j < nums.size(); ) { 
                if(nums[i] == nums[j]) {
                    nums.erase(nums.begin() + j);
                } else {
                    j++; 
                }
            }
        }
        return nums.size();
    }
};

int main() {
    vector<int> nums = {1, 1, 2, 4, 25, 5, 4, 4, 4, 3, 6, 6, 6};
    Solution solution;
    
    
    int newSize = solution.removeDuplicates(nums);
    cout << "New size after removing duplicates: " << newSize << endl;
    cout << "Modified vector: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
