#include <iostream>
using std::cout;using std::cin;using std::endl;
void Hours(int);void Minutes(int);void Seconds(int);
int main(){
    int hours, minutes, seconds;
    cout<<"请输入小时数：";cin>>hours;
    cout<<"请输入分钟数：";cin>>minutes;
    cout<<"请输入秒数：";cin>>seconds;
    Hours(hours);
    Minutes(minutes);
    Seconds(seconds);
    cout<<"当前时间为"<<hours<<"点"<<minutes<<"分"<<seconds<<"秒"<<endl;
}
void Hours (int hours){
    cout << hours ;
}
void Minutes (int minutes){
    cout << minutes ;
}
void Seconds (int seconds){
    cout << seconds ;
}