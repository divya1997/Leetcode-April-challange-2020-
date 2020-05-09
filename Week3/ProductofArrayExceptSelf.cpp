//Product of Array Except Self
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        ans.push_back(1);
        for(int i=1;i<nums.size();i++){
            ans.push_back(nums[i-1]*ans[i-1]);
        }
        int Rprod = 1;
        for(int j=nums.size()-1;j>=0;j--){
            ans[j] = Rprod*ans[j];
            Rprod = Rprod*nums[j];
        }
        return(ans);
        
    }
};

