#include <bits/stdc++.h>
using namespace std;
class rifat
{
private:
    int n;
    int igm;

public:
    rifat(int n, int igm)
    {
        this->n = n;
        this->igm = igm;
    }
    void operator+()
    {
        int val = n - igm;
        cout << val << endl;
    }
};
int main()
{
    rifat boj(1, 22);
    boj.operator+();

    return 0;
}