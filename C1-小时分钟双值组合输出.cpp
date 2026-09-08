#include <iostream>
using std::cout;using std::cin;using std::endl;
void ZuHeShuChu(int hours,int minutes,int seconds);
int main(){
    int hours, minutes, seconds;
    cout<<"请输入小时数：";cin>>hours;
    cout<<"请输入分钟数：";cin>>minutes;
    cout<<"请输入秒数：";cin>>seconds;
    ZuHeShuChu(hours,minutes,seconds);
return 0;
}
void ZuHeShuChu(int hours,int minutes,int seconds){
    cout<<"当前时间为："<<hours<<"点"
    <<minutes<<"分"<<seconds<<"秒"<<endl;
}   