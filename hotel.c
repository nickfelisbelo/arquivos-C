#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

typedef struct {
	char nome[40], cpf[40], end[40], objeto[300];
	int dias, pessoas;
} Checkin;

Checkin check[10];
int numCheckin = 0;

void registro();
void servico();
void pedido();
void comida();
void bebida();
void finalizaFuncao();

int main () {
	setlocale(LC_ALL,"");
	int opcao;
	do {
		printf("O que deseja:\n1-Check-in\n2-Servico de quarto\n3-Fazer pedido\n0-Sair\n");
		scanf("%d", &opcao);
		if (opcao > 3 || opcao < 0) {
			printf("Erro! Tente Novamente");
			continue;
		}
		if (opcao == 0) {
			printf("Saindo");
			break;
		}
		else {
			switch(opcao) {
			case 1:
				registro();
				break;
			case 2:
				servico();
				break;
			case 3:
				pedido();
			}

		}
		printf("\nDigite\n1-Voltar ao menu principal\n0-Sair\n");
		scanf("%d", &opcao);
		system("clear");
	} while(opcao != 0);
	return 0;
}
void registro() {
	system("clear");
	printf("Faca o check-in\n");
	printf("Insira\nNome:\n");
	scanf (" %[^\n]", check[numCheckin].nome);
	printf("Endereco:\n");
	scanf(" %[^\n]", check[numCheckin].end);
	printf("CPF:\n");
	scanf("%s",check[numCheckin].cpf);
	do {
		printf("Voce gostaria de um quarto para quantos hóspedes?(máximo de 7 pessoas)\nCaso queira sair digite 0\n");
		printf("Valor dos quartos por pessoa:\n1- 200\n2- 290\n3- 380\n4- 470\n5- 560\n6- 650\n6- 740\n7- 830\n ");
		scanf("%d", &check[numCheckin].pessoas);
		if(check[numCheckin].pessoas = 0) {
			break;
		}
		if (check[numCheckin].pessoas > 7 || check[numCheckin].pessoas < 0) {
			printf("Escolha um valor de 1-7\n");
			continue;
		}
	} while (check[numCheckin].pessoas > 7 || check[numCheckin].pessoas < 0);
	printf("Digite a quntidade de dias que ira alugar o quarto:\n");
	scanf("%d", &check[numCheckin].dias);

	printf("Check-in completo\n\n");
	printf("Informações :\n%s\n%s\n%s", check[numCheckin].nome, check[numCheckin].end, check[numCheckin].cpf);
	float pagar = (130 + (90 * check[numCheckin].pessoas)) * check[numCheckin].dias;
	printf("Valor a ser pago\nR$ %.2f", pagar);
	numCheckin++;
	finalizaFuncao();
}

