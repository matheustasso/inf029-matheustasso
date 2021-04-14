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

/* att */
