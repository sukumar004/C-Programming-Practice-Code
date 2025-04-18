#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


void arithmetic_opertators();
void augmented_assignment_operators();
void userInput();
void mathFunction();
void calculateArea();
void conditionalStatements();
void switchCase();
void logicalOperators();
void nameFunction();
void ternaryOperator();
bool checkEligibility(int); // Function Prototype
void chechStrCharacters(); // String function
void forLoop(); // For Loop
void whileDoWhileLoop(); //while Do-While Loop
void breakContinue(); // Break and Continue
void arrayExamples();
void charArrayExample(); 
void arraySorting(int[],int);
void printSortArray(int[],int);
void arrayOfStruct(); // Array of Struct like objects stored in array in javascript
void enumeration();
void generateRandomNumber(); // Generate Random Number
void bitWiseOperator(); // Botwise operator


// Struct 

struct student
{
    int regNo;
    int rollNo;
    char name[25];
};

void structExample(struct student s);

int main(){
    bitWiseOperator();    
}

// Arithmetic Operators 

void arithmetic_opertators(){
    int a = 5;
    int b = 2;
    float c = a+b;  // Add
    float d = a-b; // Sub
    float e = a/(float)b; // Mul
    float f = a*b;  //Mul
    float g = a%b;  // Modulus
    float h = a + a++;  // Increment
    float i = b - b--;  //Decrement

    printf("Add %d + %d = %.2f\n",a,b,c);
    printf("Sub %d - %d = %.2f\n",a,b,d);
    printf("Div %d + %d = %.2f\n",a,b,e);
    printf("Mul %d * %d = %.2f\n",a,b,f);
    printf("Modulus %d %% %d = %.2f\n",a,b,g);
    // printf("Inc %d ++ = %.2f\n",a,h);
    // printf("dcr %d -- = %.2f\n",a,i);
}

//Augmented Assignment Operators

void augmented_assignment_operators(){
    int a = 1;
    a += 2;   // a = a + 2
    printf("a = a + 2 same as a += 2 === %d",a);

}

//User input function like using scanf() and fgets()

void userInput(){
    char name[25];
    printf("Enter your name :");
    scanf("%s", &name);
    // fgets(name, 25, stdin);
    printf("Welcome %s", name);
}

// Math Function

void mathFunction(){
    short  a = sqrt(64);  // Square root
    unsigned long long  b = pow(2,8); // power like 2^32
    short  c  = round(3.51); // Round values like from 0 to 4 equal to previous value, if >=5 then next value to be taken
    short d = ceil(3.8);  // Next value 
    short e = floor(3.8);  // Previous value
    short f = fabs(-100);  // Absolute value
    float g = log(2);
    float h = sin(2);
    float i = cos(2);
    float j = tan(2);
    printf("%d\n",a);
    printf("%lld\n",b);
    printf("%d\n",c);
    printf("%d\n",d);
    printf("%d\n",e);
    printf("%d\n",f);
    printf("%f\n",g);
    printf("%f\n",h);
    printf("%f\n",i);
    printf("%f\n",j);


}


// Small math operation function to calculate area
void calculateArea(){
    const double PI = 3.14159;
    double radius;
    printf("Enter the radius : ");
    scanf("%lf", &radius);
    double circumference = 2 * radius * PI;
    double area = PI * pow(radius,2);
    printf("Radius : %lf\n",radius);
    printf("Circumference : %lf\n",circumference);
    printf("Area : %lf\n",area);
}


// Conditional statements like if else

void conditionalStatements(){
    int age;
    printf("Enter your age?");
    scanf("%d",&age);
    if(age >= 18){
        printf("You are eligible to vote");
    } else if(age < 18){
        printf("You are not eligible to vote");
    } else {
        printf("Please enter your age");
    }
}

// Switch case

void switchCase(){
    int age;
    printf("Enter your age");
    scanf("%d",&age);
    switch(age){
    case 1:
    printf("Entered number is one(%d)",age);
    break;
    case 2:
    printf("Entered number is two(%d)",age);
    break;
    default:
    printf("Invalid number");
    }

}

