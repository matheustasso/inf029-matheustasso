#include <stdio.h>
#include <stdlib.h>
#define TAM 5

typedef struct student  {
	int registernumber;
	char name[31];
	char gender[2];
	char birthday[11];
	int cpf;
} register;

typedef struct teacher {
	int registernumber;
	char name[31];
	char gender[2];
	char birthday[11];
	int cpf;
} teachernumber;

typedef struct subject {
	char name[30];
	int code;
	int semester;
	char teacher[30];
} subject;

void registerReader(student n);
void subjectList();
void studentRegister(student studentList[TAM], int *studentCount) {
	printf("Make a student register: \n");
	
	printf("Insert a student number:\n");
	scanf("%d", &studentList[*studentCount].registerNumber);
	
	printf("Insert a student name:\n");
	scanf("%s", studentList[*studentCount].name);
	getchar();
	
	fflush(stdin);
	
	printf("Insert a birthday date:\n");
	scanf("%s", studentList[*studentCount].birthday);
	getchar();
	
	fflush(stdin);
	
	printf("Insert a cpf number:\n");
	scanf("%d", &studentList[*studentCount].cpf);
	
	printf("Insert M for man or W for Woman:\n");
	scanf("%s", studentList[*studentCount].gender);
	
	getchar();
	
	fflush(stdin);
	*studentCount = *studentCount + 1;
	
}

void studentList(student studentList[TAM], int *studentCount)
{
	printf("Student list: \n");
	for(int i=0;i<*studentCount;i++){
		printf("Student %d \n", i + 1);
		printf("Register number: %d\n", studentList[i].register);
		printf("Name: %s\n", studentList[i].name);
		printf("Birthday date: %s\n",studentList[i].birthday);
		printf("CPF number: %d\n", studentList[i].cpf);
		printf("Gender: %s\n", studentList[i].gender);
	}
	
}

/* apartir daqui depois */

void excluirAluno()
{
	printf("Fazer a exclusÃƒÂ£o do aluno\n");
}

void operacoesAluno(Aluno listaAlunos[TAM], int *contAluno)
{
	int menu;
	printf("### Aluno ####\n");
	
	do
	{
		printf("Opcao deseja ?\n");
		printf("[0] -> Voltar\n");
		printf("[1] -> Cadastrar\n");
		printf("[2] -> Listar\n");
		printf("[3] -> Excluir\n");
		
		scanf("%d", &menu);
		
		switch (menu)
		{	
			case 0:
			break;
			case 1:
			{
				cadastrarAluno(listaAlunos, contAluno);
				
				break;
			}
			
			case 2:
			{
				listarAlunos(listaAlunos, contAluno);
				break;
			}
			case 3:
			{
				excluirAluno();
				break;
			}
			default:
			printf("opcao invalida");
		}
	} while (menu != 0);
}
//começo de operações para professor//

void cadastroprofessor(cadasProf listaprofessor[TAM],int *contprofessor)
{
	
	printf("Fazer o cadastro do professor\n");
	
	printf("digite o numero de matricula:\n");
	scanf("%d", &listaprofessor[*contprofessor].matricula);
	
	printf("digite o nome do professor:\n");
	scanf("%s", listaprofessor[*contprofessor].nome);
	getchar();
	
	fflush(stdin);
	
	printf("digite data de nascimento do professor:\n");
	scanf("%s", listaprofessor[*contprofessor].datadenascimento);
	getchar();
	
	fflush(stdin);
	
	printf("digite o seu cpf:\n");
	scanf("%d", &listaprofessor[*contprofessor].cpf);
	
	printf("digite m para homem ou f para mulher:\n");
	scanf("%s", listaprofessor[*contprofessor].sexo);
	
	getchar();
	
	fflush(stdin);
	*contprofessor = *contprofessor + 1;
	
}
void listarprofessor(cadasProf listaprofessor[TAM],int *contprofessor){
	
	printf("Lista dos professores\n");
	for(int i=0;i<*contprofessor;i++){
		printf("## professor %d ##\n", i + 1);
		printf("numero de matricula:%d\n", listaprofessor[i].matricula);
		printf("nome do professor:%s\n", listaprofessor[i].nome);
		printf("data de nascimento do professor:%s\n",listaprofessor[i].datadenascimento);
		printf("cpf do professor:%d\n", listaprofessor[i].cpf);
		printf("sexo do professor:%s\n", listaprofessor[i].sexo);
		
	}
}
void pesquisarmatricula(cadasProf listaprofessor[TAM] , int *contprofessor){
	int procura;
	int sair = 1;
	
	
    do
    { 
		printf("Numero da matricula que deseja procurar \n");
		scanf("%d" ,&procura);
		
		for(int i=0; i<*contprofessor; i++){
			if(listaprofessor[i].matricula == procura)
			printf(" Matricula Correta: \n %d \n" , listaprofessor[i].matricula);
			else{
				printf(" Matricula Inexistente\n");  
			}  
		}
		printf(" Para Continuar: digite qualquer numero\n Sair: digite 0\n ");  
		scanf("%d" , &sair);  
	}while(sair!=0);
	
}

