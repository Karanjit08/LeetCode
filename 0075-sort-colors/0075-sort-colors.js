/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var sortColors = function(nums) {
    var redArr = [];
    var whiteArr = [];
    var blueArr = [];
    
    var i;
    
    for(i=0;i<nums.length;i++){
        if(nums[i]==0){
            redArr.push(nums[i]);
        }
        else if(nums[i]==1){
            whiteArr.push(nums[i]);
        }
        else{
            blueArr.push(nums[i]);
        }
    }
    var index=0;
    
    var r = redArr.length;
    var w = whiteArr.length;
    var b = blueArr.length;
    
    
    while(r != 0){
        nums[index++] = 0;
        r--;
    }
    
    while(w != 0){
        nums[index++] = 1;
        w--;
    }
    
    while(b != 0){
        nums[index++] = 2;
        b--;
    }
};