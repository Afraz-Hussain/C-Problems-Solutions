class Solution {
public:
    bool isPerfectSquare(int num) {
        int start=1;
    int end=num;
    
    while(start<=end){
      long long  int mid=start+(end-start)/2;
      long long  ans=mid*mid;
        if(ans==num){
            return true;
        }
        else if(ans<num){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return false;
    }
};
