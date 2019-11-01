#include <iostream>
#include <bits/stdc++.h>
#include <cstdio>

using namespace std;

class Solution {
public:
    int minKBitFlips(vector<int>& A, int K) {
        vector <int>::iterator it;
        
        int windowSize = K;
        int flip_count = 0;
        int noFlip = 0;
        bool fount_zero = false;
        
        for (int pointer=0; pointer<A.size(); pointer++){
            cout << "M:" << A[pointer] << endl;
            if (A[pointer] == 0){
                if ((A.size() - pointer) >= windowSize){
                    for (int window_start=0; window_start < windowSize; window_start++){
                        int index = pointer+window_start;
                        if (A[index] == 0 ){
                            A[index]++;
                        } else {
                            A[index]--;
                        }
                        
                        cout << "I:" << A[index] << " ";
                        if (A[index] == 0){
                            fount_zero = true;  
                        } else {
                            if (!fount_zero){
                                noFlip++;
                            }
                        }
                    }
                    flip_count += 1;
                    pointer = pointer + noFlip;
                    pointer -=1;
                    cout << endl;
                    noFlip = 0;   
                } else {
                    flip_count = -1;
                }
            }
        }
        cout << flip_count << endl;
    }
};

int
main(int argc, char** argcv){
    
    vector <int> A{0,0,0,1,0,1,1,0};
    int K = 3;
    Solution obj;
    obj.minKBitFlips(A, K);
    return 0; 
}