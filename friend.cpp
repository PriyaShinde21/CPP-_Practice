#include<iostream>
using namespace std;
class box{
int length;
public:
box(int l){
 length=l;
}
friend void showlength(box b);
};
void showlength(box b){
cout<<"length o box="<<b.length<<endl;
}
int main(){
box b1(10);
showlength(b1);
return 0;
}
