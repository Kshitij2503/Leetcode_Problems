class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size= nums.size();
        vector<int> vec;
        for(int i=0;i<size;i++){
            for(int j=i+1;j<size;j++){
                if(nums[i]+nums[j]==target){
                    vec.push_back(i);
                    vec.push_back(j);
                    return vec;
                }
            }
        }
        return vec;
    }
};