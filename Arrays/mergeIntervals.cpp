#include<bits/stdc++.h>
using namespace std;

bool mycompare(vector<int> v1, vector<int> v2)
{
    return (v1[0]<v2[0]);
}

vector< vector<int> > mergeInterval(vector< vector<int> >& intervals)
{
    sort(intervals.begin(), intervals.end(), mycompare);
    vector< vector<int> > ans;
    for(int i=0; i<intervals.size(); i++)
    {
        vector<int> a;
        if(ans.size()==0 || intervals[i][0]>ans[ans.size()-1][1]) // don't merge, just push_back
        {
            a.push_back(intervals[i][0]);
            a.push_back(intervals[i][1]);
        }
        else // merge with the previous ans and update the ans vector
        {
            a.push_back(min(intervals[i][0],ans[ans.size()-1][0]));
            a.push_back(max(intervals[i][1],ans[ans.size()-1][1]));
            ans.pop_back();
        }
        ans.push_back(a);
    }
    return ans;
}


int main(void)
{
    vector< vector<int> > intervals = {
                                    {1,4},
                                    {0,2},
                                    {3,5}
                                    };
    
    vector< vector<int> > a = mergeInterval(intervals);
    for(int i=0; i<a.size(); i++)
    {
        for(int j=0; j<2; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}