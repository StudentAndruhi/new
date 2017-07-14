#include "main.h"
Map::Map(int n, int m ){
    int i,j;
    x_max=m;
    y_max=n;
    p = (int*) malloc(n*m*sizeof(int));
    for(i=0;i<n;i++){
        for(j=0;j<m;j++)
        *(p+i*m+j)=0;
    }
}

void Map::show(){
    int i,j;
    for(i=0;i<y_max;i++){
        for(j=0;j<x_max;j++){
            printf("%d", *(p+i*x_max+j));
        }
        printf("\n");
    }
}

void Map::save(char *fname){
    FILE *fp;
    fp=fopen(fname, "w");
    if(fp==NULL){
        printf("Cant open file");
        exit(1);
    }
    int i,j;
    fprintf(fp,"P1\n");
    fprintf(fp,"%d %d\n",(y_max),(x_max) );
    for(i=0;i<y_max;i++){
        for(j=0;j<x_max;j++){
            fprintf(fp, "%d", *(p+i*x_max+j));
    }
    fprintf(fp,"\n");
    }
    fclose(fp);
}

void Map::drawPoint(int x,int y, int color){
   *(p+(y_max-1-y)*x_max+x)=color;
}

void Map::assosiate(float t_lat1, float t_longt1, float t_lat2, float t_longt2){
    lat1 = t_lat1;
    lat2 = t_lat2;
    longt1 = t_longt1;
    longt2 = t_longt2;
}

float Map::return_coord(int t){
    switch (t){
    case 1:
        return lat1;
        break;
    case 2:
        return longt1;
        break;
    case 3:
        return lat2;
        break;
    case 4:
        return longt2;
        break;
    }
        void Map::load( char *fname){
FILE *fp;
fp=fopen(fname,"r");
if(fp==NULL){
printf("Cant open file");
exit(1);
}
char buf[100];
    (for int k=0; k<10; k++)
        fscaf(fp,"%c", &buf);
    int i,j;
    for(i=0;i<y_max;i++){
        for(j=0;j<x_max;j++)
            fscanf(fp,"%d", *(p+i*x_max+j));
}
}
}
