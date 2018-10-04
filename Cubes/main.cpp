#include <iostream>

using namespace std;

int main()
{
    int a;
    while(cin >> a)
    {
        if(a==0)
            break;
        int f=0;
        for(int i=1;i<=100;i++)
        {
            for(int j=0;j<i;j++)
            {
                if((i*i*i)-(j*j*j)==a)
                {
                    cout<< i << " " << j << endl;
                    f=1;
                    break;
                }
            }
            if(f==1)
                break;
        }
        if(f==0)
            cout << "No solution" << endl;

    }
}
