/**
 * @param {number[]} nums
 * @param {number} k
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var rotate = function(nums, k) {
    var n = nums.length;
    k = k % n;
    nums.reverse();
    
    var i=0;
    var j = k-1;
    
    while(i<j){
        var temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
        i++;
        j--;
    }
    i = k;
    j = n-1;
    while(i<j){
         var temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
        i++;
        j--;
    }
    
};