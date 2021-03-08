#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> A={1,2,3,4};

    sort(A.begin(),A.end());
    int mi=10000;
    for(int i=0; i<A.size()-1; i++)
    {
        int t = A[i]^A[i+1];
        mi=min(mi,t);
    }
    cout<<mi<<endl;
}