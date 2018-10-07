#include <deque>
#include <iostream>
#include <string.h>
//ref:http://www.cplusplus.com/reference/vector/vector/

using namespace std;

class Cliente
{
    public:
    string Nome;
    string cpf;

    Cliente(string n, string n1){
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
    deque<Cliente> SS;// = new deque<Cliente>;
    deque<int> ii;

    Cliente A("maria", "123");
    Cliente B("Mario", "987663");
    Cliente C("Joao", "1563");
    Cliente D("marcia", "098");

    SS.push_back(A);
    SS.push_back(B);
    SS.push_back(C);
    SS.push_back(D);

    ii.push_back(10);
    ii.push_back(20);
    ii.push_back(30);
    ii.push_back(40);

    cout << "Deque 'Classe' " << endl;
    for (deque<Cliente>::iterator it = SS.begin(); it != SS.end(); ++it)
    {
        it->show();
    }

    cout << "Deque int " << endl;
    for (deque<int>::iterator iit = ii.begin(); iit != ii.end(); ++iit)
    {
       cout << *iit << endl;
    }
/*
    vector<Cliente>::iterator it = SS.begin();
    cout << "Inicio do vector classe" << endl;
    it->show();
    it = SS.end();
    cout << "Final" << endl;
    it->show();
    cout << "Tamanho de SS" << endl;
    cout << SS.size() << endl;
    if(SS.empty())
        cout << "vazio" << endl;
    else cout << "N vazio" << endl;
    cout << "inserir no  3º elemento do vetor de int: " << endl;
    cout << "antes: " << ii[3] << endl;
    ii.at(3) = 300;
    cout << "Depois: " << ii[3] << endl;
    cout << "acessar 'Front' do vector: " << ii.front() << endl;
    cout <<"acessar 'Back' do vector: " << ii.back() << endl;
    cout << "Declaração 'nova' " << endl;
    vector<int> v(5,500);
    cout << "Vector Nova declaração: 5 valores 500" << endl;
    for (vector<int>::iterator in = v.begin(); in != v.end(); ++in)
    {
       cout << *in << endl;
    }
    cout << "Swap vector int e vector novo(5 valores 500) " << endl;
    v.swap(ii);
    cout << "Vector 'v' que tinha: 5 valores 500" << endl;
    for (vector<int>::iterator in = v.begin(); in != v.end(); ++in)
    {
       cout << *in << endl;
    }


    

    cout << "Vector 'ii' que tinha: 10, 20 30 .." << endl;
    for (vector<int>::iterator iit = ii.begin(); iit != ii.end(); ++iit)
    {
       cout << *iit << endl;
    }

*/
    
    return 0;
}