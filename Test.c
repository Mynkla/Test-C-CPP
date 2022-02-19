#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <conio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <errno.h>
#include <time.h>
#include <stdlib.h>

void dclrNdfin_Func();


struct Dimond {
  char* typ;
  int crvs ;
  int edgs;
  int facs;
};

typedef struct {
  char* fst_nam;
  char* lst_nam;
  int id;
  char rolNum[];
} Person;

int main() {
  //Escape-Sequence & print
  puts("1\t2\t3\n4\t5\t6\n7\t8\t9\n$0");
  printf("\'t'\ Horizontal Tab using \\n\\t");
  printf("\n this are the Escape Sequence");
  printf("\n\0");

  //Variable
  double dVar = 0.0;
  printf("\n the double variable value = %lf", dVar);
  bool bVar = true;
  char tru[] = "true", fls[] = "false";
  printf("\n Boolean value = %s", (bVar)?tru:fls);
  unsigned char un_cVar = 255;
  signed char sn_cVar = 120;
  printf("\n character unsighned : %d, signed : %d", un_cVar, sn_cVar);
  unsigned long long int unlglg_nVar = 18446744073709551615;
  printf("\n unsighned long long intiger : %llu", unlglg_nVar);
  const float fVar = 4.6f;
  printf("\n constant float value = %0.1f \n", fVar);

  //Input
  printf("\n Create an New Account");
  char otpt_Nam[] = "";
  printf("\n Enter User Name : ");
  gets(otpt_Nam);
  int pswrdLmt = 8;
  char otpt_Pswrd[pswrdLmt];
  printf("Create new Password : ");
  fgets(otpt_Pswrd, pswrdLmt, stdin);
  getch();

  //Math
  double mathVlu = 10;
  printf("\n Math Value = %lf", mathVlu);
  printf("\n Logarithm : %lfj", log(mathVlu));
  printf("\n Sin : %lf, Cos : %lf, Tan : %lf", sin(mathVlu), cos(mathVlu), tan(mathVlu));
  mathVlu *= -2.5;
  printf("\n Value Round : %d & Ceil : %d & Floor : %d", round(mathVlu), ceil(mathVlu), floor(mathVlu));
  printf("\n Convert : %lf to Natural number %lf:", mathVlu, fabs(mathVlu));

  //Type
  char type_cVar;
  puts("\0");
  printf("\n Enter Variable : ");
  scanf("%c", &type_cVar);
  if(isdigit(type_cVar) == 1) printf("The Value in Character : %c\n", type_cVar);
  else if(isalpha(type_cVar) == 1 && isupper(type_cVar) == 0) printf("The Value in Upper : %c\n", tolower(type_cVar));
  else if(isalpha(type_cVar) == 1 && islower(type_cVar) == 0) printf("The Value in Lower : %c\n", toupper(type_cVar));
  else printf("The Value is Blank : %d\n", isblank(type_cVar));

  //function
  dclrNdfin_Func();

  //String
  char fstNam[] = "Mayank", lstNam[] = "Kela";
  printf("\n String Length : %d", strlen(fstNam));
  printf("\n Combine String : %s", strcat(fstNam, lstNam));
  printf("\n Reverse String : %s", strrev(fstNam));
  printf("\n Characters to Symbol : %s", _strset(fstNam, '*'));

  //Arrays
  char array_2d[2][3] = {
    {'A', 'B', 'C'},
    {1, 2, 3}
  };
  for (int i = 0; i < sizeof(array_2d)/ sizeof(array_2d[0]); i++) {
    for (int j = 0; j < sizeof(array_2d[0])/ sizeof(array_2d[0][0]); j++) {
      printf("\n Element at [%d][%d] : ", i, j);
      printf("%c", array_2d[i][j]);
    }
  }
  char array_3d[2][3][4] = {
       { {'A','B','C','D'}, {'E','F','G','H'}, {'I','J','K','L'} },
       { {1,2,3,4}, {5,6,7,8}, {9,10,11,12} }
  };
  for (int i = 0; i < sizeof(array_3d)/sizeof(array_3d[0]); ++i) {
    for (int j = 0; j < sizeof(array_3d[0])/sizeof(array_3d[0][0]); ++j) {
      for (int k = 0; k < sizeof(array_3d[0][0])/sizeof(array_3d[0][0][0]); ++k) {
        printf("\n Element at [%d][%d][%d] : ",i,j,k);
        printf("%c", array_3d[i][j][k]);
      }
    }
  }

  //Structure
  struct Dimond dmnd;
  strcpy(dmnd.typ, "Natural");
  dmnd.crvs = 32;
  dmnd.edgs = 42;
  dmnd.facs = 18;

  Person prsn = {"Mayank", "Kela", 264, "0112-859-264"};

  //Random
  srand(time(0));
  int rng = 100, rnd = rand();
  puts("\0");
  printf("\n Random number : %d", (rnd % (rng+1)));

  return 0;
}

void dclrNdfin_Func() { puts("\n Function Ontput"); }
