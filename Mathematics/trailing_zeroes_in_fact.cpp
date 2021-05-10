int Solution::trailingZeroes(int A) {
    int ans = 0;
    int i=1;
    int next_term = 0;
    do{
        next_term = A/pow(5,i);
        ans += next_term;
        i++;
    }while(next_term!=0);
    return ans;
}
