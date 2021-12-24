#include <iostream>
#include <vector>

using namespace std;
vector <int> get(int n) {
    vector<int > a;
    int temp;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        a.push_back(temp);
    }
    return a;
}
int xOr(vector<int>a, int r) {
    int sum = 0;
    for (int j = 0; j < r; j++) {
        sum += a[j] ^ (r - j - 1);
    }
    return sum;
}

int main() {

    int n, q;
    cin >> n >> q;

    vector<int>a = get(n);
    vector<int> r = get(q);
    vector<int > result;
    for (int i = 0; i < q; i++) {
        result.push_back(xOr(a, r[i]));
    }
    for (int i = 0; i < q; i++)
        cout << result.at(i) << endl;
}