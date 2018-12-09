#include <iostream>
#include <vector>

using namespace std;
int main(int argc, char **argv)
{
    vector<int> V(5, 3);
    for (auto e : V)
            cout << e << endl;
    cout << "OK" << endl;
    return 0;
}