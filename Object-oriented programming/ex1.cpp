#include<iostream>

class Triangulo{
    //Definição de atributos
public:
    float base;
    float altura;

    float calculaArea(){
        return (base*altura)/2;
    }

};




int main(){
    Triangulo t1;
    float base;
    std::cin >> base;
    float altura;
    std::cin >> altura;
    t1.base = base;
    t1.altura = altura;
    std::cout << t1.calculaArea();


}
