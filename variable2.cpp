#include <iostream>

int main(){
    int a = 10;
    int b = 5;
    int c = 2;

    int x = a + b + c;
    int y = a + b * c;
    int z = (a + b) * c;

    int p = 7/2;
    float q = 7.0 / 2.0;

    std::cout << "nilai dari x adalah " << x << std::endl;
    std::cout << "nilai dari y adalah " << y << std::endl;
    std::cout << "nilai dari z adalah " << z << std::endl;
    std::cout << "nilai dari p adalah " << p << std::endl;
    std::cout << "nilai dari q adalah " << q << std::endl;

    return 0;
}