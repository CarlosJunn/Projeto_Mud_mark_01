#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>

int escolha = 0;
int JogoJokenpo(int player,int CPU);
void MenuCriaPersonagem();

int main(int argc,char *argv[]){
	/*setando idioma*/
	setlocale(LC_ALL,"Portuguese");
	/*variaveis do jogo*/
	int  vida=100, jokenpo=0,CPU=0;
	/*variaveis do menu de criação de personagem*/
	int raca,alinhamento,profissao,meta,meio,porte;
	char nome[21],hist[401];
	/*variavel de introdução do mundo*/
	char IntroducaoMundo[] = "\n\nBem vindo a Brasiliun um mundo cujo triunfarao apenas os mais avidos, terra do desemprego e da prosperidade.\nVoce se encontra na Rodoviarius centro de tudo em Brasiliun.";
	char IntroducaoPart2[]="\n\n~Não se anime muito, sua aventura ainda nao terminou, ainda lhe resta coisas a superar pela frente !!!\n\n";
	/*variaveis para a história*/
	int op1,op2,op3,player;
	
	srand(time(NULL));
		
	printf("\n\n*************BEM-VINDO*************\n\n");
	

	/*Menu quando não pode iniciar o jogo, que obriga a criação de personagem*/
		do{
			MenuCriaPersonagem();
			/*
			printf("\n1.Criar Personagem\n");
			printf("2.Iniciar Jogo(Crie um personagem primeiro)\n");
			printf("3.Sair\n");
			printf("\nDigite: ");
			scanf(" %d",&escolha);*/
			system("cls");
	/*condicional para testar numeros acima do que foi pedido, opção de encerrar o jogo*/		
			while(escolha<1||escolha>3){
				printf("\ncaractere inválido digite novamente: ");
				scanf("%d",&escolha);
			if(escolha==3)
				return 0;
			}
	/*segue a baixo a criação de personagem com os teste requisitados*/		
			if(escolha==1){
				printf("\nDigite um nome (com ate 20 caracteres): ");
				scanf(" %s[^\n]",nome);
				system("cls");
			do{
				printf("\nEscolha sua raça:\n1 - Humano\n2 - Anão\n3 - Elfo\n");
				printf("\nDigite: ");scanf("%d",&raca);
			}while(raca<1||raca>3);
		
			do{
				printf("\nEscolha seu Alinhamento:\n1 - Mal\n2 - Neutro\n3 - Bom\n");
				printf("\nDigite: ");scanf("%d",&alinhamento);	
			}while(alinhamento<1||alinhamento>3);
	
			if(alinhamento==3){
				 do{
					printf("\nEsolha sua Profissão:\n1 - Guerreiro\n2 - Mago\n3 - Ladino(Indisponível)\n");
					printf("\nDigite: ");scanf("%d",&profissao);
				}while(profissao<1||profissao>2);
			}else
				do{
					printf("\nEsolha sua Profissão:\n1 - Guerreiro\n2 - Mago\n3 - Ladino\n");
					printf("\nDigite: ");scanf("%d",&profissao);
				}while(profissao<1||profissao>3);
			
			if(alinhamento==1){
				do{
					printf("\nEsolha sua Meta:\n1 - Governar o reino\n2 - Ficar rico\n3 - Destruir o mal(Indisponível)\n");
					printf("\nDigite: ");scanf("%d",&meta);			
				}while(meta<1||meta>2);
			}else
				do{
						printf("\nEsolha sua Meta:\n1 - Governar o reino\n2 - Ficar rico\n3 - Destruir o mal\n");
						printf("\nDigite: ");scanf("%d",&meta);			
					}while(meta<1||meta>3);
				
				if(profissao==3){
					do{
						printf("\nEscolha seu Meio em que Vive:\n1 - Urbano\n2 - Rural\n3 - Tribal(Indisponível)\n");
						printf("\nDigite: ");scanf("%d",&meio);			
					}while(meio<1||meio>2);
				}else	
					do{
						printf("\nEsolha seu Meio em que Vive:\n1 - Urbano\n2 - Rural\n3 - Tribal\n");
						printf("\nDigite: ");scanf("%d",&meio);			
					}while(meio<1||meio>3);
				if(raca==2){
					do{
						printf("\nEsolha seu Porte:\n1 - Grande(Indisponível)\n2 - Medio\n3 - Pequeno\n");
						printf("\nDigite: ");scanf("%d",&porte);			
					}while(porte<2||porte>3);
				}else{
						do{
						printf("\nEsolha seu Porte:\n1 - Grande\n2 - Medio\n3 - Pequeno\n");
						printf("\nDigite: ");scanf("%d",&porte);			
					}while(porte<1||porte>3);
						printf("\nConte uma Previa sobre seu personagem: ");
						scanf(" %[^\n]",hist);
						break;
				}
			}
	/*else para sair do jogo separadamente*/
			else if(escolha==3){
				return 0;
			}			
		}while(escolha==2);
	/*menu com a criação de personagem e a historia juntas, com opção de encerramento*/
	do{	
			printf("\n1.Mudar Personagem\n");
			printf("2.Iniciar Jogo\n");
			printf("3.Sair\n");
			printf("\nDigite: ");
			scanf("%d",&escolha);
	
			while(escolha<=0||escolha>=4){
				printf("\ncaractere invalido digite novamente: ");
				scanf("%d",&escolha);
			}
			do{
				if(escolha==1){
					printf("\nDigite um nome (com ate 20 caracteres): ");
					scanf(" %[^\n]",nome);
			
					do{
						printf("\nEscolha sua raça:\n1 - Humano\n2 - Anão\n3 - Elfo\n");
						printf("\nDigite: ");scanf("%d",&raca);
					}while(raca<1||raca>3);
		
					do{
						printf("\nEscolha seu Alinhamento:\n1 - Mal\n2 - Neutro\n3 - Bom\n");
						printf("\nDigite: ");scanf("%d",&alinhamento);	
					}while(alinhamento<1||alinhamento>3);
		
					if(alinhamento==3){
					 do{
						printf("\nEsolha sua Profissão:\n1 - Guerreiro\n2 - Mago\n3 - Ladino(Indisponível)\n");
						printf("\nDigite: ");scanf("%d",&profissao);
					}while(profissao<1||profissao>2);
				}else
					do{
						printf("\nEsolha sua Profissao:\n1 - Guerreiro\n2 - Mago\n3 - Ladino\n");
						printf("\nDigite: ");scanf("%d",&profissao);
					}while(profissao<1||profissao>3);
			
				if(alinhamento==1){
					do{
						printf("\nEsolha sua Meta:\n1 - Governar o reino\n2 - Ficar rico\n3 - Destruir o mal(Indisponível)\n");
						printf("\nDigite: ");scanf("%d",&meta);			
					}while(meta<1||meta>2);
				}else
					do{
						printf("\nEsolha sua Meta:\n1 - Governar o reino\n2 - Ficar rico\n3 - Destruir o mal\n");
						printf("\nDigite: ");scanf("%d",&meta);			
					}while(meta<1||meta>3);
			
				if(profissao==3){
					do{
						printf("\nEsolha seu Meio em que Vive:\n1 - Urbano\n2 - Rural\n3 - Tribal(Indisponível)\n");
						printf("\nDigite: ");scanf("%d",&meio);			
					}while(meio<1||meio>2);
				}else	
					do{
						printf("\nEsolha seu Meio em que Vive:\n1 - Urbano\n2 - Rural\n3 - Tribal\n");
						printf("\nDigite: ");scanf("%d",&meio);			
					}while(meio<1||meio>3);
				if(raca==2){
					do{
						printf("\nEsolha seu Porte:\n1 - Grande(Indisponível)\n2 - Medio\n3 - Pequeno\n");
						printf("\nDigite: ");scanf("%d",&porte);			
					}while(porte<2||porte>3);
				}else{
					do{
						printf("\nEsolha seu Porte:\n1 - Grande\n2 - Medio\n3 - Pequeno\n");
						printf("\nDigite: ");scanf("%d",&porte);			
					}while(porte<1||porte>3);
					printf("\nConte uma Previa sobre seu personagem: ");
					scanf(" %[^\n]",hist);
					break;
				}
			}
	/*inicio da história*/
			else if(escolha==2){
				printf("\n%s\n\n",IntroducaoMundo);
				printf("Nome:%s\nVIDA:%d\n",nome,vida);
				
				do{
					printf("\nDe acordo com sua meta escolha um lugar para iniciar sua aventura:\n");
					printf("\n1 - Planalto centralis.\n2 - Sant Mariah.\n3 - Vale de Ceila.\nDigite:");
					scanf("%d",&op1);
					while(op1<1||op1>3){
						printf("\nCaractere inválido, digite novamente:");
						scanf("%d",&op1);
					}
					
					printf("\nDepois que voce escolheu um destino, escolha agora seu tipo de abordagem:\n");
					if(alinhamento=1){
						printf("\n1 - Dialogo.(indisponivel)\n2 - Vou para o combate\n3 - Esperarei um movimento inimigo.\nDigite:");
						scanf("%d",&op2);
						while(op2<2||op2>3){
							printf("\nCaractere inválido, digite novamente:");
							scanf("%d",&op2);
						}
					}
					else if(alinhamento=3){
						printf("\n1 - Dialogo.\n2 - Vou para o combate(indisponível)\n3 - Esparei um movimento do inimigo\nDigite:");
						scanf("%d",&op2);
						while(op2==2||op2>3||op2<1){
							printf("\nCaractere inválido, digite novamente:");
							scanf("%d",&op2);
						}
					}
				
					printf("\nVocê agora chegou no seu destino, mas acabou de avistar alguns inimigos, escolha uma ação:\n");
					if(profissao==1){
						printf("1 - Fugir e tentar ir para outro lugar.\n2 - Tentarei atravessar usando dialogo.\n3 - Empunhar a espada e batalhar para passar.\nDigite:");
						scanf("%d",&op3);
						while(op3<1||op3>3){
							printf("\nCaractere inválido. Digite: ");
							scanf("%d",&op3);
						}
						if(op3==2){
							vida-=10;
							printf("\nVocê passou mas perdeu 10 pontos de vida\nVIDA: %d",vida);
						}
						else if(op3==3){
							printf("\nSua habilidade com a espada foi muito útil nesse momento, parabéns voce passou.\n");
						}
					}
					else if(profissao==2){
						printf("1 - Fugir e tentar ir para outro lugar.\n2 - Tentarei atravessar usando dialogo.\n3 - Usar uma magia de teletransporte.\nDigite:");
						scanf("%d",&op3);
						while(op3<1||op3>3){
							printf("\nCaractere inválido. Digite: ");
							scanf("%d",&op3);
						}
						if(op3==2){
							vida-=10;
							printf("\nVoce passou mas perdeu 10 pontos de vida.\nVIDA: %d",vida);
						}
						else if(op3==3){
							printf("\nSua habilidade com sua magia foi a escolha certa, atravessou com facilidade.\n");
						}
					}
					else if(profissao==3){
						printf("1 - Fugir e tentar ir para outro lugar.\n2 - Tentarei atravessar usando diálogo.\n3 - Dar uma cambalhota e atravessar.\nDigite:");
						scanf("%d",&op3);
						while(op3<1||op3>3){
							printf("\nCaractere inválido. Digite: ");
							scanf("%d",&op3);
						}
						if(op3==2){
							vida-=10;
							printf("\nVocê passou mas perdeu 10 pontos de vida.\nVIDA: %d",vida);
						}
						else if(op3==3){
							printf("\nSua incrível habilidade lhe ajudou a atravessar, parabéns.\n");
						}
					}

				}while(op3==1);
				printf("%s",IntroducaoPart2);
				printf("\nApareceu uma grande fera a sua frente de surpresa, eh hora de usar suas habilidades no jokenpo para ganhar essa batalha...\n");
				/*dinamica do jokenpo*/
				do{
					printf("\n\n1 - pedra\n2 - papel\n3 - tesoura\nDigite: ");
					scanf("%d",&player);
					while(player<1||player>3){
						printf("\nCaractere inválido. Digite: ");
						scanf("%d",&player);
					}
					
					CPU = (rand() % 3) + 1;
					
					if(JogoJokenpo(player,CPU)==1){
						jokenpo++;
						printf("\nVocê ganhou !!!\n");
					}
					if(JogoJokenpo(player,CPU)==2){
						vida-=10;
						printf("\nVocê perdeu !!!\nVIDA: %d\n",vida);
					}
					if(JogoJokenpo(player,CPU)==0){
						printf("\nEmpatou !!!\n");
					}
					if(vida==0){
						printf("\n\nVOCÊ MORREU GAME OVER !!!\n\n");
						return 0;
					}
				}while(jokenpo<2);
				
				printf("\n\n\nFIM\n\n\n");
				break;
			}
			else if(escolha==3){
				return 0;
			}
		}while(escolha!=1||escolha!=2||escolha!=3);
	}while(escolha!=1||escolha!=2||escolha!=3);
	
	return 0;
}

/*função para fazer as comparações do jokenpo*/
int JogoJokenpo(int player,int CPU){
	int resultado;
	
	
	if(player==1&&CPU==1||player==2&&CPU==2||player==3&&CPU==3)
		resultado = 0;
	else if(player==1&&CPU==3)
		resultado = 1;
	else if(player==1&&CPU==2)
		resultado = 2;
	else if(player==2&&CPU==1)
		resultado = 1;
	else if(player==2&&CPU==3)
		resultado = 2;
	else if(player==3&&CPU==2)
		resultado = 1;
	else if(player==2&&CPU==1)
		resultado = 2;
	
	return resultado;
}
void MenuCriaPersonagem(){
	printf("\n1.Criar Personagem\n");
	printf("2.Iniciar Jogo(Crie um personagem primeiro)\n");
	printf("3.Sair\n");
	printf("\nDigite: ");
	scanf(" %d",&escolha);
	printf("\n***********************************\n");
}