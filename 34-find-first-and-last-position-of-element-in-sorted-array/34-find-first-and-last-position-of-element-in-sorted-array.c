

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int numsSize, int target, int* returnSize){
    int i,firstposition,lastposition;
    firstposition=-1;lastposition=-1;
    
    
    //iterate through looking for first value, if it exists change both to the index value
    for(i=0;i<numsSize;i++)
    {
        if(firstposition==-1 && nums[i]==target)
        {
            firstposition=i;
            lastposition=i;
        }
        else if(nums[i]==target)
        {
            lastposition=i;
        }
    }
    int*toret=(int*)malloc(sizeof(int)*2);
    toret[0]=firstposition;
    toret[1]=lastposition;
    *returnSize=2;
    
    return toret;
    
}