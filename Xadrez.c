#include <stdio.h>
//Recursividade torre
void moverTorre(int casas){
    if (casas > 0){
        printf("Direita\n");
        moverTorre(casas - 1);
    }
  }
    
//Recursividade Rainha
void moverRainha(int casas){
  if (casas > 0)
  {
    printf("Esquerda\n");
    moverRainha(casas - 1);
  }  
}

//Recursividade Bispo
void moverBispo(int casas){
  for (int i = 0; i < casas; i++) {  // Movimento vertical (cima)
    for (int j = 0; j < 1; j++) {  // Movimento horizontal (direita)
      printf("Direita ");
    }
    printf("Cima\n");  
  }
}


int main(){
  int i = 1;
  int movimentoCompleto = 1; 
  
  //Torre
  printf("Torre Movimentou....\n");
  moverTorre(5);

  //Bispo
  printf("Bispo Movimentou....\n");
  moverBispo(5);
  //Rainha
  printf("Rainha Movimentou....\n");
  moverRainha(8);
  
  //Cavalo
  printf("Cavalo Movimentou....\n");
  while(movimentoCompleto--){
    for (i = 0; i < 2; i++)
    {
        printf("Cima\n");
    }
    printf("Direita\n");
  }

    return 0;
}

        
