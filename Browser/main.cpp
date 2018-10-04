#include <iostream>

using namespace std;

int main()
{
    int n,k,l,r;
    cin>>n>>k>>l>>r;
    int c=0;
    if(k<l)
    {
        c+=l-k;
        k=l;
    }
    if(k>r)
    {
       c+=k-r;
       k=r;
    }
    if(l>1)
        {
            c++;
            c+=k-l;
            k=l;
        }
    if(r<n)
        {
            c++;
            c+=r-k;
        }
    cout << c << endl;
    return 0;
}
