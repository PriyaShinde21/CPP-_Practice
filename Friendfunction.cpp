#include<iostream>
using namespace std;
class Box{
int length;
public:
Box(int L){
length=L;
}
friend void showLength(Box b);
};
void showLength(Box b){
cout<<"Length of Box = "<<b.length<<endl;
}
int main(){
   Box b1(10);
   showLength(b1);
   return 0;
}
