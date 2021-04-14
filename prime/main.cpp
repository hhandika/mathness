#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int len = 100;
    vector<int> prime;
    for (int i = 1; i < len; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            prime.push_back(i);
        }
    }

    for (auto &i : prime)
    {
        cout << prime[i] << endl;
    }
}
