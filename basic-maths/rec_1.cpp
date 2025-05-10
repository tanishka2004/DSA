class Solution {
public:
    bool isPalindrome(string s) {
        string s2;
        for (char c : s){
            if (isalnum(c)) {
                s2 += tolower(c);
            }
        }
        int left = 0;
        int right = s2.size() - 1;

        while(left < right){
            if (s2[left] != s2[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
// Input
// s =
// "A man, a plan, a canal: Panama"
// Output
// true
