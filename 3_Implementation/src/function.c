/**
 * @file function.c
 * @author amit.kumar7@ltts.com
 * @brief 
 * @version 0.1
 * @date 2022-02-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "main.h"
void flush()
{
    int char1;
    while ((char1 = getchar()) != '\n' && char1 != EOF);
}
    long int record_size; /// size of each record of employee
     FILE *fp, *ft; /// file pointers
    char other, option;
    struct emp{
        char name[40]; ///name of employee
        int age; /// age of employee
        float bs; /// basic salary of employee
    };
    struct emp entity; /// structure variable creation
 
 void  Add_Record(){
     fseek(fp,0,SEEK_END); /// search the file and move cursor to end of the file
                                        /// here 0 indicates moving 0 distance from the end of the file
                other = 'y';
                while(other == 'y'){ /// if user want to add another record
                    flush();
                    printf("\nEnter employee name: ");
                    fgets(entity.name, 40, stdin);
                    printf("\nEnter emp age: ");
                    scanf("%d", &entity.age);
                    printf("\nEnter emp basic salary: ");
                    scanf("%f", &entity.bs);
 
                    fwrite(&entity,record_size,1,fp); /// write the record in the file
 
                    printf("\nAdd another record(y/n) ");
                    fflush(stdin);
                    scanf("\n%c", &other);
                }
 }