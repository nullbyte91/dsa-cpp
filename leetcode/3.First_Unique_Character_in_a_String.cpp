#include <bits/stdc++.h>
#include <string>

using namespace std;

int 
firstUnique(string s){
    unordered_map<char, int> umap;
    uint32_t count;

    for (auto it=s.begin(); it <s.end(); ++it){
        umap[*it]++;
    }
    int index = 0;
    for (auto it=s.begin(); it <s.end(); ++it){
        printf("%c ", *it);
        unordered_map<char, int>::iterator umap_it = umap.find(*it);
        if (umap_it->second == 1){
            return index;
        }
        index +=1;
    }
}

int
main(int argc, char** argcv){
    string s = "loveleetcode";
    int index = firstUnique(s);
    printf("%d", index);
    return 0;
}