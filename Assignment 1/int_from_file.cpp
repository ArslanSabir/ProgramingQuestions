#include <iostream>
#include <fstream>
int main(int argc, char * argv[])
{
    std::fstream myfile("10.txt", std::ios_base::in);

    float a;
    while (myfile >> a)
    {
        std::cout<<a;
    }

    getchar();

    return 0;
}



