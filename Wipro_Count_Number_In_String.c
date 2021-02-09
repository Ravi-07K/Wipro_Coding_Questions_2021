//rah23ul
//2
#include <stdio.h>

int main(void) {
    char s[10000];
    gets(s);
    int count = 0;
    for(int i = 0; s[i]!='\0';i++){
        if(s[i] < 97){
            count++;
        }
    }
    printf("%d\n",count);
  return 0;
}
