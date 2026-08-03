class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>res;
        if(matrix.empty())   return res;

        int left =0; int top= 0;
        int n=matrix.size();
        int m = matrix[0].size();
        int bottom = n-1;
        int right=m-1;

        while(left <= right && top <= bottom){
            //left to right
            for(int i=left; i<= right;i++){   
                res.push_back( matrix[top][i]);
            }
                top++;
            
            //top to bottom
            for(int i=top; i <= bottom;i++ ){
                res.push_back(matrix[i][right]);
            }
                right--;
            
            //right to left
            if(top<=bottom){
            for(int i =right; i >= left;i--){
                res.push_back(matrix[bottom][i]);
            }
                bottom--;
            }
            
            //bottom to top
            if(left <= right){
            for(int i =bottom; i >= top; i--){
                res.push_back( matrix[i][left]);
            }
                left++;
            }
        }

      return res;  
    }
};