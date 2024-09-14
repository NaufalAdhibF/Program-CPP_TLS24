#include <iostream> 
#include <cmath>    

int main() {
    double num1, num2, result;
    char op;

    std::cout << "Masukkan angka pertama: ";
    std::cin >> num1;
    std::cout << "Masukkan operasi (+, -, *, /, ^, r): "; 
    std::cin >> op;

    if (op == 'r') { 
        if (num1 >= 0) { 
            result = sqrt(num1);
            std::cout << "Hasil: " << result << std::endl; 
        } else {
            std::cout << "Error: Akar negatif\n";
        }
    } else {
        std::cout << "Masukkan angka kedua: ";
        std::cin >> num2;

        if ((op == '+' ? result = num1 + num2 :
            op == '-' ? result = num1 - num2 :
            op == '*' ? result = num1 * num2 :
            op == '/' ? (num2 != 0 ? result = num1 / num2 : (std::cout << "Error: Tidak bisa dibagi dengan nol\n", result = 0)) :
            op == '^' ? result = pow(num1, num2) :  
            (std::cout << "Error: Invalid operation\n", result = 0)), true) {

            std::cout << "Hasil: " << result << std::endl; 
        }
    }

    return 0;
}
