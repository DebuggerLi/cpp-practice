//#include <iostream>
//
//using namespace std;
//
//int fact(int val) {
//    static int ctr = 0;
//    cout << "fact�����Ѿ������� " << ++ctr << " ��" << endl;
//    int ret = 1;
//    while (val > 1)
//        ret *= val--;
//    return ret;
//}
//
//int main() {
//    int i;
//    while (cin >> i)
//        cout << i << "! = " << fact(i) << endl;
//    return 0;
//}

#include <iostream>

using namespace std;

double square(double val) {
    static size_t ctr = 0;
    cout << "square�����Ѿ������� " << ctr++ << " ��" << endl;
    return val * val;
}

int main() {
    double i;
    while (cin >> i)
        cout << "sqr(" << i << ") = " << square(i) << endl;
    return 0;
}