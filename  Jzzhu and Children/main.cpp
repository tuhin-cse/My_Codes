#include <iostream>
#include <list>
using namespace std;
int main()
{
    list <int> l;
    int in[105];
    int n,a,temp;
    cin >> n >> a;
    for(int i=1;i<=n;i++)
    {
        cin >> temp;
        l.push_back(temp);
        in[temp]=i;
    }
    while(true)
    {
        if(l.size()==1)
        {
            cout << in[l.front()] << endl;
            return 0;
        }
        if(l.front()<=a)
            l.pop_front();
        else
        {
            int z=l.front();
            l.pop_front();
            int pos=in[z];
            z-=a;
            in[z]=pos;
            l.push_back(z);
        }
    }
    return 0;
}
