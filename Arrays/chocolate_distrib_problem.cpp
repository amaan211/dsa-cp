class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
        sort(a.begin(), a.end());
        typedef long long ll;
        ll i = 0;
        ll j = m-1;
        ll mindiff = INT_MAX;
        while(j<n)
        {
            mindiff = min(mindiff,a[j] - a[i]);
            i++;
            j++;
        }
        
        return mindiff;
    }   
};