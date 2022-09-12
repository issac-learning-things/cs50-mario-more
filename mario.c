#include <stdio.h>
#include <stdbool.h>

void stairs(int height){
    
    int hash_num = 0;
    int space_num = height;
    // For each row
    for(int x = 0; x != height; x++)    {
        
        //Increase hash_num from 0 until it reaches height.
        if(hash_num != height){
            hash_num++;
        }
        
        // Decrease space_num from it's initial value (height) until 0
        if(space_num != 0){
            space_num--;
        }
        
        // Set z to number of spaces necessary, run until z = 0 (enough spaces printed)
        for(int z = space_num; z != 0; z--){
            printf(" ");
        } 
        
        // Set y to zero, run however may times as there are necessary #s
        for(int y = 0; y != hash_num; y++ ){
            printf("#");
        }
        
        printf("  ");
        
        // Set y to zero, run however may times as there are necessary #s
        for(int y = 0; y != hash_num; y++ ){
            printf("#");
        }
        
        // New line once spaces and # done
        printf("\n");
    }
}



int main(void){
    int height = 0;
    bool valid_height = false;
    while(valid_height == false){
        printf("Height: ");
        scanf("%i", &height);
        if(height <= 8 && height >= 1){
            valid_height = true;
        }
    }

    stairs(height);
}