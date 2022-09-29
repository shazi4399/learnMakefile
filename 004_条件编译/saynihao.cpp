//
// Created by zhanghao on 22-9-28.
//
#include "saynihao.h"
#include <iostream>

void saynihao(){
#ifdef HELLO
    std::cout<<"你好！HELLO"<<std::endl;
#else
    std::cout<<"你好！"<<std::endl;
#endif
}