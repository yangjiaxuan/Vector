//
//  ViewController.m
//  Vector
//
//  Created by 杨森 on 2017/12/29.
//  Copyright © 2017年 杨森. All rights reserved.
//

#import "ViewController.h"
#import "VectorTest.hpp"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    VectorTest vector = VectorTest();
    vector.text_01();
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
