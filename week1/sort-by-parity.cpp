class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        vector<int> result;
        for(vector<int>::iterator ptr = A.begin(); ptr < A.end(); ptr++){
            if(*ptr % 2 == 0){
                result.insert(result.begin(),*ptr);
            } else{
            result.push_back(*ptr);
            }
        }
        return result;
    }
};