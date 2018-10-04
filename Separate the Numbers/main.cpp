#include <bits/stdc++.h>

using namespace std;

int length(int x)
{
    return log10(x)+1;
}

// Complete the separateNumbers function below.
void separateNumbers(string s) {
   int n = s.size()/2;
   int x = -1;
   for(int i=1;i<=n;i++)
   {
       string tp= s.substr(0,i);
       int z=stoi(tp);
       cout << z << " ";
       x=z;
       z++;
       for(int j=i;j<s.size(); )
       {
           tp = s.substr(j,j+length(z));
           cout << tp  << " ";
           if(z==stoi(tp))
           {
               j+=length(z);
               if(j==s.size())
               {
                   cout << "YES " <<x << endl;
                   return;
               }
               z++;
           }
           else
           {
               x=-1;
                break;
           }
       }
       cout << endl;
   }
    if(x==-1)
        cout << "NO" << endl;

}

int main()
{
    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        separateNumbers(s);
    }

    return 0;
}
