cmake_minimum_required(VERSION 3.28)
project(c_clion C)

set(CMAKE_C_STANDARD 99)

add_executable(c_clion main.c
        lyh/803/进阶-数据存储day01-803.c
        lyh/803/进阶-指针day02-803.c
        lyh/804/进阶-指针day03-804.c
        "lyh/805/进阶-回调函数(冒泡排序)day04-805.c"
        lyh/808/复习.c
        lyh/809/练习题day06-809.c
        lyh/809/进阶-字符函数and字符串函数day06-809.c
        lyh/810/进阶-内存函数day07-810.c
        lyh/811/进阶-自定义类型day08-811.c
        lyh/811/进阶-结构体内存对齐与修改默认对齐数day08-811.c
        lyh/811/进阶-位段day08-811.c
        lyh/811/进阶-枚举day08-811.c
        lyh/812/动态内存开辟.c
)