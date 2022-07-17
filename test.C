#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//ceci est un commentaire
int main( int argc, char * argv[]){
 //pour la création d'un evariable en c on doit toujours faire mettre un
  //"int " suivie du nom de la variable
   // int ma_variable=0;
   // int ma_variable2 = 13;
//     // Pour utiliser l'element de la variable dans notre printf,
//     // on met à l'endroit precis qu'on ou on veut implementer la variable un %d
// int old;
// double nombre= 5 % 2;
// printf("hy ! which old are you ?\n");
// scanf(" %d",&old,"\n");
// printf("i've %d years\n",old);
// printf("alright! nice to meet you\n");
// printf("your average is %lf",nombre);

///////////////////////////////////////EXERCISE 1 CONDITIONS IF ELSE AND SWITCH(CASE, BREAK)///////////////////////////////////////

// int figure_1;
// int figure_2;
// int choice;
// printf("Enter value of figure_1:\t");
// scanf("%d",&figure_1);
// printf("\nEnter value of figure_2:\t");
// scanf("%d",&figure_2);
// int result=figure_1*figure_2;
// if(result>=100  && result==100)
// {
//    printf("\n your result is  :%d alright great average",result);
// }
// else if (result<10 || result ==10)
// {
//    printf("\n your result is :%d very bad average",result);
// }

// else
// {
//    printf("\n your result is :%d  bad average \n\n",result);

// // Pour éviter d'avoir à faire des répétitions quand on teste la valeur d'une seule et même variable, 
// // il existe une autre structure que if... else. Elle s'appelle switch !

// printf("--MENU--\n1. Royal Cheese\n2. Mc Deluxe\n3. Mc Bacon\n4. Big Mac\n");
// printf("your choice is ?\t");
// scanf("%d",&choice);

// switch (choice)
// {
// case 1:
//    printf("1. Royal Cheese");
//    break;
// case 2:
//    printf("2. Mc Deluxe");
//    break;
// case 3:
//    printf("3. Mc Bacon");
//    break;
// case 4:
//    printf("4. Big Mac");
//    break;

// default:
//    break;
// }
// return 0;

// //////////////////////////////////EXERCISE 2 LOOP(WHILE ,DO...WHILE ,FOR) //////////////////////////////////

// we are going to do a simple test: we ask the user to type the number 19.
//  as long as the number is not 19, we ask for the number again.

int number;
int counter=0;
int counter_2;
// while (number!=19)
// {
// printf("your table number is ?\t");
// scanf("%d", &number);
// }

// while (counter<100)
// {
//    printf("your number is %d\n", counter);
//    counter= counter + 5;
// }

// do
// {
//    printf("take me my money%d\n", counter);
//    counter=counter +100;
// } while (counter<600);

for ( counter_2=0;counter_2<12; counter_2+=2 )
{
printf("is : %d", counter_2);
}

return 0;

}




