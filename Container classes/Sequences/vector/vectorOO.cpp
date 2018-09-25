#include <vector>
#include <iostream>
#include <string.h>
//ref:http://www.cplusplus.com/reference/vector/vector/
using namespace std;

class Cliente
{
    public:
    string Nome;
    string cpf;

    Cliente (string n, string n1){
        this->Nome = n;
        this->cpf = n1;
    }
   void show(void);
};

void Cliente::show(void)
{
    cout << " " << Nome << " " << cpf<< endl;
}

int main ()
{
    //vector <Cliente*> *SS = new vector<Cliente*>;
    vector <Cliente> SS;// = new vector<Cliente>;

    Cliente A("maria", "123");
    Cliente B("Mario", "987663");
    Cliente C("Joao", "1563");
    Cliente D("marcia", "098");

    SS.push_back(A);
    SS.push_back(B);
    SS.push_back(C);
    SS.push_back(D);
    //for(vector<Shapes>::iterator iter =listOfshapes.begin() ;iter != listOfshapes.end();iter++)

    for (vector<Cliente>::iterator it = SS.begin(); it != SS.end(); ++it)
    {
        it->show();
    }

    return 0;
}