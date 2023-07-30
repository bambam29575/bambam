# include <stdio.h>
# include <stdlib.h> //try puting no space
# include <time.h>
//snake gun water game 
int main(){
int c;
char user,comp;
printf("Choose between 's' for snake ,'w' for water and 'g' for gun\n");
scanf("%c",&user);

srand(time(0));
c=rand()%100+1;

if (c>0&&c<33){
	comp='w';
}else if(c>=33&&c<66){
	comp='g';
}else comp='s';

if (user=='g'&&comp=='s'){
	printf("congrats ! you win");
	
}else if (user=='w'&&comp=='g'){
	printf("you choose %c and computer chooses %c congrats ! you win",user,comp);
}else if (user=='s'&& comp=='w'){
	printf("you choose %c and computer chooses %c congrats ! you win",user,comp);
}else if (user=='w'&& comp=='w'){
	printf("you choose %c and computer chooses %c its draw",user,comp);
}else if (user=='s'&&comp=='s'){
    printf("you choose %c and computer chooses %c its draw",user,comp);
}else if (user=='g'&&comp=='g'){
	printf("you choose %c and computer chooses %c its draw",user,comp);
}else if(user=='s'&&comp=='g'){
	printf("you choose %c and computer chooses %c You lost",user,comp);
}else if (user=='g'&&comp=='w'){
	printf("you choose %c and computer chooses %c you lost",user,comp);
}else {
	printf("you choose %c and computer chooses %c you lost",user,comp);
}
return 0;
}
