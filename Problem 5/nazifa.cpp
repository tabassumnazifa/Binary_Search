#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,tar;
    cin>>n>>tar;
    vector<int>vec(n);
    for(int i=0; i<n; i++)
        cin>>vec[i];
    int left=0,right=n-1,res=-1;
    while(left<=right)
    {
        int mid=left+(right-left)/2;
        if(vec[mid]==tar)
        {
            res=mid;
            break;
        }
        if(vec[left]<=vec[mid])
        {
            if(vec[left]<=tar and vec[mid]>tar)
            {
                right=mid-1;
            }
            else
            {
                left=mid+1;
            }
        }
        if(vec[mid]<=vec[right])
        {
            if(vec[right]>=vec[mid] and vec[mid]<tar)
            {
                left=mid+1;
            }
            else
                right=mid-1;
        }
    }
    cout<<res<<endl;
}
