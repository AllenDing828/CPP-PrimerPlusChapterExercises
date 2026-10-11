#include <iostream>
using std::cout;using std::endl;using std::cin;
int main(){
   int height_feet,height_inch,weight;
    double BMI;
    cout<<"请输入身高（英尺取整）：";
    cin>>height_feet;
    cout<<"请输入身高（英寸取整）：";
    cin>>height_inch;
    cout<<"请输入体重（磅取整）：";
    cin>>weight;
    int height_sum_inch = height_feet*12+height_inch;
    double height_sum_meter = height_sum_inch*0.0254;
    cout<<"您的身高为："<<height_sum_inch<<"英寸"<<endl;
    cout<<"即"<<height_sum_meter<<"米"<<endl;
    double weight_kg = weight/2.2;
    cout<<"您的体重为："<<weight<<"磅"<<endl;
    cout<<"即"<<weight_kg<<"千克"<<endl;
    BMI = weight_kg/(height_sum_meter*height_sum_meter);
    cout<<"经计算,您的BMI为:"<<BMI<<endl;
    if(BMI<18.5){
        cout<<"您的体重偏轻"<<endl;
    }else if(BMI>=18.5 && BMI<24){
        cout<<"您的体重正常"<<endl;
    }else if(BMI>=24 && BMI<28){
        cout<<"您的体重偏重"<<endl;
    }else{
        cout<<"您的体重肥胖"<<endl;
    }
    return 0;
}