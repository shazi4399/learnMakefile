//
// Created by zhanghao on 22-9-28.
//
#include "sayhello.h"
#include <iostream>

void sayhello(){
#ifdef HELLO
    std::cout<<"hello！HELLO"<<std::endl;
#else
    std::cout<<"hello！"<<std::endl;
#endif
}