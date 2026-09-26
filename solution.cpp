class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> map;
        int max = 0;
        for(int i = 0; i < nums.size(); i++){
            if(map.contains(nums[i])){
                map[nums[i]] += 1;
            }
            else{
                map[nums[i]] = 1;
            }

            if(map[nums[i]] > max){
                max = map[nums[i]];
            }
        }

        int ret = 0;
        for(const auto [x, y] : map){
            if(y == max){
                ret += y;
            }
        }

        return ret;
    }
};
