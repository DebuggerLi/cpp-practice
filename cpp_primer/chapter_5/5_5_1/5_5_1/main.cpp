#include <iostream>
#include <string>

using namespace std;

int main() {
    string currStr, preStr;
    bool flag = 0;
    while (cin >> currStr) {
        if (currStr == preStr) {
            flag = 1;
            break;
        }
        preStr = currStr;
    }
    if (flag)
        cout << currStr << endl;
    else
        cout << "û���κε����������ظ����ֵ�" << endl;
    return 0;
}