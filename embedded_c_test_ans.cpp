//Exercise 1:
//Describe what each of the below pointers is, be clear and specific
//Add a comment with your answer next to each pointer
const uint32_t *p;// uint32_t is a numeric type that store 32 bits value to the pointer *p.
uint32_t *const p;//You can change 32bits value at the address stored in p.//You can’t change 32bits  address p holds.
void (*x)(int);// f is a pointer to a  void function which takes parameter of type int and returns nothing.

//Exercise 2:
//Describe what each these macros do
//Add a comment with your answer next to each macro
#define MACRO1(x,y)   ((x) |=  (1<<(y))) //  True
#define MACRO2(x,y)   ((x) &= ~(1<<(y))) //  False
#define MACRO3(x,y)   ((x) ^=  (1<<(y))) //  False  
#define MACRO4(x,y)   ((x) &   (1<<(y))) //  True
#define MACRO5(x,y)   x##y // x and y merge each other e.g- x=12,y=19 then x##y=1219:
#define MACRO6(x)     #x // # is stringize operator which is remove ("%s") e.g #define name(x) #x printf(name(NileshYadav));

//Exercise 3:
//Write down the expected output of each printf from line 48 till line 72
//Add a comment with your answer next to each printf line

// Given
// Typical 32bit CPU
// char      1 byte
// short     2 bytes
// int       4 bytes
// double    8 bytes

#include <stdio.h>
#include <stdint.h>
#include <string.h>
typedef struct
{
char c1;
short s;
int i;
char c2;
double d;
}struct_ext_t;

float float_sum(int aa, float bb)
{
		return ((float)aa + bb);
}

int main()
{
  int a;
  enum days {mon = -1, tue, wed = 6, thu, fri, sat};
  struct_ext_t my_struct;

  //We know that the address of c1 variable inside my_struct is 0x1000
  printf("LOG address of c1: %p \r\n", &my_struct.c1);    //LOG address of c1: 0x1000
  printf("LOG address of s: %p \r\n", &my_struct.s);       //log address of s:ox1002
  printf("LOG address of i: %p \r\n", &my_struct.i);  //log address of i:0x1004
  printf("LOG address of c2: %p \r\n", &my_struct.c2);//log address of c2:0x1008
  printf("LOG address of d: %p \r\n", &my_struct.d);////log address of d:0x10e0
  printf("LOG size of the struct is : %lu \r\n", sizeof(my_struct));//size of struct 24

  uint32_t *p = &my_struct;
  printf("LOG address of p: %p \r\n", p);//log address of p: 0x1000
  p++;
  printf("LOG address of p: %p \r\n", p);//log address of p:0x1004

  printf("LOG the size is: %lu \r\n", sizeof("Hello"));//log the size is: 6
  printf("LOG the length is: %lu \r\n", strlen("Hello"));//log the length is: 5

  printf("%d, %d, %d, %d, %d, %d\n", ++mon, tue, wed, thu, fri, sat);//error in line:


	a = float_sum(10, 3.14);
	printf("%d\n", a);//a=13;
}


//Exercise 4:
//Write a function that accepts a string and the maximum number of bytes the input buffer can hold.
//The function should find all occurences of the space ' ' character and replace it with a space and coma ' ,'
//Make sure to check for bad input if needed. You are allowed to include and use string.h if needed.
//Once done, please use doxyen syntax to add comments to the function definition
char *replace_spaces(char* input, size_t maximum_size_of_input_buffer)
{

}

void main()
{
  char msg[256] = "You are doing great";
  printf("%s\r\n", replace_spaces(msg, 256)); //This should print You ,are ,doing ,great
}


//Exercise 5:
//Note the below is not a coding exercise, we are expecng terminal (GIT Bash or similar) git commands
//Write down the git commands that will allow you to ticlone a repository from the following url: https://github.com/biii/embedded_c_test.git 
ans // git clone  https://github.com/biii/embedded_c_test.git
//After cloning the repo, we need to create a new branch called development and push it back

