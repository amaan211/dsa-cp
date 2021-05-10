int Solution::divide(int A, int B) {
    
    // edge cases 
    
    
    if( B == 0 ) return INT_MAX; // divide by zero
    if( B == 1 ) return A;
    if( B == -1 ) return ( A == INT_MIN ) ? INT_MAX : -A;
    if( A == B ) return 1;
    if( B == INT_MIN ) return 0;
    

    
    int sign=((A<0)^(B<0)) ? -1:1;
    long res=0;
    int a=abs(A);
    int b=abs(B);
    while(a-b>=0){
        int x=0;
        while((a-(b<<1<<x))>=0){
            x++;
        }
        res+=1<<x;
        a-=b<<x;
    }
    return sign*res;
}