#include <iostream>

extern int next_match_count(int vals[], int length);

int main(){

int vals[]={1,2,2,2,3,1,1,5,6,2};
int vals_length=10;

int res=next_match_count(vals,vals_length);
std::cout<< res<<std::endl;
}