class Solution {
public:
    void nextPermutation(vector<int>& nums) {
         int size = nums.size();
        int flag =0;
        int index=size-1;
        for(int i=size-1;i>0;i--){
            if(nums[i-1]<nums[i]){
                for(int j=i;j<size;j++){
                    if(nums[j]<=nums[i-1]){
                        index=j-1;
                        break;
                    }
                }
                nums[index]=nums[index]+nums[i-1];
                nums[i-1]=nums[index]-nums[i-1];
                nums[index]=nums[index]-nums[i-1];
                sort(nums.begin()+i,nums.end());
                flag=1;
                break;
            }
        }
        if(flag==0){
            reverse(nums.begin(),nums.end());
        }
    }
};