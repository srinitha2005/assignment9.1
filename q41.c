#include<stdio.h>
#include<string.h>

struct data{
    char name[50];
    int reg;
    char branch[30];
    float cgpa;
}data;

 struct data s[10];

void search(struct data s[],int num ){
    for (int i = 0; i < 10; i++)
    {
        if (s[i].reg==num)
        {
            printf("The data of student of reg no. %d is:-",num);
            printf("\nName-%s\nBranch-%s\nCGPA-%.2f",s[i].name,s[i].branch,s[i].cgpa);
        return;
        }
    }
        printf("No stdent of this regestration number found!!!");
}


int main(){

    // printf("enter the data:: \n");
for (int i = 0; i < 10; i++)
    {
        printf("Enter registration number of %d student: ",i+1); 
        scanf("%d",&s[i].reg);
        printf("Enter name: ");
          getchar();
        gets(s[i].name);
        printf("Enter branch: ");
        gets(s[i].branch);
        printf("Enter CGPA: ");
        scanf("%f",&s[i].cgpa);
    }


// char str[50];
//     for(int i=0;i<10;i++){
//     printf("enter name of student %s: \n",i+1);
//     fgets(data.name,sizeof(data.name),stdin);
//     strcpy(s[i].name,str);

//     printf("enter reg number of student %d: ",i+1);
//     scanf("%d",&data.reg);

//     printf("enter branch of student %s: \n",i+1);
//     fgets(data.branch,sizeof(data.branch),stdin);

//      printf("enter cgpa of student %f: ",i+1);
//     scanf("%2f",&data.cgpa);;
// }
int num;
printf("enter registration number of the student you like to find\n");
scanf("%d",&num);
search(s,num);
return 0;
}