class Solution {
public:
    vector<int> twoSum(vector<int>& A, int target) {
        int st=0, end = A.size()-1;
        for(int i=0; i<=A.size()-1; i++){
            for(int j=i+1; j<=A.size()-1; j++){
                int sum=A[i]+A[j];
                if(sum==target){
                    return{i,j};
                }
                else{
                    sum=0;
                }
            }
        }
        return {-1,-1};
    }
        
};