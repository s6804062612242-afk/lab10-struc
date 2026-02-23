#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
char name[64];
int age;
}studentRecord;
//functions prototype
void displayRecord(studentRecord student);
void addAge(studentRecord *student, int age);

int main () {
	int i;
	studentRecord student[5];
	char tempName[64];
	for(i=0;i<5;i++){
		sprintf(student[i].name, "Student%d",i+1);
		student[i].age = i+15;
		addAge(&student[i], 10);
		displayRecord(student[i]);
	}
 
//	for(i = 0; i < 5; i++) {
//	//printf("%s : student%d , Age = %d\n",student[i].name, i+1,student[i].age);
//	//strcpy(student[i].name, tempName);
//	//student[i].age = i+15;
//}
////	for(i = 0; i < 5; i++){
//	
//	addAge(&student[i], 10);
//	displayRecord(student[i]);
//}
	return 0;
}
void displayRecord(studentRecord student){
	printf("Name: %s, Age: %d\n",student.name,student.age);
}
void addAge(studentRecord *student, int age){
	student->age += age ;
}
