#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int main() {
    int n, x, e;

    cin >> n >> x;

    vector<int> arr(n);
    vector<int> rs;

    for (size_t i = 0; i < n; i++) {
        cin >> e;
        arr[i] = e;
    }

    for (int ele : arr) {
        if (ele < x) {
            rs.push_back(ele);
        }
    }

    ostringstream out;
    for (size_t i = 0; i < rs.size(); i++) {
        out << rs[i];
        if (i != rs.size() - 1) {
            out << " ";
        }
    }

    cout << out.str();

    return 0;
}
