class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> st(nums.begin(), nums.end());
        int max_length = 0;
        for(int num : st){
            if(!st.count(num - 1)){
                int length = 1;
                int current = num;

                while(st.count(current + 1)){
                    current++;
                    length++;
                }

                max_length = max(max_length, length);
            }
        }
        return max_length;

    }
};
