class Solution {
public:

    bool isPowerOfTwo(int n) {
        if(n==1){
            return true;
        }
        if(n/2==1 && n%2==0){
            return true;
        }
        else if(n%2==1 ||n==0 ){
            return false;
        }
        else{
            return isPowerOfTwo(n/2);
        }
    }
};