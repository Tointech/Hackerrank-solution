#include <iostream>
#include <cstdio>

using namespace std;

int main() 
{
    int a,b,i;
    string c[9] = {"one","two","three","four","five","six","seven","eight","nine"};
    
    cin >> a >> b;
    // cin >> a;
    // cin >> b;
    
    for(i=a; i<=b; i++)
    {
        cout << ((i <= 9) ? c[i-1] : ((i % 2 == 0) ? "even" : "odd")) << endl;
        // if(i <= 9)
        // {
        //     cout << c[i-1] << "\n";
        // }
        // else if(i % 2 == 0)
        // {
        //     cout << "even" << "\n";
        // }
        // else
        // {
        //     cout << "odd" << "\n";
        // }
    }

    return 0;
}