#ifndef TEST_H
#define TEST_H

#include "helper.hpp"

class MyType
{

public:
    int pub_num;
    MyType() {}
    ~MyType() {}
    virtual int foo();
    int getAge() {return 5; }
    void setAge(int age) {}
    
protected:
int pro_num;
    void pro_mtd();
    
private:
    int pri_num;
    void pri_mtd();
};

//----------------------------

class Test
{

public:
    Test() {}
    virtual void bar() = 0;
    //std::string* toString() {return new std::string("***METHDO STUB***"); }
    int toInt(int i) {return 3; }
    virtual ~Test() {}
    int publicNum;
    MyType myObj;
    
private:
    int num;
    float fpNum;
    double dblNum;
    //std::string str;

};

#endif /* TEST_H */
