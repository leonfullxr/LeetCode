class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> position;

        for(int i=0; i<nums.size()-1; i++){
            int number = nums[i];
            for(int j=i+1; j<nums.size(); j++){
                if(target == number + nums[j]){
                position.push_back(i);
                position.push_back(j);
                }
            }
        }

        return position;
    }
};
