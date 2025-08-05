// write a C program using struct to implement the five student grade sheet 100 and 90 = A grade, 89 and 70 = B grade, 69 and 50 = C grade , other marks = Fail,
// display the cumulative grade wise list includeing student names descending order. Given a student reg.no. search in the list and display the mark details if not in the list display appropriate message


#include<stdio.h>
#include<string.h>

typedef struct student{
    int marks;
    int reg_no;
    char grade[10];
    char name[100];
}student;



void grade_allocation(student s[]){
    for(int i=0;i<5;i++){
        int m = s[i].marks;
        if(m<=100 && m>=90){
            strcpy(s[i].grade, 'A');
        }
        else if(m<=89 && m>=70){
            strcpy(s[i].grade,'B');
        }
        else if(m<=69 && m>=50){
            strcpy(s[i].grade, 'C');
        }
        else{
            char fail[10];
            strcpy(fail,"Fail");
        }
    }
}

void display_descending(student s[]){
    printf("\n GRADE SHEET\n");
    printf("Reg.No.\tName\tMarks\tGrade");

    for(int i=0;i<5;i++){
        for(int j=i;j<5;j++){
            if(s[i].marks > s[j].marks){
                int tempm = s[i].marks;
                s[i].marks = s[j].marks;
                s[j].marks = tempm;

                tempm = s[i].reg_no;
                s[i].reg_no = s[j].reg_no;
                s[j].reg_no = tempm;

                char tempn[100];
                strcpy(tempn,s[i].grade);
                strcpy(s[i].grade,s[j].grade);
                strcpy(s[j].grade,tempn);

                //char tempn[100];
                strcpy(tempn,s[i].name);
                strcpy(s[i].name,s[j].name);
                strcpy(s[j].name,tempn);

            }
        }
    }

    for(int i=0;i<5;i++){
        printf("%d\t%s\t%d\t%s",s[i].reg_no,s[i].name,s[i].marks,s[i].grade);
    }
}

void search(int r){
    int flag = 0;
    for(int i=0;i<5;i++){
        if(s[i].reg_no == r){
            printf("Reg.No : %d Name : %s Grade : %s",s[i].reg_no,s[i].name,s[i].grade);
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        printf("\nStudent details not found");
    }
}

int main(){
    student s[5];

    printf("\nEnter Reg_NO Name and Marks of students respectively\n");
    for(int i=0;i<5;i++){
        printf("Student %d : ",i+1);
        scanf("%d %s %d",&s[i].reg_no,s[i].name,&s[i].marks);
    }

    grade_allocation(s);

    display_descending(s);

    printf("\nEnter student Reg_No to search : ");
    int reg;
    scanf("%d",&reg);
    search(reg);

    return 0;


}