//
// Created by zhanghao on 22-9-26.
//
#include <iostream>
#include "SoTest.h"

class MainTest : public SoTest{
public:
    void func2(){
        printf("main-func2\n");
    }

    void func3(){
        printf("main-func3\n");
    }
};

int main(){
    MainTest t1;
    t1.func1();
    t1.func2();
    t1.func3();

    return 0;
}
