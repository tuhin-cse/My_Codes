#include <bits/stdc++.h>

using namespace std;

int binarySearch(vector<int> arr,int l,int u,int x)
{
    int mid;
    if(u>=l)
    {
        mid=l+(u-l)/2;
        if(arr[mid]==x && arr[mid-1]!=x)
            return mid;
        else if(x>arr[mid])
            return binarySearch(arr,mid+1,u,x);
        else
            return binarySearch(arr,l,mid-1,x);
    }
      return -1;
}

int main()
{
    string s;
    vector<int> v,ps,pe;
    stack<int> st,pos;
    int valid=0;
    cin >> s;
    for(int i=0;i<s.size();i++)
    {

        if(s[i]=='(')
        {
            st.push(s[i]);
            pos.push(i);
        }
        else if(!st.empty())
        {
            st.pop();
            ps.push_back(pos.top());
            pe.push_back(i);
            pos.pop();
            valid++;
        }
        v.push_back(valid);
    }
    int n,a,b;
    cin >> n;
    sort(ps.begin(),ps.end());
    while(n--)
    {
        cin >> a >> b ;
        valid=v[b-1]-v[a-1];
        if(binarySearch(ps,0,ps.size()-1,a-2) >=0 )
            valid--;
        cout << valid*2 << endl;
    }

}
