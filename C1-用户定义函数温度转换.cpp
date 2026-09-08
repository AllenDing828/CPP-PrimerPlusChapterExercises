 #include <iostream>
 using std::cout;using std::cin;using std::endl;
 int Huashi(int);
 int main(){
    int Sheshi;
    cout<<"请输入摄氏度数：";
    cin>>Sheshi;
    Huashi(Sheshi);
    cout<<Sheshi<<"摄氏度等于"<<Huashi(Sheshi)<<"华氏度"<<endl;
return 0;
 }
 int Huashi(int Sheshi){
    return (Sheshi*9/5)+32;
 }