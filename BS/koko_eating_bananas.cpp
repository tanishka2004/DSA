int maxel(vector<int> &piles){
    int maxi = piles[0];  // Fix: start from 0
    int n = piles.size();
    for(int i = 1; i < n; i++){
        maxi = max(maxi, piles[i]);
    }
    return maxi;
}

int totalhrs(vector<int> &piles, int speed){
    int totalhours = 0;
    int n = piles.size();
    for(int i = 0; i < n; i++){
        totalhours += ceil((double)piles[i] / (double)(speed));
    }
    return totalhours;
}

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = maxel(piles);
        while (low <= high) {
            int mid = (low + high) / 2;
            int totalhours = totalhrs(piles, mid);
            if (totalhours <= h) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};
