#include<stdio.h>
#include<string.h>

typedef enum name
{
	SIYA, OVI, LARIA, ABHI, YOGESH
}name_t;

typedef struct student
{
	char company[20];
	char age[20];
	name_t name;
	int id;
}stu_t;

char *get_name(name_t c)
{
	switch(c)
	{
		case SIYA: return "SIYA";
		case OVI: return "OVI";
		case LARIA: return "LARIA";
		case ABHI: return "ABHI";
		case YOGESH: return "YOGESH";
	}
	return NULL;
	}

const char *file = "stu.txt";
void accept_stu(stu_t *c);
void print_stu(stu_t *c);

void add_stu(stu_t *c);
void display_stu(void);
void search_stu(stu *m);
void edit_stu(char *m, double p);
void delete_stu(char *m);

int main(void)
{
	int choice;
	stu_t s1;
	char company[20];
	int id;

	do
	{
		printf("------------------\n");
		printf("0. Exit\n");
		printf("1. Add student\n");
		printf("2. Display all students\n");
		printf("3. Search student\n");
		printf("4. Edit student\n");
		printf("5. Delete student\n");
		printf("Enter your choice : ");
		scanf("%d", &choice);
		printf("------------------\n");
		switch(choice)
		{
			case 1:
				accept_student(&s1);
				add_stu(&c1);
				break;

			case 2:
				display_students();
				break;

			case 3:
				printf("Enter company to be searched : ");
				scanf("%s", company);
				search_stu(company);
				break;

			case 4:
				printf("Enter age to be known : ");
				scanf("%s", company);
				printf("Enter new id : ");
				scanf("%d", &id);
				edit_stu(company, id);
				break;

			case 5:
				printf("Enter s------------\n");

		tudent to be deleted : ");
				scanf("%s", company);
				delete_stu(company);
				break;

		}


	}while(choice != 0);
	return 0;
}

void accept_stu(stu_t *c)
{
	printf("Enter student details : (company,age,id) : ");
	scanf("%s %s %d %d", c->company, c->age, (int *)&c->color, &c->id);
}

void print_stu(stu_t *c)
{
	printf("%s %s %s %d\n", c->company, c->age, get_color(c->color), c->id);
}

void add_stu(stu_t *c)
{
	FILE *fp = fopen(file, "ab");
	fwrite(c, sizeof(stu_t), 1, fp);
	fclose(fp);
}

void display_stu(void)
{
	FILE *fp = fopen(file, "rb");

	stu_t c;
	printf("students List : \n");
	while(fread(&c, sizeof(car_t), 1, fp) != 0)
		print_students(&c);

	fclose(fp);
}

void search_stu(char *m)
{
	FILE *fp = fopen(file, "rb");

	stu_t c;
	while(fread(&c, sizeof(car_t), 1, fp) != 0)
		if(!strcmp(m, c.company))
		{
			print_students(&c);
			break;
		}
	fclose(fp);
}

void edit_stu(char *m, int i)
{
	FILE *fp = fopen(file, "rb+");

	stu_t c;
	while(fread(&c, sizeof(car_t), 1, fp) != 0)
		if(!strcmp(m, c.company))
		{
			c.id = i;
			fseek(fp, -sizeof(car_t), SEEK_CUR);
			fwrite(&c, sizeof(car_t), 1, fp);
			break;
		}
	fclose(fp);
}

void delete_stu(char *m)
{
	FILE *fp = fopen(file, "rb");
	FILE *tfp = fopen("temp.txt", "wb");
	stu_t c;
	while(fread(&c, sizeof(stu_t), 1, fp) != 0)
	{
		if(strcmp(m, c.company))
		{
			fwrite(&c, sizeof(car_t), 1, tfp);
		}
	}
	fclose(tfp);
	fclose(fp);
	rename("temp.txt", file);
}

