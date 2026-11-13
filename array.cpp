
#include <iostream>
using namespace std;

void sum(int a[], int n, int &s) {
    s = 0;
    for(int i = 0; i < n; i++) {
        s += a[i];
    }
}

void multiplication(int a[], int n, int &mp) {
    mp = 1;
    for(int i = 0; i < n; i++) {
        mp *= a[i];
    }
}

void average(int s, int n, double &av) {
    av = static_cast<double>(s) / n;
}

void minimum(int a[], int n, int &mn) {
    mn = a[0];
    for(int i = 1; i < n; i++) {
        if(a[i] < mn) {
            mn = a[i];
        }
    }
}

void maximum(int a[], int n, int &mx) {
    mx = a[0];
    for(int i = 1; i < n; i++) {
        if(a[i] > mx) {
            mx = a[i];
        }
    }
}

void range(int mx, int mn, int &rg) {
    rg = mx - mn;
}

void print(int s, int mp, double av,
           int mn, int mx, int rg) {

    cout << endl;
    cout << "Sum: " << s << endl;
    cout << "Multiplication: " << mp << endl;
    cout << "Average: " << av << endl;
    cout << "Minimum: " << mn << endl;
    cout << "Maximum: " << mx << endl;
    cout << "Range: " << rg << endl;
    cout << endl;
}

int main() {
    const int size = 5;
    int num[size];

    int s, mp, mn, mx, rg;
    double av;

    cout << "Enter 5 numbers:" << endl;

    for(int i = 0; i < size; i++) {
        cout << "Number " << i + 1 << ": ";
        cin >> num[i];
    }

    sum(num, size, s);
    multiplication(num, size, mp);
    average(s, size, av);
    minimum(num, size, mn);
    maximum(num, size, mx);
    range(mx, mn, rg);

    print(s, mp, av, mn, mx, rg);

    return 0;
}

