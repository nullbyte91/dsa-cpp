#include <bits/stdc++.h>

using namespace std;

vector<int>
twoSum(vector<int> in, int target){
    unordered_set<int> uset;
    vector<int> returnV;
    for (auto it=in.begin(); it != in.end(); ++it){
        int rem = target - *it;
        if (!(uset.find(rem) == uset.end())){
            auto remit = find(in.begin(), in.end(), rem);
            returnV.push_back(distance(in.begin(), remit));
            returnV.push_back(distance(in.begin(), it));
        }
        uset.insert(*it);
    }
    return returnV; 
}

int
main(int argc, char** argcv){
    
    vector<int> in {2, 7, 11, 15};
    int target = 9;

    vector<int> ret = twoSum(in, target);
    for (auto it=ret.begin(); it != ret.end(); ++it){
        printf("%d", *it);
    }

    return 0;
}