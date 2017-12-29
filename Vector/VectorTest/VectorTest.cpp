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


Student::Student(){
    this->age  = 0;
    this->name = NULL;
}
Student::Student(int age, const char *name){
    this->age  = age;
    this->name = name;
}
Student::~Student(){
    std::cout << "=== Student 被释放了: ===" << std::endl;
    std::cout << "age:" << age << std::endl;
    if (this->name != NULL) {
        std::cout << "name:" << name << std::endl;
    }
    std::cout << "===      ======     ===" << std::endl;
    std::cout << "\r\n" << std::endl;
}
void Student::description(){
    std::cout << "age:" << age << std::endl;
    if (name != NULL) {
        std::cout << "name:" << name << std::endl;
    }
}


VectorTest::VectorTest(){

}
VectorTest::~VectorTest(){

}

void VectorTest::text_01(){

    Student s_1, s_2, s_3;
    /* 构造函数返回对象为深copy对象 之前的对象被释放 */
    s_1 = Student(11, "name_01");
    s_2 = Student(12, "name_02");
    s_3 = Student(13, "name_03");
    
    /*
       s_1 深copy作为形参入栈 s_1`，
       s_1` 深copy s_1`` -> v1,
       函数返回 形参s_1`出栈 被释放
     */
    std::vector <Student> v1;
    v1.push_back(s_1);
    v1.push_back(s_2);
    v1.push_back(s_3);
    
    for (std::vector<Student>::iterator item = v1.begin(); item != v1.end(); item++) {
        item->description();
    }
    /* 计算v1中有几个s_1 */
    /*
    long count = std::count(v1.begin(), v1.end(), s_1);
    std::cout << "s_1 count:" << count << std::endl;
     */
    
    Student *s_11, *s_22, *s_33;
    s_11 = &s_1;
    s_22 = &s_2;
    s_33 = &s_3;
    /* 构造函数 返回为参数的深copy对象，之前对象被释放 */
    s_1 = Student(110, "name_011");
    s_2 = Student(120, "name_022");
    s_3 = Student(130, "name_033");
    
    std::vector<Student *> v2;
    v2.push_back(s_11);
    v2.push_back(s_22);
    v2.push_back(s_33);
    
    for (std::vector<Student *>::iterator item = v2.begin(); item != v2.end(); item++) {
        (*item)->description();
    }
    
    // 增
    v2.push_back(s_11); /* 追加 */
    v2.insert(v2.begin()+2, s_11); /* 把s_11插入下标为 2 处 */
    v2.insert(v2.begin(), v2.begin()+1, v2.begin()+3); /* 把下标为1 到 3 之间的元素插在 标为 0 元素之前 */
    
    // 删
    v2.erase(v2.begin()); /* 删除下标为 0 的元素 */
    v2.erase(v2.begin(), v2.begin()+2); /* 删除下标0 到 2之间的元素 */
    
    // 查
    Student *s_111 = v2[1]; /* 下表为 1 的元素 */
    (*s_111).description();
    s_111->description();
    
    // 元素个数
    long count = v2.size();
    std::cout << "count:" << count << std::endl;
    
    // 交换 (两个向量容器[v2,v3]的元素)
    //v2.swap(v3);
    
    // 清空
    v2.clear();
    
    
    
}
