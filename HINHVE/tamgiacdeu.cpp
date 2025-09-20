#include <iostream> 
#include <iomanip>
using namespace std; 
 
int main() {
   int n,i,j;
 
   n = 6;   // khai bao so hang.
 
   printf("Ve tam giac sao deu:\n");
   for(i = 1; i <= n; i++) {
      for(j = 1; j <= n-i; j++)
         printf(" ");
 
      for(j = 1; j <= i; j++)
         printf("* ");
 
      printf("\n");
   }
   return 1;
}
