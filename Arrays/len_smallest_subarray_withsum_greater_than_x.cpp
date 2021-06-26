nt sb(int arr[], int n, int x)
{
// Your code goes here
int sum=0;
int len=INT_MAX;
int low=0;
for(int i=0;i<n;i++) {="" sum="sum+arr[i];" while(sum="">x && low<=i)
{
sum=sum-arr[low];
len=min(len,i-low+1);
low++;
}
}
return len;

}