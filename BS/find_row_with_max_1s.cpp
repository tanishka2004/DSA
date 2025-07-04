int lowerbound(vector<int> arr, int k){
  int n = arr.size();
  int low = 0, high = n - 1;
  int ans = n;
  while(low<=high){
    int mid = (low+high)/2;
    if(arr[mid] >= k){
         ans = mid;
         high = mid - 1;
    }
    else{
      low = mid + 1;
    }
  }
  return ans;
}
class Solution {
  public:   
  int rowWithMax1s(vector < vector < int >> & mat) {
    int n = mat.size();
    int m = mat[0].size();
    int cnt_row = -1;
    int idx = -1;
     for (int i = 0; i < n; i++) {
      int cnt_ones = m - lowerbound(mat[i], 1);
      if(cnt_ones > cnt_row){
        cnt_row = cnt_ones;
        idx = i;
      }
     }
     return idx;
  }
};