// Logical Operators 

void logicalOperators(){
    int temp;
    printf("Enter the current temperature ?");
    scanf("%d",&temp);
    if(temp >= 10 && temp <= 20){   // AND operator &&
        printf("I think there must chill weather!..");
    } else if(temp > 20 || temp < 30){ // OR Operator ||
        printf("Nice temperature for playing the game..");
    } else if(temp != 0){  // NOT Operator !
        printf("Please enter 0");
    } else{
        printf("Nice good to see!!");
    }
}


//Functions

void nameFunction(char name[2]){
    printf("Hello %s",name);
}    

// Ternary Operator

void ternaryOperator(){
    int age = -18;
    (age >= 18) ? printf("You're eligible to vote") : (age < 0) ? printf("Please enter the age above 0") : printf("You're not eligibe to vote");
}

// Funtion prototype

bool checkEligibility(int age){
    return age >= 18 ? true : false;
}

// String Functions

void chechStrCharacters(char word[]){
    char concatenate[] = "Hello";
    char copied[100];
    strupr(word);  // Convert to UPPER CASE
    strlwr(word); // Convert to Lower Case
    strcat(word,concatenate); // Appende Hello to end of input from word, output like "work Hello"
    strncat(word,concatenate,2); // Append two characters from concatenate and added to end of word output like "work He"
    strcpy(copied,word);  // Here we copy the word to copied variable
    strncpy(copied,word,5); // Here we only copy how many characters we want to copy,,?
    strset(concatenate,'X'); // Here we set the character to a variable
    strnset(concatenate,'S',1); //Here we set the char with how much we want to set was defined
    strrev(concatenate); // Here we reverse the string characters
    strcpy(concatenate,copied);
    int result;
    result = strlen(concatenate); // This function gives string lwngth of the string
    result = strcmp(copied,concatenate); // It gives 0 if compare was corect else gives 1 for incorrect match
    result = strncmp(copied,concatenate,2); // Here we defined how many characters we want to compare here i give 2 char
    result = strcmpi(copied,concatenate); // It also same as strncmp but it ignores case sensitivity
    result = strnicmp(copied,concatenate,2); // It alse same as strncmo the only difference is it ignores case sensitivity

   printf("Your word is %s\n",concatenate); 
   printf("Copied : %s\n",copied);
   printf("Result : %d\n",result);
}

// For loop

void forLoop(){
    for(int i=0; i<=2; i++){
        for(int j=0; j<=2; j++){
            int varPrint = (j==0 && i==0) ?  1 : (j==1 && i==1) ? 1 : (j==2 && i==2) ? 1 : 0;
            printf("%d\t",varPrint);
        }
        printf("\n");
    }
}

// Break and Continue

void breakContinue(){
    for(int i=0; i<=5; i++){
        if(i==3){
            continue;
        }
        printf("%d\n",i);
        if(i>3){
            break;
        }
    }
}

// While and Do While Loop

void whileDoWhileLoop(){
    char name[25];
    printf("Enter your name : ");
    // scanf("%s",&name);
    fgets(name,25,stdin);
    name[strlen(name)-1] = '\0';
    while (strlen(name)==0)
    {
    printf("You didn't enter the name, please enter the name for further proceedings,,");
    fgets(name,25,stdin);
    name[strlen(name-1)] = '\0';
    }
    printf("Welcome %s\n",name);
    
}

// Array

void arrayExamples(){
    short int numbers[] = {0,1,2,3,5,5,6,7,8,9};  // Single Dimensional Array
    for(int i=0; i<sizeof(numbers)/sizeof(numbers[0]); i++){
        printf("%d\n",numbers[i]);
    }

    // Two Dimensional Array Declaration

    int twoDimensionalArray[][3] = {{1,2,3},{1,2,3},{1,2,3}};


    short int arrays[3][3];
    for(int i=0; i<sizeof(arrays)/sizeof(arrays[0]);i++){
        for(int j=0; j<sizeof(arrays[0])/sizeof(arrays[0][0]); j++){
            arrays[i][j] = j;
        }
    }
    
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d\t",arrays[i][j]);
        }
        printf("\n");
    }

    printf("size of Array : %d",(sizeof(arrays[0])/sizeof(arrays[0][0])));
}

