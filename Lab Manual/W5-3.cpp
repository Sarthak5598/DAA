#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a = {3, 5, 7, 9};
    vector<int> b = {2, 3, 4, 5, 6};
    vector<int> c;
    int i = 0;
    int j = 0;
    while (i < a.size() && j < b.size())
    {
        if (a[i] < b[j])
            i++;
        else if (a[i] > b[j])
            j++;
        else if (a[i] == b[j])
        {
            c.push_back(a[i]);
            i++;
            j++;
        }
    }
    for (int i = 0; i < c.size(); i++)
        cout << c[i] << " ";
    return 0;
}