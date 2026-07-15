
class Solution {
public:

    void solve( vector<int>&arr, int idx, int sum, int target, vector<int>&diary, vector < vector<int>>&res){
        if(idx== arr.size()) {       
        if (sum== target){
        res.push_back(diary);
    
       }
       return;
       }

       if(sum>target)   return;
      
      solve (arr,idx+1,sum,target,diary,res);   //nhi lengee idx =0

      if(arr[idx] +sum <= target) {                  // lenge idx = 0 ko   

        diary.push_back(arr[idx]);
        sum = sum +arr[idx];
        solve(arr,idx,sum,target,diary,res);
        diary.pop_back();
        sum = sum-arr[idx];

      }

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector< vector<int>>res;
        vector<int>diary;

        solve(candidates, 0, 0 , target, diary, res);
        return res;

    }   
};