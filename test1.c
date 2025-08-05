#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int n;
void print(int board[][20]){
    printf("\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d",board[i][j]);
        }
        printf("\n");
    }
}

bool isSafe(int board[][20], int i, int j){
    int l,m;
    for(l=0;l<i;l++){
        if(board[l][j] == 1) return false;
    }

    for(m=0;m<j;m++){
        if(board[i][m] == 1) return false;
    }

    for(l=i-1,m=j-1;l>=0 && m>=0;l--,m--){
        if(board[l][m]) return false;
    }

    for(l=i+1,m=j-1;m>=0 && l<n;m--,l++){
        if(board[l][m]) return false;
    }

    return true;
}

void NQueen(int board[][20], int j){
    if(j>=n) {
        print(board);
        exit(0);
       // return true;
    }

    for(int i=0;i<n;i++){
        if(isSafe(board,i,j)){
            board[i][j] = 1;
            NQueen(board,j+1);
            board[i][j] = 0;
        }
    }
}

int main(){
    printf("Enter n : ");
    scanf("%d",&n);
    int board[20][20] = {0};

    NQueen(board,0);
}