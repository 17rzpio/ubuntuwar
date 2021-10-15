#include <iostream>
#include <vector>
#include <stdlib.h>
#include <stdio.h>


//int etapa = 1;


void escolhaPorta(int *etapa,char *acabou) {
    int input;
    std::vector<int> menu(1);
    std::vector<int> menu2(1);
    std::cout << " Etapa " << *etapa<<" De total de 5 etapas"<<std::endl;
    std::cout << " 1 - Porta A e 2 - Porta B " << std::endl;
    std::cin >> input;
    menu.push_back(input);
    menu2.push_back(rand() % 2 + 1);
 //   if (input == aleatorio) {
    if (menu == menu2) {
        
        *acabou = 'R';//continua no jogo pois o valorR compara com o while do loop no main do menu
    }
    else {
        std::cout << "Game Over"<<"\n"<<" tecle R para reiniciar o jogo ";
        std::cin >> *acabou;
        *etapa = 0;
    }
}

int main()
{
	std::vector<int> etapa(1);
	int aux;
    std::vector<int>::iterator it = etapa.begin();
    etapa.insert(it,1);
    std::vector<char> opcao(1);
    opcao.insert(opcao.begin(),'R');
    std::cout << "1 - INICIAR JOGO"<<std::endl;
    do {
        escolhaPorta(&etapa[0],&opcao[0]);
        aux = etapa[0];
        ++aux;
    	etapa.insert(etapa.begin(),aux);
        if (etapa[0] == 6) {
            std::cout << "Parabens, voce venceu!"<<std::endl;
            opcao.insert(opcao.begin(),'S');
        }
    } while (opcao[0] == 'R');
    std::cout << "pressione qualquer tecla para sair";
    std::cin >> opcao[0];
}
