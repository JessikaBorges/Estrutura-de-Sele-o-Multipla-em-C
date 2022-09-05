

/*	1� - Sistema de um Hospital que necessita da Estrutura de Sele��o M�ltipla, para ser solucionada;
    4� - As principais diferen�as entre if-else e switch case �: Voc� pode ter v�rias instru��es if para m�ltipla escolha de instru��es.
    No switch, voc� s� tem uma express�o para as v�rias op��es.A instru��o if-esle verifica a igualdade, bem como a express�o l�gica.
    Por outro lado, o switch verifica apenas a igualdade.A instru��o if avalia o tipo inteiro, caractere, ponteiro ou ponto flutuante ou tipo booleano.
    Por outro lado, a instru��o switch avalia apenas um caractere ou um tipo de dados inteiro.� dif�cil editar instru��es if-else,
	pois � tedioso rastrear onde a corre��o � necess�ria.
	Por outro lado, � f�cil editar instru��es switch, pois elas s�o f�ceis de rastrear.*/
	
	
	#include<stdio.h>
	#include<locale.h>

	
	int main() 
	{
	
		
		char oper, oper3, opert, num, nome, operacao, operacao2, sair,fulano;
		setlocale(LC_ALL, "portuguese");
		fflush(stdin);
	
	
	printf("Ol� Bem Vindo(a) ao Hospital Maria de Jesus, eu me chamo Gina e sou a sua assistente virtual.");

	printf("\n Como posso lhe ajudar?");
	printf("\n\t1 - Consulta");
	printf("\n\t2 - Exames");                            /* 2� - t1,t2 resolvido usando if/else */
	printf("\n\t3 - Marcar Cirurgia");                   /* 3� - t3 resolvido usando usando switch/case */
	printf("\n\t4 - Sair"); 
	printf("\n\t");
	scanf ("%s",&oper); 
	fflush(stdin);
	 
	 
	  
	  {
	  
	   if (oper=='1') {
	   	
	   
		printf("Temos 3 m�dicos disponiv�is");
	    printf("\n\tQual m�dico voc� gostaria de fazer essa consulta?");
	    printf("\n\t5 - Dr. M�rcio Ot�vio");
	    printf("\n\t6 - Dra. Giovana Galena");
	    printf("\n\t7 - Dr. Damaceno Guen�lio");
	    printf("\n\t8 - Sair");
	    printf("\n\t");
	    scanf ("%s",&operacao );
	     
	      if (operacao=='5') {
	      	
			  
		printf(" Digite o seu nome: ");
		scanf ("%c",&fulano );
	      	printf("\n\t");
			scanf ("%s",&oper); 
			fflush(stdin);
	      	
	      	printf ("\n\tOk,  sua consulta est� marcada para o dia 04-09-2022 �s 7:00 horas, com o Dr. M�rcio Ot�vio.");
	      		scanf ("%s",&oper);
				 printf("\n\t");
			
			
		}
	      	
	      	 	if (operacao=='6') {
	      	 		
	      	printf(" Digite o seu nome: ");
			scanf ("%c",&fulano );
	      	printf("\n\t");
			scanf ("%s",&oper); 
			fflush(stdin);
	      	 	
	      	 	printf("\n\tOk, sua consulta est� marcada para o dia 04-09-2022 �s 8:00 horas, com a Dra. Giovana Galena.");
	      	 		scanf ("%s",&oper);
	 				printf("\n\t");
	 			}
	      	 
	      	 if (operacao=='7') {
	      	 	
	      	printf(" Digite o seu nome: ");
			scanf ("%c",&fulano );
	      	printf("\n\t");
			scanf ("%s",&oper); 
			fflush(stdin);
	      	 	 	
	      	 	 	printf("\n\tOk, sua consulta est� marcada para o dia 07-09-2022 �s 10:00 horas, com o Dr. Damaceno Guen�lio.");
	      				scanf ("%s",&oper);
	 					printf("\n\t");
	      			
	      }
	  
			while (0) ;
			return 0 ;		
	}
			    
	   else if (oper=='2') {
			
	    printf("\n\tQual exame voc� necessita fazer?");
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
			
			 printf("\n\tSeu exame de Fezes e urina est� marcado para o dia 08-09-2022 �s 7:00 horas, no laborat�rio 8.");
		     	scanf ("%s",&oper);
				 printf("\n\t");
				 
			}
		 
		  if (operacao2== 10) {
		 	 	
		  printf(" Digite o seu nome: ");
			scanf ("%c",&fulano );
	      	printf("\n\t");
			scanf ("%s",&oper); 
			fflush(stdin);
			
			
			 printf("\n\tSeu exame de Fezes e urina est� marcado para o dia 08-09-2022 �s 09:00 horas, no laborat�rio 4.");
		     	scanf ("%s",&oper);
				 printf("\n\t");
				 
		  	   }
		  	     
		  	if (operacao2== 11) {
		  	 		
		  	printf(" Digite o seu nome: ");
			 scanf ("%c",&fulano );
	      	 printf("\n\t");
			 scanf ("%s",&oper); 
			 fflush(stdin);	
		  	 		printf("\n\teu exame de Eletrocardiograma est� marcado para o dia 09-09-2022 �s 8:00 horas, no laborat�rio 7");
		  	 			scanf ("%s",&oper);
				 	printf("\n\t");
		  	
		  }
		  
	}
		 if (oper== '3') {
		  			printf("\n\tEscolha o plano de sa�de");
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
	                		printf("\n Sua cirurgia ser� marcada para o dia 09-09-2022 �s 20:00 horas pelo plano de sa�de SUS");
	                		break;
	                case 14:
	                		printf("\n Sua cirurgia ser� marcada para o dia 09-09-2022 �s 20:00 horas pelo plano de sa�de IPASGO");
	                		break;
	                case 15:
	                		printf("\n Sua cirurgia ser� marcada para o dia 09-09-2022 �s 20:00 horas pelo plano de sa�de UNIMED");
	                		break;		
	                case 16:
	                		printf("\n Sua cirurgia ser� marcada para o dia 09-09-2022 �s 20:00 horas pelo plano de sa�de Particular");
	                		break;	
					
					default:
						printf ("Op��o invalida");
						break;				
									
					}
			
				}
		
		}
