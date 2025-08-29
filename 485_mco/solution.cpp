class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
    int max{},temp{};
    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i]) {
            temp+=1;
        } else {
            if (max < temp) {
                max = temp;
            }
            temp = 0;
        }
    }
    if (max < temp) {
        max = temp;
    }
    return max;
}
};
