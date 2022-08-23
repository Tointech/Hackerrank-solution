#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string a[10] = {"Greater than 9","one","two","three","four","five","six","seven","eight","nine"};
    
    cin >> n;

    //cout << ((n > 9) ? a[0] : a[n]);
    if (n > 9) {
        cout << a[0];
    }
    else {
        cout << a[n];
    }

    return 0;
}