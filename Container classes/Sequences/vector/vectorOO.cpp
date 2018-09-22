#include <vector>
#include "biblioteca.h"

using namespace std;

int main ()
{
    vector <Cliente> SS;

    Cliente *A = new Cliente;
    Cliente *B = new Cliente;

    A->setClienteNome("Maria");
    A->setClienteFone("1234567");
    A->setClienteCpf("87654321");


    B->setClienteNome("Mario");
    B->setClienteFone("999567");
    B->setClienteCpf("88884321");
    
    SS.push_back(Cliente &A);
    SS.push_back(Cliente &B);
    SS.push_back();
    return 0;
}