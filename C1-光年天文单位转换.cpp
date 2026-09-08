#include <iostream>
using std::cout;using std::cin;using std::endl;
double lightyear(double);
int main(){
    cout<<"请输入光年值：" << endl;
    double guangnian;
    cin >> guangnian;
    cout << guangnian << "光年等于" << lightyear(guangnian) << "天文单位" << endl;
    return 0;
}
double lightyear(double guangnian){
    return guangnian * 63241.0;
}