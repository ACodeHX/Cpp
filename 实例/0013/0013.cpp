// Note:Your choice is C++ IDE
#include <iostream>
using namespace std;

void hello_world(void)    //��ϰ����
{
    printf("Hello, world!\n");
}
void three_hellos(void)
{
    int counter;
    for (counter = 1; counter <= 3; counter++)
        hello_world();/*���ô˺���*/
}
int main(void)
{
    three_hellos();/*���ô˺���*/
}