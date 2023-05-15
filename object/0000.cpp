#include <iostream>
using namespace std;

class Beasie {    //建立Beasie类
public:    //公有成员
    string cat;
    string Dog;
    string beashie;

    int lion;

    //成员函数声明
    string get(void);
    string getDog(void);
    int getlion(void);

private:    /*私有成员,私有成员变量和函数在类的外部是不可以访问的,甚至不可查看*/
    int Lion;    /*只有类和友元函数才可以访问私有成员*/

protected:    /*保护成员,基本和私有成员相似,但有一点不同,protected（受保护）成员在派生类（即子类）中是可访问的*/
    int tiger;
};

class Beast :public Beasie {    //Beast是Beasie的子类
public:
    void setBeast(int tig);
    int getBeast(void);
};

string Beasie::get(void) {    //成员函数的定义
    return cat = "cat";
}

string Beasie::getDog(void) {
    return Dog = "Dog";
}

int Beasie::getlion(void) {
    lion = 1;
    return lion;
}

void Beast::setBeast(int tig) {    //子类的成员函数
    tiger = tig;
}

int Beast::getBeast() {    //子类的成员函数
    tiger = 0;
    return tiger;
}

int main()    //程序的主函数
{
    Beasie cat, dog, tiger;
    Beast beast;

    cout << cat.get() << endl;
    cout << dog.getDog() << endl;

    tiger.getlion();
    cout << tiger.getlion() << endl;

    beast.setBeast(10);
    cout << beast.getBeast() << endl;

    return 0;
}