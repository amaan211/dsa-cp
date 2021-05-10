int Solution::singleNumber(const vector<int> &A) {
    int xorr = 0;
    for(auto it : A){
        xorr = xorr ^ it;
    }
    
    return xorr;
}
