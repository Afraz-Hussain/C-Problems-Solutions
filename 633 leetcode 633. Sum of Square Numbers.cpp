//633. Sum of Square Numbers
class Solution {
public:
    bool judgeSquareSum(int c) {
         long long  start=0;
         long long  end=sqrt(c);
       long long  sum=0;
        while(start<=end){
            
            sum=(start*start)+(end*end);
            if(sum==c){
            return true;
            }

            else if(sum>c){//decrement if sum is greater than target which is c
                end--;
            }
            else {//increment if sum is lesser then target like 
                start++;
            }
        }
        return false; 
    }
};
