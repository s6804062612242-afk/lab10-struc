#include <stdio.h>
// struct Person people[MAX_PEOPLE]
//       = { { "Ram", 21 }, { "Rohit", 25 } };
typedef struct{
		char name[64]; //student name
		char ans[10];  //answer sheet
	}Student ;

int checkscore(Student *s);

	
	
int main() {
Student std[6]= {{"AAA",{'A','B','A','C','C','D','E','E','A','D'}},//7
        		{"BBB",{'D','B','A','B','C','A','E','E','A','D'}},//6
        		{"CCC",{'E','D','D','A','C','B','E','E','A','D'}},//5
        		{"DDD",{'C','B','A','E','D','C','E','E','A','D'}},//4
        		{"EEE",{'A','B','D','C','C','D','E','E','A','D'}},//8
        		{"FFF",{'B','B','E','C','C','D','E','E','A','D'}}//7

    };
    
checkscore(&std);


}
int checkscore(Student *std){
        char charkeys[10]={'D','B','D','C','C','D','A','E','A','D'};
	int i,score=0;
   for(int j = 0;j<6;j++){
    for(i=0;i<10;i++) {
   		if (std->ans[i]==charkeys[i])
			score++;
    
	}
    printf("%s => %d\n", std->name, score);//7
    std++;
    score=0;
   }
}
    

/*    char ans[8][10]={
        	{'A','B','A','C','C','D','E','E','A','D'},//7
			{'D','B','A','B','C','A','E','E','A','D'},//6
			{'E','D','D','A','C','B','E','E','A','D'},//5
			{'C','B','A','E','D','C','E','E','A','D'},//4
			{'A','B','D','C','C','D','E','E','A','D'},//8
			{'B','B','E','C','C','D','E','E','A','D'},//7
			{'B','B','A','C','C','D','E','E','A','D'},//7
			{'E','B','E','C','C','D','E','E','A','D'}};//7
*/
