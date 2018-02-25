//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main() {
//    string currStr, preStr;
//    bool flag = 0;
//    while (cin >> currStr) {
//        if (currStr[0] < 65 || currStr[0] > 90) {
//            preStr = currStr;
//            continue;
//        }
//        if (currStr == preStr) {
//            flag = 1;
//            break;
//        }
//        preStr = currStr;
//    }
//    if (flag)
//        cout << currStr << endl;
//    else
//        cout << "û���κε����������ظ����ֵ�" << endl;
//    return 0;
//}

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string currStr, preStr;
    bool flag = 0;
    while (cin >> currStr) {
        if (isupper(currStr[0]) && currStr == preStr) {
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