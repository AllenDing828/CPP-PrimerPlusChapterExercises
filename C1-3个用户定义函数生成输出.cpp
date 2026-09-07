#include <iostream>
using std::cout;using std::endl;
void print_mice(void){
cout<<"Three blind mice"<<endl;
}
void print_run(void){
    cout<<"See how they run"<<endl;
}
int main(){
    print_mice;
    print_mice;
    print_run;
    print_run;
    return 0;
}