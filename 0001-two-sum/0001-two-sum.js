/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    
    var i,j;
    var ans = [];
    var obj = new Map();
    for(i=0;i<nums.length;i++){
        var val = target - nums[i];
        if(obj.has(val)){
             ans.push(i);
            ans.push(obj.get(val));
        }
        obj.set(nums[i],i);
    }
    return ans;
};