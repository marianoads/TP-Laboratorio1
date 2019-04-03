#ARRAYS_H_INCLUDED

int buscarChar( char caracter,  char vec[], int tam){

 int indice = -1;

 for(int i=0; i < tam; i++){


    if( caracter == vec[i]){
        indice = i;
        break;
    }
