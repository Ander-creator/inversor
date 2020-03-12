/* Data de submissao:
 * Nome:Anderson Santos Silva
 * RA:166191
 */
#include <stdio.h>
const int tam_buffer=100;

	int main() {
		char buffer[tam_buffer];
		char buffer_aux[tam_buffer];
		int  vetor_espaco[tam_buffer];

		fgets(buffer, tam_buffer, stdin);
	
		int i = 0, j = 0, ponteiro_espaco = 0;

		while(buffer[i] != '\0'){
				if((buffer[i] == ' ') || (buffer[i] == '\n')){
					vetor_espaco[ponteiro_espaco] = i;					
					ponteiro_espaco++;
				}
				buffer_aux[i] = buffer[i];
				i++;						
		}
	

		if((ponteiro_espaco - 1 ) == 0){
			i = vetor_espaco[0];
			j = 0;
			for(i; i>0; i--){		
				buffer[j] = buffer_aux[i-1];
				j++;		
			}
		}
		else{
			int count = ponteiro_espaco, k = 0, aux = 0;
			while(count > 0 ){
					i = vetor_espaco[k];

					if(k == 0)j = 0;			
					else j = vetor_espaco[k - 1]+1;

					aux = j;
					for(i; i>aux; i--){		
						buffer[j] = buffer_aux[i-1];
						j++;		
					}
					count--;
					k++;
			}
		}

		printf("%s", buffer);
	
		return 0;
	}
