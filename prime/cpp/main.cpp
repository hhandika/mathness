#include <iostream>
#include <vector>

using namespace std;

vector<int> prime_number(int n);

template <typename T>
void print_vector(vector<T> vec) {
    for(auto &i : vec) {
        cout << i << " " ;
    }

    cout << endl;
}

int main()
{
    int len = 10;
    vector<int> prime = prime_number(len);

    print_vector<int>(prime);    
}

vector<int> prime_number(int n)
{
    vector<int> prime;
    for (int i = 0; i < n; i++)
    {
        if (i == 0 || i == 1) {
            continue;
        }
        
        if (i % 3 == 0 || i % 5 == 0)
        {
            prime.push_back(i);
        }
    }
    return prime;
}
