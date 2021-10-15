
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <stdio.h>




void escolhaPorta(int *etapa,char *acabou) {
    int input;
    std::vector<int> menu;
    std::vector<int> menu2;
    std::cout << " Etapa " << *etapa<<" De total de 5 etapas"<<std::endl;
    std::cout << " 1 - Porta A e 2 - Porta B " << std::endl;
    std::cin >> input;
    menu.push_back(input);
    menu2.push_back(rand() % 2 + 1);
 //   if (input == aleatorio) {
    if (menu.end() == menu2.end()) {
        *acabou ='R';//continua no jogo pois o valorR compara com o while do loop no main do menu
    }
    else {
        std::cout << "Game Over"<<"\n"<<" tecle R para reiniciar o jogo ";
        std::cin >> *acabou;
        *etapa = 0;
    }
}

int main()
{
	std::vector<int> etapa;
	etapa[0]=1;
	std::vector<char> opcao;
    opcao[0]='R';
    std::cout << "1 - INICIAR JOGO"<<std::endl;
    do {
        escolhaPorta(&etapa,&opcao);
        ++etapa[0];
        if (etapa[0] == 6) {
            std::cout << "Parabens, voce venceu!"<<std::endl;
            opcao[0] = 'S';
        }
    } while (opcao[0] == 'R');
    std::cout << "pressione qualquer tecla para sair";
    std::cin >> opcao[0];
}

