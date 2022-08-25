#include <iostream>



void print_ascending(int *vals, int len){

std::cout<< vals[0]<< " ";
for( int i = 0; i < len; i++){
if (vals[i+1]>= vals[i]){
    std::cout<<vals[i+1]<< " ";
}else 
break;



}
std::cout<<std::endl;


}
