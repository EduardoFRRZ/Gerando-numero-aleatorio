#include <stdio.h>
#include <stdlib.h>	// necessário p/ as funções rand() e srand()
#include<time.h>	//necessário p/ função time()

int main(void) {
  
  int i;
  
  printf("Gerando 10 valores aleatorios:\n\n");
  
  srand(time(NULL));	/* A função srand (x) define a semente do algoritmo do gerador de números
						   aleatórios usado pela função rand ().
						   
						   srand(time(NULL)) inicializa	 o gerador de números aleatórios
    				       com o valor da função time(NULL). Este por sua vez, é calculado
  	  	  	  	  	  	   como sendo o total de segundos passados desde 1 de janeiro de 1970
    					   até a data atual.
  	  	  	  	  	  	   Desta forma, a cada execução o valor da "semente" será diferente. 
  	  	  	  	  	    */
  	  	  	  	  	     
  for (i=0; i < 10; i++) {
    
	// gerando valores aleatórios na faixa de 0 a 100
    printf("%d ", rand() % 100);
  
  }
  printf("\n");
  return 0;
}