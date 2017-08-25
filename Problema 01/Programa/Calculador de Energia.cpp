/*******************************************************************************
Autor: Gustavo Henrique
Componente Curricular: MI - Algoritmos
Concluido em: 15/04/2015
Declaro que este c�digo foi elaborado por mim de forma individual e n�o cont�m nenhum
trecho de c�digo de outro colega ou de outro autor, tais como provindos de livros e
apostilas, e p�ginas ou documentos eletr�nicos da Internet. Qualquer trecho de c�digo
de outra autoria que n�o a minha est� destacado com uma cita��o para o autor e a fonte
do c�digo, e estou ciente que estes trechos n�o ser�o considerados para fins de avalia��o.
******************************************************************************************/
#include<stdio.h>

int main()//Fun��o inicial do programa
{
	long int ss = 0, str, ar, arp, arh, ard, tv, tvp, tvh, tvd, lamp, lampp, lamph, lampd, comp, compp, comph, compd, gel, gelp, gelh, geld, addsetor;
	float total, compt = 0, art = 0, gelt = 0, lampt = 0, tvt = 0, mil = 1000, icms = 0.27, pis = 0.0165 , cofins =0.0761 , taxa;
	/* Utilizei essa quantidade de variaveis para que o simulador ficasse bem simples e por que quero mostrar a quantidade de kWh de cada equipamento 
		(em rela��o a todos os setores).*/
	printf("----------------------------------------------------------------\n");
	printf("|        Bem-Vindo ao calculador de conta de energia           |\n");
	printf("----------------------------------------------------------------\n");
	printf("Para comecar digite o numero de setores que voce quer calcular: \n");// Aqui o usu�rio introduz a quantidade de setores que deseja calcular.
	scanf("%d", &str);
	if ( str > 0){/*	Se o usu�rio digitar qualquer valor acima de 0, o simulador vai adicionar a quatidade de setores desejados.
						Se o usu�rio digitar qualquer valor a baixo de 0 o simulador � finalizado.*/
		printf("\nPor favor digite a taxa de energia eletrica:\n");// Aqui o programa pede para o usu�rio introduzir a taxa de energia
		scanf("%f", &taxa);
	
		/* Aqui irei come�ar o algoritmo que calcula o consumo (baseado nos valores introduzidos pelo usu�rio)
			de energia em cada setor, baseado em kWh = N * P * H * D / 1000, 
			onde kWh = Energia consumida, N = N�mero de equipamentos, P = Pot�ncia do equipamento, 
			H =  Horas de uso por dia, D = Dias de uso por m�s, dividido por 1000.*/
		
		do// Aqui repete dependendo da quantidade de setores que o usu�rio quiser
		{
			ss++;
			printf("\n             Setor %d \n", ss);
			printf("\nDigite a quantidade de Ar-Condicionados: \n");// Aqui o usu�rio introduz a quantidade de Ar-Condicionados.
			scanf("%d", &ar);
			if (ar > 0)// Aqui se o valor for maior que zero o algoritmo continua, se menor, pula para o proximo comando.
			{
				printf("\nDigite a potencia em Watts: \n");// Aqui o usu�rio introduz a pot�ncia em Watts.
				scanf("%d", &arp);
				printf("\nDigite a quantidade de horas de uso por dia: \n");// Aqui o usu�rio introduz a quantidade de horas de uso por dia.
				scanf("%d", &arh);
				printf("\nDigite a quantidade de dias de uso por mes: \n");// Aqui o usu�rio introduz a quantidade de dias de uso por m�s.
				scanf("%d", &ard);
				art = art + (ar * arp * arh * ard / mil);/* Aqui eu multiplico todos os valores das vari�veis "ar", "arp", "arh", "ard" e 
																divido por 1000 e somo com o valor da vari�vel art e guardo na mesma o resultado.*/
			}		
			printf("\nDigite a quantidade de Computadores: \n");// Aqui o usu�rio introduz a quantidade de Computadores.
			scanf("%d", &comp);
			if (comp > 0){
				printf("\nDigite a potencia em Watts: \n");// Aqui o usu�rio introduz a pot�ncia em Watts.
				scanf("%d", &compp);
				printf("\nDigite a quantidade de horas de uso por dia: \n");// Aqui o usu�rio introduz a quantidade de horas de uso por dia.
				scanf("%d", &comph);
				printf("\nDigite a quantidade de dias de uso por mes: \n");// Aqui o usu�rio introduz a quantidade de dias de uso por m�s.
				scanf("%d", &compd);
				compt = compt + ( comp * compp * comph * compd / mil );/* Aqui eu multiplico todos os valores das vari�veis "comp", "compp", "comph", "compd" e 
																divido por 1000 e somo com o valor da vari�vel compt e guardo na mesma o resultado.*/
			}
			printf("\nDigite a quantidade de Geladeiras: \n");// Aqui o usu�rio introduz a quantidade de Geladeiras.
			scanf("%d", &gel);
			if (gel > 0){
				printf("\nDigite a potencia em Watts: \n");// Aqui o usu�rio introduz a pot�ncia em Watts.
				scanf("%d", &gelp);
				printf("\nDigite a quantidade de horas de uso por dia: \n");// Aqui o usu�rio introduz a quantidade de horas de uso por dia.
				scanf("%d", &gelh);
				printf("\nDigite a quantidade de dias de uso por mes: \n");// Aqui o usu�rio introduz a quantidade de dias de uso por m�s.
				scanf("%d", &geld);
				gelt = gelt + ( gel * gelp * gelh * geld / mil );/* Aqui eu multiplico todos os valores das vari�veis "gel", "gelp", "gelh", "geld" e 
																divido por 1000 e somo com o valor da vari�vel gelt e guardo na mesma o resultado.*/
			}
			printf("\nDigite a quantidade de Lampadas: \n");// Aqui o usu�rio introduz a quantidade de Lamp�das.
			scanf("%d", &lamp);
			if (lamp > 0){
				printf("\nDigite a potencia em Watts: \n");// Aqui o usu�rio introduz a pot�ncia em Watts.
				scanf("%d", &lampp);
				printf("\nDigite a quantidade de horas de uso por dia: \n");// Aqui o usu�rio introduz a quantidade de horas de uso por dia.
				scanf("%d", &lamph);
				printf("\nDigite a quantidade de dias de uso por mes: \n");// Aqui o usu�rio introduz a quantidade de dias de uso por m�s.
				scanf("%d", &lampd);
				lampt = lampt + ( lamp * lampp * lamph * lampd / mil );// Aqui o programa calcula o consumo em kWh do componente.
			}
			printf("\nDigite a quantidade de Televisores: \n");/* Aqui eu multiplico todos os valores das vari�veis "lamp", "lampp", "lamph", "lamd" e 
																divido por 1000 e somo com o valor da vari�vel lampt e guardo na mesma o resultado.*/
			scanf("%d", &tv);
			if (tv > 0){
				printf("\nDigite a potencia em Watts: \n");// Aqui o usu�rio introduz a pot�ncia em Watts.
				scanf("%d", &tvp);
				printf("\nDigite a quantidade de horas de uso por dia: \n");// Aqui o usu�rio introduz a quantidade de horas de uso por dia.
				scanf("%d", &tvh);
				printf("\nDigite a quantidade de dias de uso por mes: \n");// Aqui o usu�rio introduz a quantidade de dias de uso por m�s.
				scanf("%d", &tvd);
				tvt = tvt + ( tv * tvp * tvh * tvd / mil ); /* Aqui eu multiplico todos os valores das vari�veis "tv", "tvp", "tvh", "tvd" e 
																divido por 1000 e somo com o valor da vari�vel tvt e guardo na mesma o resultado.*/
			}																																	
			if(ss == str){// Aqui quando a variavel "ss" for igual a variavel "str", o simulador vai perguntar ao usu�rio se deseja adicionar mais algum setor.
			printf("\nDeseja adicionar algum setor :\n\n");
			printf("\n1) Sim, Adicionar \t\t 2) Nao, Mostrar Resultados\n\n");// Se o usu�rio digitar 1 ir� adicionar mais setores, se digitar 2 finaliza e mostra os resultados.
				do{
					scanf("%d", &addsetor);// Aqui o usuario digita o n�mero da op��o escolhida, e � guardada na variavel addsetor.
					if(addsetor == 1){// Se o usu�rio digitar 1, mais um setor � adicionado.
						str++;
					}
					else if(addsetor != 2 && addsetor != 1){// Se o usu�rio digitar qualquer valor diferente de 1 e 2, o simulador manda o usu�rio escolher apenas entre as op��es validas.
						printf("Escolha apenas entre a opcao 1 e a opcao 2.\n");
					}
				}while ( addsetor != 1 && addsetor !=2);// Se o usu�rio digitar algo diferente de 1 e 2, o simulador repete o comando para que o usu�rio escolha uma op��o valida.
			}
		}while (ss < str);// O comando ir� repetir at� quando usu�rio escolher finaliza-lo, ou seja, quando n�o houver mais a necessidade de adicionar setores.
		/* Aqui come�arei o algoritimo que exibe ao usu�rio o consumo de energia. */	
		total = art + comp + gelt + lamp + tvt;// Aqui � feito o c�lculo do total de kWh feita em todos os setores.
		printf("\n \n");
		printf("__________________________________________________________");	
		printf("\n|            Consumo Total de Energia :                  |\n");
		printf("| Consumo de kWh pelos Ar-Condicionados \202 igual a : %.2f |\n", art);
		printf("| Consumo de kWh pelos Computadores \202 igual a     : %.2f |\n", compt);
		printf("| Consumo de kWh pelas Geladeiras \202 igual a       : %.2f |\n", gelt);
		printf("| Consumo de kWh pelas Lampadas \202 igual a         : %.2f |\n", lampt);
		printf("| Consumo de kWh pelos Televisores \202 igual a      : %.2f |\n", tvt);
		printf("__________________________________________________________");
		printf("\n\n__________________________________________________________\n");
		/* Logo a baixo, � feito o c�lculo final, onde s�o incrementados os impostos (pis, cofins, icms), e mostra ao usu�rio o total em Reais(R$).*/
		printf("*\t\t Consumo Total em R$ : %.2f\t\t *", (total + (total * pis) + (total * cofins) + (total * icms))*taxa);
		printf("\n__________________________________________________________\n");
		return 0;
	}
}
