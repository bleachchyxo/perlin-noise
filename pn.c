#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int height = 10;
int width = 10;

typedef struct {
        char name[10];
        float range[2];
        int value;
} ElevationLevel;

ElevationLevel elevation_levels[] = {
        {"sea", {0, 0.3}, 0},
        {"lowland", {0.3, 0.6}, 1},
        {"upland", {0.6, 0.8}, 2},
        {"mountain", {0.8, 1.0}, 3},
};

const int NUM_ELEVATION_LEVELS = 4;

int main()
{
        float grid[height][width];

        srand(time(NULL));

        for(int y=0;y<height;y++){
                for(int x=0; x<width;x++){
                        grid[y][x]=(float)rand()/RAND_MAX;
                        int elevation_value=0;
                        for(int i=0;i<NUM_ELEVATION_LEVELS;i++){
                                if (grid[y][x]>=elevation_levels[i].range[0] && grid[y][x] < elevation_levels[i].range[1]) {
                                        elevation_value=elevation_levels[i].value;
                                        break;
                                }
                        }
                        grid[y][x] = elevation_value;
                }
        }

        for(int y=0;y<height;y++){
                for(int x=0;x<width;x++){
                        printf("%d ", (int) grid[y][x]);
                }
                printf("\n");
        }

        return 0;

}
