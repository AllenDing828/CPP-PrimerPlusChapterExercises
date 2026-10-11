#include <iostream>
using std::cout;using std::endl;using std::cin;
int main(){
    int height;
    cout<<"请输入身高(英寸):_________\b\b\b\b\b\b\b\b";
    cin>>height;
    const double zhuanhuan = 12;
   int inch = height/zhuanhuan;
   int last = height -inch * 12;
    cout<<"您的身高为："<<inch<<"英尺"<<last<<"英寸"<<endl;
    return 0;

}