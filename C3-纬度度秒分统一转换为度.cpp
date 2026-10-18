#include <iostream>
using std::cout;using std::cin;using std::endl;
const int zhuanhuan = 60;
double jisuan(double x,double y,double z);
int main(){
    double Du,Fen,Miao;
    cout << "请输入纬度（度）:" << endl;
    cin >> Du;
    cout <<"请输入纬度（分）:" << endl;
    cin >> Fen;
    cout << "请输入纬度（秒）:" << endl;
    cin >> Miao;
    cout << Du << "度" << Fen << "分" << Miao <<"秒等于" 
    << jisuan(Du,Fen,Miao) << 
    "度"  << endl;
    return 0;
    
} 
double jisuan(double x,double y,double z){
    double jieguo;
    jieguo = x+y/zhuanhuan+z/(zhuanhuan*zhuanhuan);
    return jieguo;

}
