#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
//
const int X = 40, Y = 30, B = 5;
int x, y, b, i, j;
bool arr[X][Y];
//
void setup (){
  bool gameover = false;
  x = X/2; // posicao inicial do jogador
  y = Y/10;
  for(j=0;j<Y;j++){ //preenchendo todo o array como falso
    for(i=0;i<X;i++){
      arr[j][i] = true;
    }
  }
  for(int j=Y/2; j<Y; J+=5){ //adicionando as barreiras
    srand(time(NULL));
    b = rand() % (X-5)+2;
    for(i=b; i<b+5; i++){
      arr[j][i] = true;
    }
  }
}
void logic(){

}
void draw(){
  system("cls");
  for(j=0; j<Y; j++){
    for(i=0; i<X; i++){
      if(i==0 || i==X-1)
        cout<<"|";
      cout<<" ";
    }
    cout<<"\n";
  }
}
int main(){
  setup();
  while(!gameover){
    draw();
    logic();
  }
  return 0;
}
