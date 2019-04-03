#include <stdio.h>
#include <stdlib.h>

int main()
#define FIL 5

{
    int vec[5]={0,5,9,8,7};
    int aux;

    for(int i=0; i<FIL-1 ;i++)
{
        for(int j=i+1; j<FIL ;j++)
{
            if(vec[i] > vec[j])
{
    aux=vec[i];
    vec[i]=vec[j];
    vec[j]=aux;

}
}
}
for(int i=0; i<FIL; i++){
    printf("%d ", vec[i]);
}
return 0;
}
