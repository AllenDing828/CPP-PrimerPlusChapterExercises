#include <iostream>
int main(){
    using std::cout;using std::endl;using std::cin;
    cout << "请输入长度" << endl;
    int Long;
    cin >> Long;
    int Ma;
    Ma = Long * 220;
    cout << Long << "的长度等于" << Ma << "码" << endl;
    return 0;
}