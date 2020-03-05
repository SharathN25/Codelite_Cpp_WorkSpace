#include <iostream>


class test
{
    int i;
    static int j;
};

int main(void)
{
    std::cout<<sizeof(test)<<std::endl;
}