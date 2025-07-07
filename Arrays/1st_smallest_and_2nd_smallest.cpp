class Solution {
  public:
    vector<int> minAnd2ndMin(vector<int> &arr) {
         if (arr.size() < 2) {
        return { -1 };
    }
        // code here
        int first = INT_MAX;
        int second = INT_MAX;
        for(int i = 0; i< arr.size(); i++){
         if(arr[i] < first){
             second = first;
             first = arr[i];
         }
        if(arr[i] < second && arr[i] != first){
            second = arr[i];
        }
        }
     if(second == INT_MAX){
         return {-1};
     }
     return{first,second};
    }
};
