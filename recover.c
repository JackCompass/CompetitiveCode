#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
typedef uint8_t BYTE;
// Driver funtion
int main(int argc, char *argv[])
{
    // An array to store the file name of different JPG image.
    char filename[5];
    // A Buffer to store the content ( 512 bytes ) of the card.raw file.
    BYTE buffer[520];
    // image counter
    int i = 0;
    
    FILE *file,*xfile=NULL;
    
    // Checking for the valid input or not
    if ( argc != 2 )
    {
        printf("Usage: ./recover image\n");
        return 1;
    }
    
    file = fopen(argv[1],"rb");
    
    // Checking weathter file is empty.
    if ( file == NULL )
    {
        printf("File is empty.\n");
        return 1;
    }
    
    // Reading the content of the file.
    // Writing the content of the file once the desired condition is fullfilled.
    while (fread(buffer,512,1,file))
    {
        
        // Examining the condintion for the jpg file.
        if(buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff  && (buffer[3] & 0xf0) == 0xe0)
        {
            
            // Creating file name in real time.
            sprintf(filename,"%03d.jpg",i);
            
            // Incrementing the Image count.
            i++;
            
            // Opening file to write the content of the provided file.
            xfile = fopen(filename,"a");
            
            // Checking weather the flle is created or not
            if ( xfile == NULL )
            {
                printf("File can't be opened.\n");
                return 1;
            }
        }
        
        // Condition when to start writng in the file.
        if(xfile != NULL)
        {
            fwrite(buffer,512,1,xfile);
        }
    }
    return 0;
}
