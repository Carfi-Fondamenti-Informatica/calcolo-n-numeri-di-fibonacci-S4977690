#include <iostream>
using namespace std;

int main() {
    int n=0, i=0, p=i, s=1, r=0;
    cin >> n;
    if (n>=2) {
        cout << 1 << endl;
        for (int i = 2; i <= n; i++) {
            r = p + s;
            p = s;
            s = r;
            cout << r << endl;
        }
    }else {
            cout << "errore" << endl;
    }
    return 0;
}
