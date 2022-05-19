#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int n;
    string s;
    cin >> n >> s;

    vector v(n, 0);
    for (int& x : v) cin >> x;

    stack<double> st;

    for (char c : s) {
        if (isupper(c)) {
            st.push(v[c - 'A']);
        } else {
            auto const x = st.top();
            st.pop();
            auto const y = st.top();
            st.pop();

            if (c == '+') {
                st.push(y + x);
            } else if (c == '-') {
                st.push(y - x);
            } else if (c == '*') {
                st.push(y * x);
            } else if (c == '/') {
                st.push(y / x);
            }
        }
    }

    cout.precision(2);
    cout << fixed << st.top() << '\n';
    return 0;
}