#ifndef TEST_H
#define TEST_H

//#include <string>

class MyType
{

public:
    MyType() {}
    ~MyType() {}
    int getAge() {return 5; }
    void setAge(int age) {}
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
    //std::string str;

};

#endif /* TEST_H */
