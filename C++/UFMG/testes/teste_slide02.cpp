#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
    
    int *ptr_a = nullptr;
    ptr_a = new int;
    
    if (ptr_a == nullptr) {
        
        cout << "Memoria insuficiente!" << endl;
        exit(1);
    }

    cout << "Endereco de ptr_a: " << ptr_a << endl;
    
    *ptr_a = 90;
    cout << "Conteudo de ptr_a: " << *ptr_a << endl;
    
    delete ptr_a;
}