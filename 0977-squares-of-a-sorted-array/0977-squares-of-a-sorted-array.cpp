
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;

        for(int i =0; i <nums.size(); i++){
            if(nums[i]< 0){
                neg.push_back(nums[i]);
            }
            else{
                pos.push_back(nums[i]);
            }
        }

            for(int i =0; i<neg.size(); i++){
                neg[i]=neg[i]*neg[i];
              }
                reverse(neg.begin(),neg.end() );
              
              for(int j=0;j<pos.size();j++){
                pos[j]=pos[j]*pos[j]  ;
              }
              int n= neg.size();
              int m=pos.size();
            vector<int> res(n+m);

              int i=0, j=0;
            int idx =0;
            

              while(i<n && j<m){
                if(neg[i] < pos[j]){
                    res[idx]=neg[i];
                    i++;
                    idx++;
                }
                else{
                    res[idx]=pos[j];
                    j++;
                    idx++;
                }
              }
              while(i<n){
                res[idx]=neg[i];
                idx++;
                i++;
              }
              while(j<m){
                res[idx]=pos[j];
                idx++;
                j++;
              }

              return res;
        }  
    };

