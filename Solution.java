class Solution {
    public int maxFrequencyElements(int[] nums) {
        HashMap<Integer, Integer> map = new HashMap<>();
        int max = 0;
        for(int i = 0; i < nums.length; i++){
            map.put(nums[i], map.getOrDefault(nums[i], 0) + 1);
            int n = map.get(nums[i]);
            if(n > max){
                max = n;
            }
        }

        int ret = 0;
        for(int x : map.keySet()){
            int n = map.get(x);
            if(n == max){
                ret += n;
            }
        }

        return ret;
    }
}
