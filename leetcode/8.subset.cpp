#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
private:
    vector<vector<int>> powerset; // stores all subsets
    vector<int> subset; // temporary subset which will be updated as the recursive function executes    
public:
    vector<vector<int>> subsets(vector<int>& nums) {        
        backtrack(nums, 0);
        return powerset;
    }


    void backtrack(vector<int>& nums, int start){
        powerset.push_back(subset);

        for(int i = start; i < nums.size(); i++){  
            // recording all subsets that include nums[i]
            subset.push_back(nums[i]);
            backtrack(nums, i+1);
            
            // remove nums[i] from the present subset and move further to explore subsets that don't contain nums[i]
            subset.pop_back();
        }
    }
};

int
main(int argc, char** argcv){
    Solution obj;
    vector<int> in{1, 2, 3, 4, 5};
    vector<vector<int>> ret = obj.subsets(in);
    vector< vector<int> >::iterator row;
    vector<int>::iterator col;
    for (row = ret.begin(); row != ret.end(); row++) {
        for (col = row->begin(); col != row->end(); col++) {
            printf("%d ", *col);
        }
        putchar('\n');
    }
    return 0;
}