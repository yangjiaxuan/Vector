//
//  VectorTest.cpp
//  Vector
//
//  Created by 杨森 on 2017/12/29.
//  Copyright © 2017年 杨森. All rights reserved.
//

#include <iostream>
#include "VectorTest.hpp"
/* 容器头文件 */
#include "vector"
/* 算法 */
#include "algorithm"


void Student::description(){
    std::cout << "age:" << age << std::endl;
    std::cout << "name:" << name << std::endl;
}

VectorTest::VectorTest(){

}
VectorTest::~VectorTest(){

}

void VectorTest::text_01(){
    Student s_1, s_2, s_3;
    s_1.age = 11;
    s_2.age = 12;
    s_3.age = 13;
    
    std::vector <Student> v1;
    v1.push_back(s_1);
    v1.push_back(s_2);
    v1.push_back(s_3);
    
    for (std::vector<Student>::iterator item = v1.begin(); item != v1.end(); item++) {
        item->description();
    }
}
