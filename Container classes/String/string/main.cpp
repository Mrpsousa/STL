#include <iostream>
#include <string>

using namespace std;

int main (){
    string str1 = "Maria01";
    string str2 = "Joao02";

    cout << str1 << endl;
    cout << str2 << endl;

    
    // Iterator
    //begin
    //end
   string::iterator it=str1.begin(); it!=str1.end(); //pode ser usado no 'for'
   cout << it[0] <<endl;
    
    //Capacity
    //size
    //length
    cout << "size: " << str1.size() << "\n";
    cout << "length: " << str1.length() << "\n";
    cout << "capacity: " << str1.capacity() << "\n";
    //clear
    str1.clear();
    cout << "Conteudo de str1 depois do clear:" <<str1 << endl;
    cout << "size: " << str1.size() << "\n";
    //empty
    cout << "Empty? 1-sim    2-não : " << str1.empty() << "\n";


    //TODO
    //Element access
    //at
    //back
    //front
    
    //TODO
    //Modifiers
    //operador +=
    //append
    //push_back
    //assing
    //insert
    //erase
    //replace
    //swap
    //pop_back


    //TODO
    //string operations
    //c_str
    //copy
    //find
    //rfind
    //find_first_of
    //find_last_of
    //find_first_not_of
    //find_last_not_of
    //substr
    //compare



    return 0;
}