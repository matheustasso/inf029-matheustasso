	#include <stdio.h>
	#include <stdlib.h>


	/*Escola-V01.c
	Aluno: Matheus Tasso
	Orientador: Renato Novais
	*/

	typedef struct student {
		int registernumber;
		char name[30];
		char gender;
		int birthday[10];
		int cpf;
	} register;

	typedef struct teacher {
		int registernumber;
		char name[30];
		char gender;
		int birthday[10];
		int cpf;
	} teachernumber;

	typedef struct subject {
		char name[30];
		int code;
		int semester;
		char teacher[30];
	} subject;

	void registersearcher(register n);
	void teacherlist() {
		teachernumber p;
		int i;
		int j;
		printf("Register number:\n");
		scanf("%d", &p.registernumber);
		for (i = 0; i < 30; i++) {
			printf("Teacher name:\n");
			scanf("%s", p.name);
		}
		printf("M for man / W for woman:\n");
		scanf(" %c ", &p.gender);
		
		for (j = 0; j < 10; j++) {
			printf("Teacher birthday:\n");
			scanf("%d", p.birthday);
		}
		printf("Cpf number:\n");
		scanf("%d", &p.cpf);
	}
		void subjectlist() {
		subject m;
		printf("Subject name:\n");
		scanf("%s", m.name);
		
		printf("Enter code:\n");
		scanf("%d", &m.code);
		
		printf("Enter semester:\n");
		scanf("%d", &m.semester);
		
		printf("Enter teacher:\n");
		scanf("%s ", m.teacher);
	}

	void registerstudent() {
		printf("Register student: \n");
		register n;
		
		printf("Enter register number:\n");
		scanf("%d", &n.registernumber);
		
		printf("Enter student name:\n");
		scanf("%s", n.name);
	
		printf("Enter your birthday:\n");
		scanf("%d", n.birthday);
		
		printf("Enter your cpf\n:");
		scanf("%d", &n.cpf);
		
		printf("Enter M for man or W for woman:\n");
		scanf("%c", &n.gender);
		
		getchar();
		fflush(stdin);		
		
	}

	void liststudent(register n) {
		
		printf("Student list\n");

		printf("Register number:%d\n", n.registernumber);

		printf("Name:%s\n", n.name);

		printf("Birthday:%d\n",*n.birthday);

		printf("Cpf:%d\n", n.cpf);

		printf("Gender:%c\n", n.gender);
	}

	void deletestudent() {
		printf("Delete student\n");
	}

	void studentoperation() {
		register print;
		int menu;
		printf("|| Student ||\n");
		
		do {
			printf("Select:\n");
			printf("[0] -> Back\n");
			printf("[1] -> Register\n");
			printf("[2] -> List\n");
			printf("[3] -> Delete\n");
			
			scanf("%d", &menu);
			
			switch (menu) {
				case 1:
				{
					registerstudent();
					
					break;
				}
				
				case 2:
				{
					liststudent( print);
					break;
				}
				case 3:
				{
					deletestudent();
					break;
				}
			}
		} while (menu != 0);
	}

	int main() {
		cadastro c;
		int menu;
		materia a;
		cadasProf d;
		
		do {
			printf("Select: \n");
			printf("[1] -> Student\n");
			printf("[2] -> Teacher\n");
			printf("[3] -> Subject\n");
			printf("[-1] -> Exit\n");
			scanf("%d", &menu);
			
			switch (menu) {
				case 1:
				{
					studentoperation();
					
					
					break;
				}
				case 2:
				{
					printf("Teacher options\n");
					break;
				}
				case 3:
				{
					printf("Subject options\n");
					break;
				}
			}
		} while (menu != -1);
	}
