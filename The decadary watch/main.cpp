#include <iostream>

using namespace std;

int main()
{
    for(long long i=1,j=1; ; i++)
    {
        if(i%2==0||i%3==0||i%5==0)
            j++;
        if(j==1500)
        {
            cout <<i<<endl;
            return 0;
        }
    }
    return 0;
}
