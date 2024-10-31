class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty() || matrix[0].empty()) return false;
     int row=matrix.size();
     int col=matrix[0].size();
      int start=0;
      int end=(row*col)-1;
      while(start<=end){
        int mid=start+(end-start)/2;
        
        int find=matrix[ mid/col][mid%col];
        if(find==target){
            return true;
        }
        else if(find<target){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        
      }
        return false;
    }
  
};