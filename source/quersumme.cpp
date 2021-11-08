#include<iostream>
#include<vector>
#include<string>

int main(){
    int zahl=0;
    int quersumme=0;

    std::cout << "Ihre Zahl: ";
    std::cin >> zahl;

    while(0<zahl){
        quersumme += zahl % 10;
        zahl /= 10;
    }

    std::cout << "Quersumme: " << quersumme << std::endl;

    return 0;


}