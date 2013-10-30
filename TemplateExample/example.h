#pragma once

template<typename T1>
void test1(T1 arg1)
{
    arg1 = 222;
}

template<typename T1>
void test2(T1 arg1)
{
    arg1 = NULL;
}

template<typename T1>
void test3(const T1& arg1)
{

}

template<typename T1>
void test4(T1& arg1)
{

}
