int Solution::isPower(int A) {
    if(A==1){
        return 1;
    }
    int p = 2;
    for(int i=2; i <= sqrt(A); i++){
        p = log(A)/log(i);
        if(pow(i,p)==A){
            return 1;
        }
    }
    return 0;
}
