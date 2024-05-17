#include <stdio.h>
#define TF 10
int main()
{
    int vet[TF], i, pos, TL = 0, num;
    
    printf("Write the number to insert in vector: \n");
    scanf("%d", &num);
    
    while(TL < TF && num > 0){
        pos = 0;
        
        while(pos < TL && num > vet[pos])
            pos++;
        
        for(i = TL; i > pos; i--)
            vet[i] = vet[i - 1];
        
        vet[pos] = num;
        TL++;
        
        if(TL < TF){
            printf("Write the number to insert in vector: \n");
            scanf("%d", &num);
        }
    }
    for(i = 0; i < TL; i++)
        if(i < TL - 1){
            printf("%d", vet[i]);
          
        } else {
            printf("%d\n", vet[i]);
        }
        
    printf("Write a position to exclude the value of the same: \n");
    scanf("%d", &pos);
    if(pos < TL && TL > 0){
        for(i = pos; i < TL - 1; i++){
            vet[i] = vet[i + 1];
        }
        TL--;
    }
    for(i = 0; i < TL; i++){
        printf("%d", vet[i]);
    }
    return 0;
}
