#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
int main(){
    srand(time(NULL));
    int table[4][4]={{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
	int i,j,k,score=0,hscore=0,arrow;
	printf("Press : E -> Exit , X -> reset\n");
	printf("\n");
    i=rand()%4;
    j=rand()%4;
    table[i][j]=2;
    i=rand()%4;
    j=rand()%4;
    table[i][j]=2;
    printf(" ___________________________\n");
    for(i=0;i<4;i++){
        printf("|");
        for(j=0;j<4;j++){
            if(table[i][j]!=0){
                printf("_%4d_|",table[i][j]);
            }
            else{
                printf("______|",table[i][j]);
            }
        }
        printf("\n");
    }
    printf("\n");
    printf("SCORE : %d\n",score);
    printf("\n");
    printf("Enter the direction of the arrow: ");
    while(table[i][j]!=2048 && arrow!='e'&& arrow!='E'){
        arrow=getch();
        if(arrow==75){ //sola dogru kaydirma
            for(i=0;i<4;i++){
                for(k=0;k<4;k++){
                    for(j=3;0<j;j--){
                        if(table[i][j]==table[i][j-1]){
                            table[i][j-1]=table[i][j]*2;
                            score=score+table[i][j-1];
                            table[i][j]=0;
                        }
                        if(table[i][j-1]==0){
                            table[i][j-1]=table[i][j];
                            table[i][j]=0;
                        }
                    }
                }
            }
            i=rand()%4;
            j=rand()%4;// random sayinin gelmesi
            if(table[i][j]==0){
                table[i][j]=rand()%2+5;
            }
            printf(" ___________________________\n");
            for(i=0;i<4;i++){
                printf("|");
                for(j=0;j<4;j++){// matrisin ekrana yazilmasi
                    if(table[i][j]!=0){
                        if(table[i][j]==5 ){
                            table[i][j]=table[i][j]-3;
                            printf("_%4d*|",table[i][j]);
                        }
                        else if(table[i][j]==6 ){
                            table[i][j]=table[i][j]-2;
                            printf("_%4d*|",table[i][j]);
                        }
                        else  {
                            printf("_%4d_|",table[i][j]);
                        }
                    }
                    else{
                        printf("______|",table[i][j]);
                    }
                }
 				printf("\n");
            }
            printf("\n");
            printf("SCORE: %d\n",score);// puanin yazilmasi
            if(hscore<score)
                hscore=score;
            printf("HIGEST SCORE : %d\n",hscore);//yuksek puanin yazdirilmasi
            printf("\n");
            printf("Enter the direction of the arrow: ");
    }
        else if(arrow==77){// saga dogru kaydirma
            for(i=0;i<4;i++){
                for(k=0;k<4;k++){
                    for(j=0;j<3;j++){
                        if(table[i][j]==table[i][j+1]){
                            table[i][j+1]=table[i][j]*2;
                            score=score+table[i][j+1];
                            table[i][j]=0;
                        }
                        else if(table[i][j+1]==0){
                            table[i][j+1]=table[i][j];
                            table[i][j]=0;
                        }
                    }
                }
            }
            i=rand()%4;
            j=rand()%4;
            if(table[i][j]==0){// random sayinin gelmesi
                table[i][j]=rand()%2+5;
            }
            printf(" ___________________________\n");
            for(i=0;i<4;i++){
                printf("|"); // matrisin ekrana yailmasi
                for(j=0;j<4;j++){
                    if(table[i][j]!=0){
                        if(table[i][j]==5 ){
                            table[i][j]=table[i][j]-3;
                            printf("_%4d*|",table[i][j]);
                        }
                        else if(table[i][j]==6 ){
                            table[i][j]=table[i][j]-2;
                            printf("_%4d*|",table[i][j]);
                        }
                        else  {
                            printf("_%4d_|",table[i][j]);
                        }
                    }
                    else{
                        printf("______|",table[i][j]);
                    }
                }
                printf("\n");
            }
            printf("\n");
            printf("SCORE: %d\n",score);// puanin yazilmasi
            if(hscore<score)
                hscore=score;
            printf("HIGEST SCORE : %d\n",hscore);//yuksek uanin yazilmasi
            printf("\n");
            printf("Enter the direction of the arrow: ");
        }
        if(arrow==80){// matrisin asagi dogru kaydirilmasi
            for(k=0;k<4;k++){
                for(i=0;i<3;i++){
                    for(j=0;j<4;j++){
                        if(table[i][j]==table[i+1][j]){
                            table[i+1][j]=table[i][j]*2;
                            score=score+table[i+1][j];
                            table[i][j]=0;
                        }
                        if(table[i+1][j]==0){
                            table[i+1][j]=table[i][j];
                            table[i][j]=0;
                        }
                    }
                }
            }
            i=rand()%4;
            j=rand()%4;//rasgele sayinin gelmesi
            if(table[i][j]==0){
                table[i][j]=rand()%2+5;
            }
            printf(" ___________________________\n");
            for(i=0;i<4;i++){
                printf("|");
                for(j=0;j<4;j++){//matrisin ekrana yazdirilmasi
                    if(table[i][j]!=0){
                        if(table[i][j]==5 ){
                            table[i][j]=table[i][j]-3;
                            printf("_%4d*|",table[i][j]);
                        }
                        else if(table[i][j]==6 ){
                            table[i][j]=table[i][j]-2;
                            printf("_%4d*|",table[i][j]);
                        }
                        else {
                        printf("_%4d_|",table[i][j]);
                        }
                    }
                    else{
                        printf("______|",table[i][j]);
                    }
                }
 				printf("\n");
            }
            printf("\n");
            printf("SCORE: %d\n",score);// puanin ekrana yazdirilmasi
            if(hscore<score)
                hscore=score;
            printf("HIGEST SCORE : %d\n",hscore);//yuksekpuanin ekrana yazdirilmasi
            printf("\n");
            printf("Enter the direction of the arrow: ");

        }
        else  if(arrow==72){//matrisin yukariya dogru kaydirilmasi
            for(k=0;k<4;k++){
                for(i=3;i>0;i--){
                    for(j=0;j<4;j++){
                        if(table[i][j]==table[i-1][j]){
                            table[i-1][j]=table[i][j]*2;
                            score=score+table[i-1][j];
                            table[i][j]=0;
                        }
                        if(table[i-1][j]==0){
                            table[i-1][j]=table[i][j];
                            table[i][j]=0;
                        }
                    }
                }
            }
            i=rand()%4;
            j=rand()%4;
            if(table[i][j]==0){// rasgele sayinin gelmesi
                table[i][j]=rand()%2+5;
            }
            printf(" ___________________________\n");
                for(i=0;i<4;i++){
                    printf("|");
                    for(j=0;j<4;j++){ //matrisin ekrana yazdirilmasi
                        if(table[i][j]!=0){
                            if(table[i][j]==5 ){
                                table[i][j]=table[i][j]-3;
                                printf("_%4d*|",table[i][j]);
                            }
                            else if(table[i][j]==6 ){
                                table[i][j]=table[i][j]-2;
                                printf("_%4d*|",table[i][j]);
                            }
                            else {
                                printf("_%4d_|",table[i][j]);
                            }
                        }
                        else{
                            printf("______|",table[i][j]);
                        }
                    }
                    printf("\n");
                }
                printf("\n");
                printf("SCORE: %d\n",score);//scorun ekrana yazdirilmasi
                if(hscore<score)
                    hscore=score;
                printf("HIGEST SCORE : %d\n",hscore);//yuksek scorun ekrana yazdirilmasi
                printf("\n");
                printf("Enter the direction of the arrow: ");
        }
        printf("\n");
        if(arrow=='X'|| arrow== 'x'){//x tusuna basildigona yeni oyunun baslamasi
            for(i=0;i<4;i++){
                for(j=0;j<4;j++){
                    table[i][j]=0;
                }
            }
            score=0;
            i=rand()%4;
            j=rand()%4;
            table[i][j]=2;
            i=rand()%4;
            j=rand()%4;
            table[i][j]=2;
            printf(" ___________________________\n");
            for(i=0;i<4;i++){
                printf("|");
                for(j=0;j<4;j++){
                    if(table[i][j]!=0){
                        printf("_%4d_|",table[i][j]);
                    }
                    else{
                        printf("______|",table[i][j]);
                    }
                }
                printf("\n");
            }
            printf("\n");
            printf("SCORE : %d\n",score);
            if(hscore<score)
                hscore=score;
            printf("HIGEST SCORE : %d\n",hscore);
            printf("\n");
            printf("Enter the direction of the arrow: ");
            }
            for(i=0;i<4;i++){
                for(j=0;j<4;j++){
                    if(table[i][j]==2048){// matrisin elemaninin 2048 oldugunda oyunun bitmesi
                        system("cls");
                        printf("===2048===\n");
                        printf("!!!YOU WIN!!!!");
                    }
                }
            }
            if(arrow=='E'|| arrow== 'e'){// E tusuna basildiginda oyunun bitmesi
                system("cls");
                printf("\n!!!GAME OVER!!!!\n");
                printf("SCORE: %d",score);
            }
    }
    printf("\n");
	return 0;
}
