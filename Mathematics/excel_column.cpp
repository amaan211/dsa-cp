int Solution::titleToNumber(string A) {
int n=A.length();
int c_no=0;
for(int i=n-1;i>=0;i--){
c_no+=((int)A[i]-64)*pow(26,n-i-1);
}
return c_no;
}