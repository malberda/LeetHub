class Solution {
    public int[] twoSum(int[] nums, int target) {
        int toret[] = new int[2];
        for(int i=0;i<nums.length;i++) {
            for(int j=i+1;j<nums.length;j++) {
                if(nums[i]+nums[j]==target && i!=j) {
                    toret[0]= i;
                    toret[1]=j;
                    return toret;
                }    
            }
        }
            return toret;
    }
}