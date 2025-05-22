class solution{
public:
 int largestElement(vector<int>&  nums) {
  int largest = nums[0];
  for(int i=0; i<nums.size(); i++){
  if(nums[i] > largest){
  largest = nums[i];
}

  return largest;
}
};

// Input: nums = [3, 3, 6, 1]

// Output: 6

// Explanation: The largest element in array is 6
