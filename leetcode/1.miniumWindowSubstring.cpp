#include <iostream>
#include <bits/stdc++.h>
#include <cstdio>
#include <string>

using namespace std;

class Solution{
    public:
        void
        StringMinWindow(string S, string T){
            
            string gMaxV = S;
            if (S.length() < T.length()){
                gMaxV = "";
                return;
            }
            int missing = T.length();
            int gMax = INT_MAX;

            int cMax = INT_MAX;
            string CMaxV = "";

            unordered_map <char, int> umap;

            for (int i=0; i<T.length(); i++){
                umap[T[i]] = 0;
            }

            for (int fp=0, sp=0; fp<S.length(); fp++){
                char fp_key = S[fp];
                cout << "fp:" << fp_key << endl;
                if (umap.find(fp_key) != umap.end()){
                    //cout << "umap[fp_key]:" << umap[fp_key] << endl;
                    if (umap[fp_key] == 0 ){
                        missing -= 1;
                    }
                    umap[fp_key]++;
                }

                while (missing == 0){
                    cout << "Hitting the missing\n";
                    CMaxV = S.substr(sp, fp-sp+1);
                    if (CMaxV.length() <= gMaxV.length()){
                        gMaxV = CMaxV;
                    }
                    char sp_key = S[sp];
                    cout << "sp:" << sp_key << endl;
                    if (umap.find(sp_key) != umap.end()){
                        //cout << "umap[fp_key]:" << umap[sp_key] << endl;
                        if (umap[sp_key] == 1){
                            missing += 1;
                            //cout << "umap[fp_key]:" << umap[sp_key] << endl;
                        }
                        umap[sp_key]--;
                    }
                    sp++;
                }   
            }
            cout << "Min:" << gMaxV << endl; 
        }   
};

int
main(int argc, char** argcv)
{
    string S = "aa";
    string T = "a";
    Solution obj;
    obj.StringMinWindow(S, T);
    return 0;
}