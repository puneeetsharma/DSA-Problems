class Solution {
    public boolean check(int[] nums) {
        int count =0;
        int len = nums.length;
        if(nums[0]<nums[len-1]){
            count++;
        }
        for(int i=0;i<len-1;i++)
        {
            if(nums[i]>nums[i+1]){
                count++;
            }
        }
        if(count<=1){
            return true;
        }
        return false;

    }
}
