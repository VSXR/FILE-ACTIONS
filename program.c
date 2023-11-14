//MADE BY VSXR :)

//LIBRARIES
#include <stdio.h> //IN / OUT OPERATIONS
#include <string.h> //MANIPULATE STRINGS
#include <conio.h> //IN / OUT OPERATIONS IN DOS SYSTEMS AND WINDOWS
#include <stdbool.h> //BOOLEANS
#include <stdlib.h> //MEMORY MANAGEMENT
#include <ctype.h> //FUNCTIONS TO WORK WITH CHARACTERS 

#define MAX_FILES 10 //MAXIMUM OF FILES ALLOWED
#define MAX_SIZE 31 //MAXIMUM OF CHARACTERS PER FILE ALLOWED

//FUNCTION DECLARATION
void clearScreen(); //CLEARS THE SCREEN CONTENT
void Menu(); //MANAGES SHOWS THE MENU, VALIDATIONS AND ALL THE PROGRAM FUNCTIONS
void Create(char *fileMax[MAX_FILES], char *fileName[MAX_SIZE]); //CREATES A NEW .TXT FILE
void Delete(char *fileMax[MAX_FILES], char *fileName[MAX_SIZE]); //DELETES AN EXISTANT .TXT FILE
char Search(); //SEARCHES SPECIFIC WORDS OR PHRASES THAT THE USER INTRODUCES IN THE FILE AND SHOWS THEM ON THE SCREEN
char Write(); //WRITES IN THE FILE AND SHOWS IT ON THE SCREEN
char OverWrite(); //OVERWRITES IN THE FILE AND SHOWS IT ON THE SCREEN
char Read(); //READS IN THE FILE AND SHOWS IT ON THE SCREEN


//MAIN PROGRAM
int main() {
    Menu();
    printf("-- PROGRAM FINISHED --");
    return 0;
}

//FUNCTIONS
void clearScreen() {
    system("cls"); //FOR MAC OR LINUX USE system("clear");
    // clrscr();
}

void Menu(){
    int i, option;
    char response[4];
    char *fileName[MAX_SIZE];
    int *fileMax[MAX_FILES];

    do
    {   
        printf("\n");
        printf("    FILE ACTIONS MENU\n");
        printf("    -------------------\n");
        printf("    1. CREATE A NEW FILE\n");
        printf("    2. DELETE A FILE\n");
        printf("    3. SEARCH IN A FILE\n");
        printf("    4. WRITE A FILE\n");
        printf("    5. OVERWRITE A FILE\n");
        printf("    6. READ A FILE\n");
        printf("\n");
        printf("SELECT AN OPTION: ");
        scanf("%d", &option);

        while((option >= 1 && option <= 6) != option){  //WHILE OPTION ISN'T A NUMBER BETWEEN 1 - 6 ==> REPEAT IT AGAIN
            printf("ERROR, SELECT AN OPTION BETWEEN 1 - 6: ");
            scanf("%d", &option);
        }

        //WHEN THE OPTION IS VALIDATED, IT WILL DISPLAY THE MENU OPTION AND EXECUTE THIS ONE
        switch(option){
            case 1:
                clearScreen();
                printf(">> 1. CREATE A NEW FILE <<\n");
                
                Create(fileMax[MAX_FILES], fileName[MAX_SIZE]);
                break;
            case 2:
                clearScreen();
                printf(">> 2. DELETE A FILE <<\n");
                Delete(fileMax[MAX_FILES], fileName[MAX_SIZE]);
                break;
            case 3:
                clearScreen();
                printf(">> 3. SEARCH IN A FILE <<\n");
                Search();
                break;
            case 4:
                clearScreen();
                printf(">> 4. WRITE A FILE <<\n");
                Write();
                break;
            case 5:
                clearScreen();
                printf(">> 5. OVERWRITE A FILE <<\n");
                OverWrite();
                break;
            case 6:
                clearScreen();
                printf(">> 6. READ A FILE <<\n");
                Read();
                break;
            default:
                printf("\nINVALID OPTION, PLEASE SELECT A VALID OPTION BETWEEN 1 - 6\n");
        }
        
        printf("DO YOU WANT TO CONTINUE? (YES / NO): "); //VALIDATE IF THE USER WANTS TO KEEP RUNNING THE PROGRAM
        scanf(" %s", response);

        for (i = 0; response[i]; i++){
            response[i] = toupper(response[i]);
        }
    } while(strcmp(response, "YES") != 0); //strcmp() RETURNS 0 IF THE STRINGS ARE IDENTICAL
}

void Create(char *fileMax[MAX_FILES], char *fileName[MAX_SIZE]){ //TODO: MANAGE WHITE SPACES, ADD THE NEW FILE TO A LIST OF NAME FILES
    int i;

    //BECAUSE THE FILES ARE NOT CREATED THEY ARE NULL <======================= MIRAR
    for (i = 0; i < fileMax[MAX_FILES]; i++){
        fileMax[MAX_FILES] == NULL;
    }

    printf("ENTER THE NAME OF THE NEW FILE (MAXIMUM OF %d CHARACTERS): ", MAX_SIZE - 1); //READS UP TO 30 CHARACTERS TO LEAVE THE 31 TO '\0'
    scanf("%30s", &fileName);

    *fileName[MAX_SIZE] = (int *)malloc()

    

    printf("THE NAME OF THE FILE IS: %s", fileName);
}
void Delete(char *fileMax[MAX_FILES], char *fileName[MAX_SIZE]){ //TODO: MANAGE WHITE SPACES, ERRASE THE FILE THAT HAS BEEN DELETED FROM THE LIST OF FILES, SEARCH THE FILE AND SEE IF EXISTS 
    int i;
    char nameToSearch[MAX_SIZE];
    bool itExists = false;

    printf("ENTER THE NAME OF THE FILE YOU WANT TO DELETE (MAXIMUM OF %d CHARACTERS): ", MAX_SIZE - 1);
    scanf("%30s", &nameToSearch[MAX_SIZE]);
    
    //VALIDATE THAT THE NAME THAT HAS BEEN SEARCHED EXISTS

    for (i = 0; i < fileMax[MAX_FILES]; i++){
        printf("DELETING FILE... \nNAME OF THE FILE THAT HAS BEEN DELETED: %s \nDELETED!", fileName);
        itExists = true;
    }
    
    if (itExists){
        printf("SORRY THE FILE %s DOESN'T EXISTS!\n TRY AGAIN ENTERING A DIFERENT NAME: ", nameToSearch);
        scanf("&s", &nameToSearch[MAX_FILES]);
    }
}

//THIS FUNCTIONS ARE RETURNING A DATA BECAUSE WE WANT TO SEE THE TEXT THAT WE ARE WORKING WITH
char Search(){

}
char Write(){

}
char OverWrite(){

}
char Read(){

}