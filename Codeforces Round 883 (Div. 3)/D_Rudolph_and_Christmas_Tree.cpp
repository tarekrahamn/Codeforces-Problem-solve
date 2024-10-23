#include <iostream>
#include <iomanip>
#include <vector>

void notouchgrass() {
    int n;
    long double d, h;
    std::cin >> n >> d >> h;

    std::vector<long double> a(n + 10);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    std::vector<long double> v(n + 10);
    for (int i = 0; i < n; i++) {
        if (i < n - 1 && a[i + 1] > a[i] + h) {
            double b = d * (a[i + 1] - a[i]) + (d / h);
            v[i] = (b * (a[i + 1] - a[i])) / 2;
        }
        else {
            v[i] = (d * h) / 2;
        }
    }

    long double s = 0;
    for (int i = 0; i < n; i++) {
        s += v[i];
        std::cout << std::fixed << std::setprecision(6) << s << '\n';
    }
}

int main() {
    notouchgrass();
    return 0;
}
