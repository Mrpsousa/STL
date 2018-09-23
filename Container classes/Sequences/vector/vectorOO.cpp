#include <vector>
#include "biblioteca.h"
//ref:http://www.cplusplus.com/reference/vector/vector/
using namespace std;

int main ()
{
    vector <Cliente*> *SS = new vector<Cliente*>;
    vector <Cliente*> iterator it = SS.begin();
    

    Cliente *A = new Cliente;
    Cliente *B = new Cliente;
    Cliente *C = new Cliente;
    Cliente *D = new Cliente;

    A->setClienteNome("Maria");
    A->setClienteFone("1234567");
    A->setClienteCpf("87654321");


    B->setClienteNome("Mario");
    B->setClienteFone("999567");
    B->setClienteCpf("88884321");

    C->setClienteNome("Toin");
    C->setClienteFone("77767");
    C->setClienteCpf("0004321");

    D->setClienteNome("Flavio");
    D->setClienteFone("323367");
    D->setClienteCpf("2223531");
    
    SS->push_back(A);
    SS->push_back(B);
    SS->push_back(C);
    SS->push_back(D);

    for (vector<Cliente*>::iterator it = SS.begin() ; it != SS.end(); ++it)
    {
        cout << ' ' << *it;
    }
    
     vector<string>::const_iterator cii;

   for(cii=SS.begin(); cii!=SS.end(); cii++)

    
    return 0;
}