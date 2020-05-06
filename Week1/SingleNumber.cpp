//Method 1(Using Xor)
int singleNumber(vector<int>& nums) {
    int number = nums[0];
    for(int i =1;i<nums.size();i++){
        number = number^nums[i];
    }
    return(number);
}

