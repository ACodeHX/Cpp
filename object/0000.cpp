#include <iostream>
using namespace std;

class Beasie {    //����Beasie��
public:    //���г�Ա
    string cat;
    string Dog;
    string beashie;

    int lion;

    //��Ա��������
    string get(void);
    string getDog(void);
    int getlion(void);

private:    /*˽�г�Ա,˽�г�Ա�����ͺ���������ⲿ�ǲ����Է��ʵ�,�������ɲ鿴*/
    int Lion;    /*ֻ�������Ԫ�����ſ��Է���˽�г�Ա*/

protected:    /*������Ա,������˽�г�Ա����,����һ�㲻ͬ,protected���ܱ�������Ա�������ࣨ�����ࣩ���ǿɷ��ʵ�*/
    int tiger;
};

class Beast :public Beasie {    //Beast��Beasie������
public:
    void setBeast(int tig);
    int getBeast(void);
};

string Beasie::get(void) {    //��Ա�����Ķ���
    return cat = "cat";
}

string Beasie::getDog(void) {
    return Dog = "Dog";
}

int Beasie::getlion(void) {
    lion = 1;
    return lion;
}

void Beast::setBeast(int tig) {    //����ĳ�Ա����
    tiger = tig;
}

int Beast::getBeast() {    //����ĳ�Ա����
    tiger = 0;
    return tiger;
}

int main()    //�����������
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