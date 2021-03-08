// count number of set bits from 1 to N;
// in o(logn) time
#include<bits/stdc++.h>
using namespace std;

int findx(int n)
{
    int x=0;
    while((1<<x)<=n)
    {
        x++;
    }
    return x-1;
}

int countSetBits(int n)
{
    if(n<=0) // base condition
    {
        return 0;
    }
    int x=findx(n);
    int p1=(1<<(x-1))*x;
    int p2=n-(1<<x)+1;
    int p3=countSetBits(n-(1<<x));
    int ans=p1+p2+p3;
    return ans;
    
}



int main()
{
	 
	 
	int n;
	cin>>n; //input n
	       
	cout << countSetBits(n) << endl;// print the answer
	
	return 0;
}