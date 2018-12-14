#include <stdlib.h>
#include<stdio.h>
#include "function.h"
#define RED 0
#define BLUE 1
#define EVEN 0
#define ODD 1
int compare(const void *a, const void *b) {
	Floor c = *(Floor*)a;
	Floor d = *(Floor*)b;
	if(c.size>d.size){
		return -1;
	}else{
		return 1;
	}
}
// Modify the design function
int design(int floorNum, Floor floorArr[]) {
    int height, color, flag;
    int idx;
    qsort(floorArr, floorNum, sizeof(Floor), compare);
    int i;
	height = 0;
    color = (floorArr[0].color == 'B') ? BLUE : RED;
    flag = (floorArr[0].size % 2==0) ? EVEN : ODD;
    for (idx = 0; idx < floorNum; idx++) {
		if(floorArr[idx].size % 2 != flag){
			continue;
		}
        if (color == BLUE && floorArr[idx].color == 'B') {
            height++;
			flag = flag ^ 1;
            color = RED;
        }
        
        else if (color == RED && floorArr[idx].color == 'R') {
            height++;
            flag = flag ^ 1;
            color = BLUE;
        }
    }
    return height;
}
