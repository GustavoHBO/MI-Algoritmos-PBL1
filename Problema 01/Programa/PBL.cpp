#include <stdio.h>
main()
{
	int c, i, s, ss = 1;
	int ar[20][20];
	
	printf("Digite a quantidade de setores: ");
	scanf("%d", &c);
	for (i = 0; i < c; i++)
	{
		s=0;
		printf("\n              Setor %d              \n", ss);
		printf("Digite a quantidade de Ar-condicionados: \n");
		scanf("%d", &ar[i][s]);
		s++;
		printf("Digite a potencia: \n");
		scanf("%d", &ar[i][s]);
		s++;
		printf("Digite a quantidade de horas de uso por dia: \n");
		scanf("%d", &ar[i][s]);
		s++;
		printf("Digite a quantidade de dias de uso por mes: \n");
		scanf("%d", &ar[i][s]);
		s++;
		printf("Digite a quantidade de Computadores: \n");
		scanf("%d", &ar[i][s]);
		s++;
		printf("Digite a potencia: \n");
		scanf("%d", &ar[i][s]);
		s++;
		printf("Digite a quantidade de horas de uso por dia: \n");
		scanf("%d", &ar[i][s]);
		s++;
		printf("Digite a quantidade de dias de uso por mes: \n");
		scanf("%d", &ar[i][s]);
		s++;
		printf("Digite a quantidade de Geladeiras: \n");
		scanf("%d", &ar[i][s]);
		s++;
		printf("Digite a potencia: \n");
		scanf("%d", &ar[i][s]);
		s++;
		printf("Digite a quantidade de horas de uso por dia: \n");
		scanf("%d", &ar[i][s]);
		s++;
		printf("Digite a quantidade de dias de uso por mes: \n");
		scanf("%d", &ar[i][s]);
		s++;
		printf("Digite a quantidade de Lampadas: \n");
		scanf("%d", &ar[i][s]);
		s++;
		printf("Digite a potencia: \n");
		scanf("%d", &ar[i][s]);
		s++;
		printf("Digite a quantidade de horas de uso por dia: \n");
		scanf("%d", &ar[i][s]);
		s++;
		printf("Digite a quantidade de dias de uso por mes: \n");
		scanf("%d", &ar[i][s]);
		s++;
		printf("Digite a quantidade de Televisores: \n");
		scanf("%d", &ar[i][s]);
		s++;
		printf("Digite a potencia: \n");
		scanf("%d", &ar[i][s]);
		s++;
		printf("Digite a quantidade de horas de uso por dia: \n");
		scanf("%d", &ar[i][s]);
		s++;
		printf("Digite a quantidade de dias de uso por mes: \n");
		scanf("%d", &ar[i][s]);
		s++;
		ss++;
	}
	/* Aqui irei começar a fazer os calculos de consumo de
	cada equipamento e setor. Baseando na formula kWh = P * H * D / 1000, 
	onde kWh é a quantidade de energia consumida, 
	P é potência do equipamento em Watts,
	D é a quantidade de dias.*/
	int consumo[4][4];
	
	consumo[0][0] = (ar[0][0] * ar[0][1] * ar[0][2] * ar[0][3]/1000);
	consumo[0][1] = (ar[0][4] * ar[0][5] * ar[0][6] * ar[0][7]/1000);
	consumo[0][2] = (ar[0][8] * ar[0][9] * ar[0][10] * ar[0][11]/1000);
	consumo[0][3] = (ar[0][12] * ar[0][13] * ar[0][2] * ar[0][3]/1000);
	
	printf("olaaaaaaaaaa %d\n", consumo[0] );
	printf("%d setores\n", c);
	printf("%d\n", ar[0][0]);
	printf("%d\n", ar[0][1]);
	printf("%d\n", ar[0][2]);
	printf("%d\n", ar[0][3]);
}
