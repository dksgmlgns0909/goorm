#include <stdio.h>

int main()
{
    int N,M;
    scanf("%d %d", &N, &M);
    
    int arr1[101][101], arr2[101][101];
    
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++)
        scanf("%d", &arr1[i][j]);
    }
    
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++)
        scanf("%d", &arr2[i][j]);
    }
    
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
        printf("%d ", arr1[i][j] + arr2[i][j]);
        }
        printf("\n");
        
    }

}