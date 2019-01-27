// Leetcode - 1 - Two Sum

class Solution {
    
    public:
    
    #include <unordered_map>;
    
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> map;
        vector<int> result;
        
        for( int i = 0; i < nums.size(); i++ )
        {
            int temp = target - nums[i];
            
            if( map.find(temp) != map.end() )
            {
                result.push_back( map[temp] );
                result.push_back( i );
                return result;
            }
            //not found
            map[nums[i]] = i;
        }
        
        return result;        
    }
};
