bool possibleans(vector<int>& bloomDay, int days, int m , int k) {
       int cnt = 0;
       int totalnoB = 0;
       for(int i =0; i< bloomDay.size(); i++){
        if(bloomDay[i] <= days){
            cnt++;
        }
        else{
            totalnoB += (cnt/k);
            cnt = 0;
        }
       }
         totalnoB += (cnt / k);
         return totalnoB >= m;
}
    
class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
      long long val = m * 1ll * k * 1ll;
      int n = bloomDay.size(); 
      if (val > n) return -1; //impossible case.
    //find maximum and minimum:
      int mini = INT_MAX, maxi = INT_MIN;
      for (int i = 0; i < n; i++) {
        mini = min(mini, bloomDay[i]);
        maxi = max(maxi, bloomDay[i]);
    }
    int low = mini, high = maxi;
    int ans = -1;
    while(low<=high){
        int mid = (low+high)/2;
        if(possibleans(bloomDay, mid, m, k)){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return ans;
    }
};
