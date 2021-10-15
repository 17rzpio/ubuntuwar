
#include <iostream>
#include <vector>
#include <stdlib.h>


//int etapa = 1;


char escolhaPorta(int *etapa,char *acabou) {
    int aleatorio,input;
    std::vector<int> menu;
    std::vector<int> menu2;
    std::cout << " Etapa " << *etapa<<" De total de 5 etapas"<<std::endl;
    std::cout << " 1 - Porta A e 2 - Porta B " << std::endl;
    std::cin >> input;
    menu.push_back(input);
 
    aleatorio = rand() % 2 + 1;
    menu2.push_back(aleatorio);
 //   if (input == aleatorio) {
    if (menu.end() == menu2.end()) {
        
        return 'R';//continua no jogo pois o valorR compara com o while do loop no main do menu
    }
    else {
        std::cout << "Game Over"<<"\n"<<" tecle R para reiniciar o jogo ";
        std::cin >> *acabou;
        *etapa = 0;
        return *acabou;
    }
}

int main()
{
    int etapa = 1;
    char opcao='R';
    std::cout << "1 - INICIAR JOGO"<<std::endl;
    do {
        opcao = escolhaPorta(&etapa,&opcao);
        ++etapa;
        if (etapa == 6) {
            std::cout << "Parabens, voce venceu!"<<std::endl;
            opcao = 'S';
        }
    } while (opcao == 'R');
    std::cout << "pressione qualquer tecla para sair";
    std::cin >> opcao;
}

