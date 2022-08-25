#include <iostream>

extern void print_ascending(int *vals, int len);

int main(){
int vals[] = {1,2,3,3,5,8,3,2,1};
print_ascending(vals, 9);

}
