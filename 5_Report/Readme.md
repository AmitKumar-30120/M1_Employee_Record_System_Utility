
# Report File

## Requirements
 
 __High level and and Low level Requirements__


__HIGH LEVEL REQUIREMENTS__


| ID    |                    DESCRPTION                                       |CATEGORY|   STATUS  |
|-------|---------------------------------------------------------------------|--------|-----------|
| HR01  |  The Application should allow user to make a choice between 1 to 5. |Textual |IMPLEMENTED|   
| HR02  |  The Application should allow user to  enter info.                  |Textual |IMPLEMENTED|
| HR03  |  The Application should allow user to list all the employee records.|Textual |IMPLEMENTED| 
| HR04  |  The Application should allow user to modify the employee records.  |Textual |IMPLEMENTED|
| HR05  |  The Application should allow user to delete employee records       |Textual |IMPLEMENTED|     
| HR06  |  The Application should allow user to exit from application.        |Textual |IMPLEMENTED| 



__LOW LEVEL REQUIREMENTS__



| ID    |                    DESCRPTION                                                            | HLR ID |   STATUS  |
|-------|------------------------------------------------------------------------------------------|-------|-----------|
| HR01  |  The application will ask user tochoose between 1 to 5                                   |  HR01 |IMPLEMENTED| 
|       |   Choices:
|       |     1.Add Record
|       |     2. List Record
|       |     3. Modify Record
|       |     4. Delete Record
|       |     5. Exit                                                              
| HR02  |  The application will ask user to enter info such as Enter name, Enter Salary, Enter Age.| HR02  |IMPLEMENTED|
| HR03  |  The application will show all details of employees.                                     | HR03  |IMPLEMENTED| 
| HR04  |  The application will ask user enter name (for modifying).                               | HR04  |IMPLEMENTED|
| HR05  |  The application will ask user to enter name (for deleting).                             | HR05  |IMPLEMENTED|     
| HR06  |  The user can exit from application by choosing 5.                                       | HR06  |IMPLEMENTED| 

## Architecture/Design

 * Add UML Diagrams
 
 For information about UML Diagrams refer: UML Diagrams
 
# Tools

[Draw.io](https://app.diagrams.net/)

[Creately](https://creately.com/?msclkid=4a851761ddf41773ed1575657457a748)

or any other free tools




__Behavioral Diagram__

   Activity Diagram
   
    ->High level 
    -->Low level
    
__Strutural Diagram__
    
    Class Diagram
       --> high level 
       
 ## Implementation

|     Folder    |         Desscription                   |
|----------     |----------------------------------------|
|      inc      |     Contains all the header files      |
|      src      |     Contains all the source code files |
|      test     |     Contains all the unit testing files|

 ## TEST PLAN

| TEST ID  |   OBJECTIVE           | INPUT DATA        | EXPECTED OUTPUT  | ACTUAL OUTPUT  | STATUS |
|----------|-----------------------|-------------------|------------------|----------------|--------|
|   TC_01  |   for entering name   | enter name: abc   |   abc            |   abc          |  PASS  |        |
|   TC_02  |   for entering name   | enter name: abc   |   abc            |       -        |  FAIL  |     
|   TC_03  |   for entering age    | enter age: 12     |   12             |   12           |  PASS  |     
|   TC_04  |   for entering age    | enter age: 12     |   12             |       -        |  FAIL  |     
|   TC_05  |   for entering salary | enter salary: 5000|   5000           |   5000         |  PASS  |     
|   TC_06  |   for entering salary | enter salary: 5000|   5000           |      -         |  FAIL  |     
|   TC_07  |   for listing record  | abc 12 5000       |  abc 12 5000     |  abc 12 5000   |  PASS  |     
|   TC_08  |   for listing record  | abc 12 5000       |  abc 12 5000     |  abc 5000 12   |  Fail  |  
|   TC_09  |   for listing record  | abc 12 5000       |  abc 12 5000     |  12 abc 5000   |  FAIL  |  
|   TC_10  |   for deleting record | abc               |  abc             |  xyz           |  FAIL  |  
|   TC_11  |   for deleting record | abc               |  abc             |  abc           |  PASS  | 

# Output Images

![Screenshot 2022-02-11 145452](https://user-images.githubusercontent.com/98867277/153570345-3fb46fec-07d7-467c-b537-0ee64aaa3efe.jpg)


![Screenshot 2022-02-11 145825](https://user-images.githubusercontent.com/98867277/153570415-7e1a787c-3d6b-4d7d-b71c-3a92e0c24765.jpg)

![Screenshot 2022-02-11 150951](https://user-images.githubusercontent.com/98867277/153570454-70c44e4e-a4f4-4507-9d4a-5bd1b09e1e92.jpg)

![Screenshot 2022-02-11 152057](https://user-images.githubusercontent.com/98867277/153570507-ea564ed1-2e0c-401c-b695-d34e37331cc9.jpg)