void servico() {
	int opcao;
	printf("Qual serviço deseja:\n1-Arrumar o quarto\n2-Manutenção\n3-Trazer um objeto\n0-Nenhuma das opções\n");
	scanf("%d",&opcao);
	switch(opcao) {
	case 1:
		printf("Estamos mandando funcionarios");
		break;
	case 2:
		printf("Estamos informando a gerencia sobre");
		break;
	case 3:
		printf("Informe o objeto");
		scanf(" %[^\n]", check[numCheckin].objeto);
		printf("Seu objeto sera enviado");
		break;
	case 0:
		printf("saindo...\n");
		break;
	default:
		printf("Erro!Tente novamente!\n");
		break;
	}
	finalizaFuncao();
}
void pedido() {
	int opcao;
	do {
		printf("O que deseja:\n1-Alimento\n2-Bebida\n0-Sair\n");
		scanf("%d", &opcao);
	} while (opcao > 2 && opcao < 0);
	switch(opcao) {
	case 1:
		comida();
		break;
	case 2:
		bebida();
		break;
	default:
		printf("Opcao Inválida! Tente Novamente\n");
	}
	finalizaFuncao();
}
void bebida() {
	int bebida, quant;
	float valor;
	do {
		printf("SELECIONE:\n1-Agua R$2,00\n2-Refrigerante  R$5,00\n3-Suco natural  R$4,00\n4-Coquetel  R$14,00\n");
		scanf("%d", &bebida);
		printf("Digite a quantidade:\n");
		scanf("%d", &quant);
	} while (bebida > 1 || bebida > 4);
	switch(bebida) {
	case 1:
		valor = 2 * quant;
		break;
	case 2:
		valor = 5 * quant;
		break;
	case 3:
		valor = 4 * quant;
		break;
	case 4:
		valor = 14 * quant;
	default:
		printf("Erro! Tente Novamente\n");
		break;
	}
	finalizaFuncao();
}
void comida() {
	int comida, opcao, quant;
	float valor;
	do {
		printf("Qual comida deseja:\n1-Café da manha\n2-Doces\n3-Almoço\n4-Jantar\n0-Sair\n");
		scanf("%d", &comida);
		if (comida > 0 && comida < 5) {
			printf("CardC!pio:\n");
		}
		switch(comida) {
		case 1:
			do {
				printf("1- Panqueca  R$5,00\n2- Pão com Omelete  R$7,00\n3- Lanche Natural de Baguete e Presunto R$12,00\n0- Voltar\n");
				scanf("%d", &opcao);
				printf("Digite a quantidade desejada:\n");
				scanf("%d", &quant);
				switch(opcao) {
				case 1:
					valor = 5 * quant;
					break;
				case 2:
					valor = 7 * quant;
					break;
				case 3:
					valor = 12 * quant;
					break;
				case 0:
					printf("Saindo...");
					break;
				default:
					printf("Opção Inválida! Tente Novamente");
				}
			} while(opcao <= 3 && opcao >= 1);
			if (opcao !=0) {
				printf("Total              R$%.2f",valor);
			}
			break;
		case 2:
			do {
				printf("1- Doce de AbC3bora  R$3,00\n2- Bala de Yorgut  R$0,10\n3- Doce de Leite  R$5,00\n4- PaC'oca  R$0,50\n0-Voltar\n");
				scanf("%d", &opcao);
				printf("Digite a quantidade desejada:\n");
				scanf("%d", &quant);
				switch(opcao) {
				case 1:
					valor = 3 * quant;
					break;
				case 2:
					valor = 0.1 * quant;
					break;
				case 3:
					valor = 5 * quant;
					break;
				case 4:
					valor = 0.5 * quant;
					break;
				case 0:
					printf("Saindo...");
					break;
					break;
				default:
					printf("Opção Inválida! Tente Novamente");
				}
			} while(opcao <= 4 && opcao >= 1);
			if (opcao !=0) {
				printf("Total              R$%.2f",valor);
			}
			break;
		case 3:
			do {
				printf("1- Arroz, Feijão e Lazanha  R$45,00\n2- Macarrão ao molho vermelho  R$37,00\n3- Arroz, Feijoada e carne suína  R$32,00\n0- Voltar\n");
				scanf("%d", &opcao);
				printf("Digite a quantidade desejada:\n");
				scanf("%d", &quant);
				switch(opcao) {
				case 1:
					valor = 45 * quant;
					break;
				case 2:
					valor = 37 * quant;
					break;
				case 3:
					valor = 32 * quant;
					break;
				case 0:
					printf("Saindo...");
					break;
				default:
					printf("Opção Inválida! Tente Novamente");
				}
			} while(opcao <= 3 && opcao >= 1);
			if (opcao !=0) {
				printf("Total              R$%.2f",valor);
			}
			break;
		case 4:
			do {
				printf("1- Macarrão Carbonara  R$55,00\n2- Macarrão ao molho branco  R$47,00\n3- Nhoque de batata e parmessão e Macarrão R$52,00\n0- Voltar\n");
				scanf("%d", &opcao);
				printf("Digite a quantidade desejada:\n");
				scanf("%d", &quant);
				switch(opcao) {
				case 1:
					valor = 55 * quant;
					break;
				case 2:
					valor = 47 * quant;
					break;
				case 3:
					valor = 52 * quant;
					break;
				case 0:
					printf("Saindo...");
					break;
				default:
					printf("Opção Inválida! Tente Novamente");
				}
			} while(opcao <= 3 && opcao >= 1);
			if (opcao !=0) {
				printf("Total              R$%.2f",valor);
			}
			break;
		case 0:
			printf("Saindo...");
			break;
		default:
			printf("Erro");
			break;
		}
	} while(opcao != 0);


	finalizaFuncao();

}
void finalizaFuncao() {
	printf("Pressione ENTER para continuar...");
	getchar();
	getchar();
	system("clear");
}
