#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
        int height = 10;
        int width = 5;

        srand(time(NULL));

        double axis_y[height][width];

        for(int y=0;y<height;y++){
                for (int x=0;x<width;x++){
                        axis_y[y][x] = (double)rand() / RAND_MAX;
                }
        }

        for(int y=0;y<height;y++){
                for(int x=0;x<width;x++){
                        printf("%.2f ", axis_y[y][x]);
                }
                printf("\n");
        }

        return 0;

}
