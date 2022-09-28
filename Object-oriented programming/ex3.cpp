#include <iostream>
#include <string>
using std::string;

class Empregado{
public:

string nome;
int salario;
int aumentoporcentagem;
void mostraDados(){
    std::cout << "Nome do funcionario: " << nome << "\n";
    std::cout << "Salario do funcionario antes do aumento: " << salario << "\n";
}
float aumento(float porcentagem){
    float d = salario + (salario * porcentagem);
    return d;
}

};

int main(){
Empregado e1;
string nome;
int salario;
float aumento;

std::cout << "Diga o seu nome: ";
std::cin >> nome;
std::cout << "Diga o seu salario: ";
std::cin >> salario;
std::cout << "Diga o aumento que voce deseja em porcento: ";
std::cin >> aumento;
aumento = aumento/100;
e1.nome = nome;
e1.salario = salario;
e1.aumentoporcentagem = aumento;
e1.mostraDados();
std::cout << "Salario do funcionario depois do aumento: " << e1.aumento(aumento);

}
