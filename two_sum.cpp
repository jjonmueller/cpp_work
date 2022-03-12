// This is o(n^2)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Iterate over first loop
        vector<int> indices {};
        for (int i {0}; i < nums.size(); i++) {
            for (int j {i+1}; j < nums.size(); j++) {
                if (target == (nums.at(i) + nums.at(j))) {
                    indices.push_back(i); indices.push_back(j);
                    return indices;
                }
            }
        }
        return indices;
    }
};

// This is o(n)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        vector<int> indices {};
        for (int i {0}; i < nums.size(); i++) {
          m[nums[i]] = i;
        }
        for (int i {0}; i < nums.size(); i++) {
            int value = target - nums.at(i);

            if(m.find(value) != m.end() && m[value] != i) {
                indices.push_back(m[value]);
                indices.push_back(i);
                return indices;
            }
        }
        return indices;
    }
};
