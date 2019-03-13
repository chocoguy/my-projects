#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;
int main(){
  int lifes=0;
  char letter;
  int none;
  char wordtoguess[50]={0};
  char guessedword[50]={0};
  cout<<"Type out a word to play hangman"<<endl;
  cin>>wordtoguess;
  while(lifes<=5&&strcmp(guessedword,wordtoguess)!=0)
  {
    none=0;
    cout<<endl<<"Please guess a letter: ";
    cin>>letter;
    for(int n=0;n<50;n++){
      if(wordtoguess[n]==letter){
        guessedword[n]=wordtoguess[n];
        none=1;}}
        if(none<1){
          lifes=lifes+1;
          cout<<"Try once more!"<<endl;}
  }
  if(lifes>5){
    cout<<endl<<"you lose!";}
    else
    {cout<<endl<<"Youw win!";}
    getch();
}
