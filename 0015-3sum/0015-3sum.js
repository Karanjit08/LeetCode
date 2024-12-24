/**
 * @param {number[]} nums
 * @return {number[][]}
 */
var threeSum = function(nums) {
    var n = nums.length;
    nums.sort((a,b) => a-b);
    var i;
    var result = [];
    
    for(i=0;i<n;i++){
        var a = nums[i];
        var t = -a;
        var s = i+1;
        var e = n-1;
        while(s<e){
            if(nums[s] + nums[e] == t){
                result.push([a,nums[s],nums[e]]);
                while(s<e && nums[s]== nums[s+1]){
                    s++;
                }
                while(s<e && nums[e]==nums[e-1]){
                    e--;
                }
                 s++;
                e--;
            
            }
            else if(nums[s] + nums[e] < t){
                s++;
            }
            else{
                e--;
            }
        }
        while(i+1<n && nums[i]==nums[i+1]){
            i++;
        }
    }
    return result;
};