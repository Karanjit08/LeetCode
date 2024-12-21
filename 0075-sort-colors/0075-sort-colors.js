/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var sortColors = function(nums) {
    var l = 0;
    var m = 0;
    var h = nums.length - 1;
    while(m<=h){
        if(nums[m]==1){
            m++;
        }
       
        else if(nums[m]==0){
            var temp = nums[l];
            nums[l] = nums[m];
            nums[m] = temp;
            l++;
            m++;
        }
        else{
            var temp = nums[m];
            nums[m] = nums[h];
            nums[h] = temp;
         
            h--;
        }
    }
};