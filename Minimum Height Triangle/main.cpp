#include <bits/stdc++.h>

using namespace std;

int lowestTriangle(int base, int area){



    return ceil((float)(area*2.0)/base);


}

int main() {
    int base;
    int area;
    cin >> base >> area;
    int height = lowestTriangle(base, area);
    cout << height << endl;
    return 0;
}
