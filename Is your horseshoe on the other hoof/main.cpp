#include <iostream>

using namespace std;

int main()
{
    int s[4];int c=0,z=-1;
    for(int i=0;i<4;i++)
        cin >> s[i];
    for(int i=0;i<4;i++)
        for(int j=i+1;j<4;j++)
           if(s[i]==s[j])
           {
              c++;s[j]=z--;
           }

    cout << c << endl;
    return 0;
}