// String Array function

void charArrayExample(){
    char names[][15] = {"SUKUMAR","ABIJITH","NESAN","LOGITH","ANANDH","CHANDRU"};  // It is also a Two Dimensional Array
    for(int i=0; i<sizeof(names)/sizeof(names[0]); i++){
        printf("%s\n",names[i]);
    }

}

// Array Sorting function

void arraySorting(int array[], int size){
    int temp;
    for(int i=0; i<size-1;i++){
        for(int j=0; j<size-i-1; j++){
            if(array[j] < array[j+1]){
                // Swaping
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

//Sorted Array Printing

void printSortArray(int array[], int size){
    for(int i=0; i<size; i++){
        printf("%d ",array[i]);
    }
}


void structExample(struct student s){
printf("Name    : %s\n",s.name);
printf("Reg NO  : %d\n",s.regNo);
printf("Roll No : %d\n",s.rollNo);
}

// Array of struct like objects stored in javascript

void arrayOfStruct(){
    typedef struct 
    {
        char name[25];
        int age;
    }person;

    person prs1 = {"SUKUMAR D",22};
    person prs2 = {"ABIJITH",22};
    person prs3 = {"NESAN",22};
    person prs4 = {"LOGITH RAJ",22};

    person persons[] = {prs1,prs2,prs3,prs4};

    for(int i=0; i<sizeof(persons)/sizeof(persons[0]); i++){
        printf("Name : %s & Age : %d\n",persons[i].name,persons[i].age);
    }

    struct newPerson
    {
        char name[25];
        int age;
    };

    struct  newPerson person1 = {"SUKU",22};
    struct  newPerson person2 = {"Nesan",22};
    struct newPerson Persons[] = {person1,person2};

    for(int i=0; i<sizeof(Persons)/sizeof(Persons[0]); i++){
        printf("Name : %s & Age : %d",Persons[i].name,persons[i].age);
    }
    
    

    
}


// Enumeration  -- these are group of constant values, meaning unchangeable value

void enumeration(){
    enum days{
        SUN=1,MON,TUE,WED,THUR,FRI,SAT
    };
    enum days today = SUN;
    switch (today)
    {
    case 1:
        printf("Today is Monday");
        break;
    case 2:
        printf("Today is Tuesday");
        break;
    case 3:
        printf("Today is Wednesday");
        break;
    case 4:
        printf("Today is Thursday");
        break;
    case 5:
        printf("Today is Friday");
        break;
    case 6:
        printf("Today is Saturday");
        break;
    default:
        printf("I am very busy come with tomorrow");
        break;
    }
}


// Random Numbers 

void generateRandomNumber(){
    srand(time(0)); // Seed the random number with current time
    int randNumber = rand();  // Gives a number between 0 - 32767
    printf("Random Number is : %d",randNumber);
}

// Bitwise Operators

void bitWiseOperator(){
    // & AND Operator
    int a = 2;    //0000 0010
    int b = 3;   //0000 0011
    int c = a&b; //0000 0010  --- 2
    printf(" a = 2, b = 3, a&b = %d\n",c);

    // | OR Operator
    int d = 2;     //0000 0010
    int e = 3;     //0000 0011
    int f = d | e; //0000 0011 -- 3
    printf(" a = 2, b = 3, a|b = %d\n",f);

    // ^ XOR Operator
    int g = 2;     //0000 0010
    int h = 3;     //0000 0011
    int i = g ^ h; //0000 0001 -- 1
    printf(" a = 2, b = 3, a^b = %d\n",i);

    // << Left Shift
    int j = 2;        // 0000 0010 ---2
    int k = j << 2;   // 0000 1000 -- 8
    printf("Left Shift : %d\n",k);

    // >> Right Shift
    int l = 2;        // 0000 0010 ---2
    int m = l >> 2;   // 0000 0000 -- 0
    printf("Right Shift : %d\n",m);

}