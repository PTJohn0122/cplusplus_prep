//
// Created by 郝行健 on 9/18/24.
// pass by value vs pass by reference vs pass by pointer
#include <iostream>
using namespace std;

void testfunc(int a, int *b, int &c){
    //        value  pointer  reference
    // pass by reference is safer than pass by pointer
    a += 1;
    (*b) += 1;
    c += 1;
    printf("a= %d, b= %d, c= %d\n",a,*b,c);
}

int main(){
    int i = 1;
    int a = 1;
    int *j = &a;
    int k = 1;
    testfunc(i, j, k);
    printf("i= %d, j= %d, k= %d\n",i,*j,k);
    return 0;
}
