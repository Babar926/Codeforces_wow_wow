#include<iostream>
using namespace std;

int main(){
int array[10]={4,3,4,2,6,7,8,9,0,1};
int even_number=0;
int odd_number=0;
for(int i=0;i<10;i++){
    if(array[i]%2==0){
    even_number++;
    }else{
odd_number++;
}
}
cout<<"the count of even : "<<even_number<<endl;
cout<<"the count of odd: "<<odd_number<<endl;
return 0;
}
