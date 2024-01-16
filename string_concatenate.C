#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
 main(){

     int i ,j;
     static char first_name[30]={"HELLO"};
     static char second_name[30]={"WORLD"};
     char name[50];

     for(i=0; first_name[i]!='\0';i++){
        name[i]=first_name[i];
     }
     name[i]= ' ';

     for(j=0;second_name[j]!=0;j++){
        name[i+j+1]=second_name[j];
}
name[i+j+1]='\0';
printf("%s\n",name);
}