void operacoesprofessor(cadasProf listaprofessor[TAM] ,  int *contprofessor){
	
	int menu;
	printf("### professor ####\n");
	
	do
	{
		printf("Opcao deseja ?\n");
		printf("[0] -> Voltar\n");
		printf("[1] -> Cadastrar\n");
		printf("[2] -> Listar\n");
		printf("[3] -> Excluir\n");
		printf("[4] -> Listar Matricula\n");
		
		scanf("%d", &menu);
		
		switch (menu)
		{	
			case 0:
			break;
			case 1:
			{
				cadastroprofessor(listaprofessor , contprofessor);
				
				break;
			}
			
			case 2:
			{
				listarprofessor(listaprofessor ,  contprofessor);
				break;
			}
			case 3:
			{
				excluirAluno();
				break;
			}
			case 4:
			{
				pesquisarmatricula(listaprofessor,contprofessor);
				break;
			}
			default:
			printf("opcao invalida");
		}
	} while (menu != 0);
	
	
	
	
	
}

//começo com perações com matéria//
void cadastromateria(materia listamateria[TAM], int *contmateria)
{
  	printf("Fazer o cadastro da materia\n");
	
	printf("digite onome da materia:\n");
	scanf("%s", listamateria[*contmateria].nome);
	getchar();
	
	fflush(stdin);
	printf("digite o codigo da materia:\n");
	scanf("%d", &listamateria[*contmateria].codigo);
	
	
	printf("digite o semestre:\n");
	scanf("%d", &listamateria[*contmateria].semestre);
	
	
	
	printf("digite o professor que leciona:\n");
	scanf("%s", listamateria[*contmateria].professor);
	
	getchar();
	
	fflush(stdin);
	*contmateria = *contmateria + 1;
	
	
	
	
	
	
}
void listarmateria(materia listamateria[TAM],int *contmateria){
	
	printf("Lista da materia\n");
	for(int i=0;i<*contmateria;i++){
		printf("## professor %d ##\n", i + 1);
		printf("nome da materia:%s\n", listamateria[i].nome);
		printf("codigo da materia:%d\n", listamateria[i].codigo);
		printf("semestre:%d\n",listamateria[i].semestre);
		
		printf("nome do professor:%s\n", listamateria[i].professor);
		
	}
}
void operacoesmateria(materia listamateria[TAM], int *contmateria)
{
	int menu;
	printf("### materia ####\n");
	
	do
	{
		printf("Opcao deseja ?\n");
		printf("[0] -> Voltar\n");
		printf("[1] -> Cadastrar\n");
		printf("[2] -> Listar\n");
		printf("[3] -> Excluir\n");
		
		scanf("%d", &menu);
		
		switch (menu)
		{	
			case 0:
			break;
			case 1:
			{
				cadastromateria(listamateria, contmateria);
				
				break;
			}
			
			case 2:
			{
				listarmateria (listamateria, contmateria);
				break;
			}
			case 3:
			{
				excluirAluno();
				break;
			}
			default:
			printf("opcao invalida");
		}
	} while (menu != 0);
}

int main()
{
	Aluno c;
	int menu;
	materia a;
	cadasProf d;
	Aluno listaAlunos[TAM];
	int contAluno = 0;
	cadasProf listaprofessor[TAM];
	int contprofessor=0;
	materia listamateria[TAM];
	int contmateria=0;
	//menu de interaco excluir, cadastra e listaraluno
	
	do
	{
		printf("Opcao deseja ?\n");
		printf("[1] -> Aluno\n");
		printf("[2] -> Professor\n");
		printf("[3] -> Disciplina\n");
		printf("[-1] -> Sair\n");
		scanf("%d", &menu);
		
		switch (menu)
		{
			case 1:
			{
				operacoesAluno(listaAlunos, &contAluno);
				
				
				break; //todo case precisa do break
			}
			case 2:
			{
				printf("opcoes de professor\n");
				operacoesprofessor(listaprofessor,&contprofessor);
				
				break;
			}
			case 3:
			{
				printf("opcoes de disciplina\n");
				operacoesmateria(listamateria, &contmateria);
				break;
			}
		}
	} while (menu != -1);
}