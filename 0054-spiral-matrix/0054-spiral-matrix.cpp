class Solution {
public:
   vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> res;
    if (matrix.empty()) return res;
    
    int top = 0, bottom = matrix.size() - 1;
    int left = 0, right = matrix[0].size() - 1;
    
    while (top <= bottom && left <= right) {
        
        // left to right (for loop)
        for (int i = left; i <= right; i++) {
            res.push_back(matrix[top][i]);
        }
        top++;
        
        // top to bottom (while loop)
        int i = top;
        while (i <= bottom) {
            res.push_back(matrix[i][right]);
            i++;
        }
        right--;
        
        // right to left (for loop)
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                res.push_back(matrix[bottom][i]);
            }
            bottom--;
        }
        
        // bottom to top (while loop)
        if (left <= right) {
            int i = bottom;
            while (i >= top) {
                res.push_back(matrix[i][left]);
                i--;
            }
            left++;
        }
    }
    
    return res;
}
        
    
};