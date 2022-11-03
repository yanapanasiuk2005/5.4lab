#include <iostream>
#include <cmath>
using namespace std;
double S0(const int N)
{
    double s = 0;
    for (int i = 1; i <= N; i++)
        s += sin(1. * i) / (1 + cos(1. * i));
    return s;
}
double S1(const int N, const int i)
{
    if (i > N)
        return 0;
    else
        return sin(1. * i) / (1 + cos(1. * i)) + S1(N, i + 1);
}
double S2(const int N, const int i)
{
    if (i < 1)
        return 0;
    else
        return sin(1. * i) / (1 + cos(1. * i)) + S2(N, i - 1);
}
double S3(const int N, const int i, double t)
{
    t = t + sin(1. * i) / (1 + cos(1. * i));
    if (i >= N)
        return t;
    else
        return S3(N, i + 1, t);
}
double S4(const int N, const int i, double t)
{
    t = t + sin(1. * i) / (1 + cos(1. * i));
    if (i <= 1)
        return t;
    else
        return S4(N, i - 1, t);
}
int main()
{
    int N;
    cout << "N = "; cin >> N;
    cout << "(iter) S0 = " << S0(N) << endl;
    cout << "(rec up ++) S1 = " << S1(N, 1) << endl;
    cout << "(rec up --) S2 = " << S2(N, N) << endl;
    cout << "(rec down ++) S3 = " << S3(N, 1, 0) << endl;
    cout << "(rec down --) S4 = " << S4(N, N, 0) << endl;
    return 0;
}
