

/*	1º - Sistema de um Hospital que necessita da Estrutura de Seleção Múltipla, para ser solucionada;
    4º - As principais diferenças entre if-else e switch case é: Você pode ter várias instruções if para múltipla escolha de instruções.
    No switch, você só tem uma expressão para as várias opções.A instrução if-esle verifica a igualdade, bem como a expressão lógica.
    Por outro lado, o switch verifica apenas a igualdade.A instrução if avalia o tipo inteiro, caractere, ponteiro ou ponto flutuante ou tipo booleano.
    Por outro lado, a instrução switch avalia apenas um caractere ou um tipo de dados inteiro.É difícil editar instruções if-else,
	pois é tedioso rastrear onde a correção é necessária.
	Por outro lado, é fácil editar instruções switch, pois elas são fáceis de rastrear.*/
	
	
	#include<stdio.h>
	#include<locale.h>

	
	int main() 
	{
	
		
		char oper, oper3, opert, num, nome, operacao, operacao2, sair,fulano;
		setlocale(LC_ALL, "portuguese");
		fflush(stdin);
	
	
	printf("Olá Bem Vindo(a) ao Hospital Maria de Jesus, eu me chamo Gina e sou a sua assistente virtual.");

	printf("\n Como posso lhe ajudar?");
	printf("\n\t1 - Consulta");
	printf("\n\t2 - Exames");                            /* 2º - t1,t2 resolvido usando if/else */
	printf("\n\t3 - Marcar Cirurgia");                   /* 3º - t3 resolvido usando usando switch/case */
	printf("\n\t4 - Sair"); 
	printf("\n\t");
	scanf ("%s",&oper); 
	fflush(stdin);
	 
	 
	  
	  {
	  
	   if (oper=='1') {
	   	
	   
		printf("Temos 3 médicos disponivéis");
	    printf("\n\tQual médico você gostaria de fazer essa consulta?");
	    printf("\n\t5 - Dr. Márcio Otávio");
	    printf("\n\t6 - Dra. Giovana Galena");
	    printf("\n\t7 - Dr. Damaceno Guenólio");
	    printf("\n\t8 - Sair");
	    printf("\n\t");
	    scanf ("%s",&operacao );
	     
	      if (operacao=='5') {
	      	
			  
		printf(" Digite o seu nome: ");
		scanf ("%c",&fulano );
	      	printf("\n\t");
			scanf ("%s",&oper); 
			fflush(stdin);
	      	
	      	printf ("\n\tOk,  sua consulta está marcada para o dia 04-09-2022 às 7:00 horas, com o Dr. Márcio Otávio.");
	      		scanf ("%s",&oper);
				 printf("\n\t");
			
			
		}
	      	
	      	 	if (operacao=='6') {
	      	 		
	      	printf(" Digite o seu nome: ");
			scanf ("%c",&fulano );
	      	printf("\n\t");
			scanf ("%s",&oper); 
			fflush(stdin);
	      	 	
	      	 	printf("\n\tOk, sua consulta está marcada para o dia 04-09-2022 às 8:00 horas, com a Dra. Giovana Galena.");
	      	 		scanf ("%s",&oper);
	 				printf("\n\t");
	 			}
	      	 
	      	 if (operacao=='7') {
	      	 	
	      	printf(" Digite o seu nome: ");
			scanf ("%c",&fulano );
	      	printf("\n\t");
			scanf ("%s",&oper); 
			fflush(stdin);
	      	 	 	
	      	 	 	printf("\n\tOk, sua consulta está marcada para o dia 07-09-2022 às 10:00 horas, com o Dr. Damaceno Guenólio.");
	      				scanf ("%s",&oper);
	 					printf("\n\t");
	      			
	      }
	  
			while (0) ;
			return 0 ;		
	}
			    
	   else if (oper=='2') {
			
	    printf("\n\tQual exame você necessita fazer?");
	    printf("\n\t9 - Fezes e urina");
	    printf("\n\t10 - Hemograma Completo");
	    printf("\n\t11 - Eletrocardiograma");
	    printf("\n\t8 - Sair");
	    printf("\n\t");
	    scanf ("%s",&operacao2 );
	    
	     	if (operacao2=='9') {
	     
		    printf(" Digite o seu nome: ");
			scanf ("%c",&fulano );
	      	printf("\n\t");
			scanf ("%s",&oper); 
			fflush(stdin);
			
			 printf("\n\tSeu exame de Fezes e urina está marcado para o dia 08-09-2022 às 7:00 horas, no laboratório 8.");
		     	scanf ("%s",&oper);
				 printf("\n\t");
				 
			}
		 
		  if (operacao2== 10) {
		 	 	
		  printf(" Digite o seu nome: ");
			scanf ("%c",&fulano );
	      	printf("\n\t");
			scanf ("%s",&oper); 
			fflush(stdin);
			
			
			 printf("\n\tSeu exame de Fezes e urina está marcado para o dia 08-09-2022 às 09:00 horas, no laboratório 4.");
		     	scanf ("%s",&oper);
				 printf("\n\t");
				 
		  	   }
		  	     
		  	if (operacao2== 11) {
		  	 		
		  	printf(" Digite o seu nome: ");
			 scanf ("%c",&fulano );
	      	 printf("\n\t");
			 scanf ("%s",&oper); 
			 fflush(stdin);	
		  	 		printf("\n\teu exame de Eletrocardiograma está marcado para o dia 09-09-2022 às 8:00 horas, no laboratório 7");
		  	 			scanf ("%s",&oper);
				 	printf("\n\t");
		  	
		  }
		  
	}
		 if (oper== '3') {
		  			printf("\n\tEscolha o plano de saúde");
		  			printf("\n\t");
		  	    	printf("\n\t13 - SUS");
		  	    	printf("\n\t14 - IPASGO");
		  			printf("\n\t15 - UNIMED");
		  	    	printf("\n\t16 - Particular");
		  	    	printf("\n\t17 - Sair");
		  	    	printf("\n\t");
		  	    	scanf ("%d",&num );
	                fflush(stdin);
	            }
	                
	                {
					
	                printf(" Digite o seu nome: ");
					scanf ("%c",&fulano );
	      			printf("\n\t");
					scanf ("%s",&oper); 
					fflush(stdin);
	            }
	                switch (num)
	                {
	                	
	                case 13:
	                		printf("\n Sua cirurgia será marcada para o dia 09-09-2022 às 20:00 horas pelo plano de saúde SUS");
	                		break;
	                case 14:
	                		printf("\n Sua cirurgia será marcada para o dia 09-09-2022 às 20:00 horas pelo plano de saúde IPASGO");
	                		break;
	                case 15:
	                		printf("\n Sua cirurgia será marcada para o dia 09-09-2022 às 20:00 horas pelo plano de saúde UNIMED");
	                		break;		
	                case 16:
	                		printf("\n Sua cirurgia será marcada para o dia 09-09-2022 às 20:00 horas pelo plano de saúde Particular");
	                		break;	
					
					default:
						printf ("Opção invalida");
						break;				
									
					}
			
				}
		
		}
