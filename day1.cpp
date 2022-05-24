int Solution::solve(vector<int> &A) {
    map<int,int> umap;
    for (auto i : A){
        umap[i]++;
    }
    for (auto i: A){
        if(umap[i] > 1){
            return i;
        }
    }
    return -1;
}
