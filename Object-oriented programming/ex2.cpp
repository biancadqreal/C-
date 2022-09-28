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

class Lampada{
public:
    bool ligada;
    int tipo; //incandescente = 1, led = 2 ou fluorescente=3
    int watt;
    int cor; //amarela = 1, branca = 2, outros = 3
    std::string marca;

    void ligar(){
        ligada = true;
    }
    void desligar(){
        ligada = false;
    }
    void status(){
        if (ligada)
            std::cout << "A lampada "<<marca<<" esta ligada\n";
        else
            std::cout << "A lampada "<<marca<<" esta desligada\n";
    }
    int ehEconomica(){
        if (watt < 40)
        {
            return true;
        }
        else{
            return false;
        }
        
    }

};

int main(){
    Lampada l1, l2;
    int watt1, watt2;

    std::cin >> watt1;
    std::cin >> watt2;

    l1.marca = "osram";
    l2.marca = "fiat lux";

    l1.watt = watt1;
    l2.watt = watt2;

    l1.ligar();
    l2.desligar();

    l1.status();
    l2.status();

    l2.ligar();
    l2.status();

    l1.ehEconomica();
    l2.ehEconomica();

}
