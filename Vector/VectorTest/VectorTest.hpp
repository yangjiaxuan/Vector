//
//  VectorTest.hpp
//  Vector
//
//  Created by 杨森 on 2017/12/29.
//  Copyright © 2017年 杨森. All rights reserved.
//

#ifndef VectorTest_hpp
#define VectorTest_hpp

#include <stdio.h>

class Student {
    
public:
    int age;
    const char *name;
    
public:
    Student();
    Student(int age, const char *name);
    ~Student();
    
    void description();
};

class VectorTest {
    
public:
    VectorTest();
    ~VectorTest();
    
public:
    void text_01();
    
};

#endif /* VectorTest_hpp */
