// Optimal solution
class Solution{    
public:    
    int singleNumber(vector<int>& nums){
        int XOR = 0;
        for(int i = 0; i<nums.size(); i++){
            XOR = XOR ^ nums[i];
        }
        return XOR;
    }
};

// better solution
class Solution{    
public:    
    int singleNumber(vector<int>& nums){
        unordered_map<int,int> freqq;
        for(int num : nums){
            freqq[num]++;
        }
        for(auto it : freqq){
            if(it.second == 1){
                return it.first;
            }
        }
        return -1;
    }
};

// Examples:
// Input : nums = [1, 2, 2, 4, 3, 1, 4]

// Output : 3

// Explanation : The integer 3 has appeared only once
