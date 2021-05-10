#define MOD 1000000007ll
int Solution::cntBits(vector<int> &A) {
    int times = 0;
    long on = 0;
    long off = 0;
    int final_count = 0;
    while(times<32){
        off = 0;
        on = 0;
        for(auto it : A){
            int this_bit = it & (1<<times);
            if(this_bit == 0){
                off++;
            }
            else{
                on++;
            }
            
        }
        final_count += (2*off*on) % MOD;
        if(final_count >= MOD) final_count -= MOD;
        times++;
        
    }
    
    return final_count;
}
