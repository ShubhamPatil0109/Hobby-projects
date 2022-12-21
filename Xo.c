 

#include<stdio.h>

#define side 3

void print();

void h(char b[][side]);

int check(char a[][side]);

int random(int a,int b);

int minimax(char a[][3],bool ismax);

int bestkey( char a[][3]);

int score(char a[][3]);

int tie(char a[][3]);

int main()

{

		char X,Y;

	int i,n,y,row,column,m,c,j,ti4;

	char a[3][3]={{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};

	printf("enter 1 if you want to play with other player\n\nenter 0 if you want to play with computer\n\n");

	scanf("%d",&m);

	printf("\n");

	if(m==1)

	{

	

	print();

	printf("\n");

	for(i=1;i<=9;i++)

	{

		if(i%2==0)

	{p:

	 printf("\tplayer 2 turn\t\n");

	scanf("%d",&n);

	switch(n)

	{

	case 1:row=0;column=0;

	break;

	case 2:row=0;column=1;

	break;

	case 3:row=0;column=2;

	break;

	case 4:row=1;column=0;

	break;

	case 5:row=1;column=1;

	break;

	case 6:row=1;column=2;

	break;

	case 7:row=2;column=0;

	break;

	case 8:row=2;column=1;

	break;

	case 9:row=2;column=2;

	break;

	}

	if(a[row][column]!='X' && a[row][column]!='O')

		a[row][column]='X';

	else

	{printf("\n");

		printf("space not available\n");

		printf("\n");

		goto p;

	}

	printf("\n");

	h(a);

	y=check(a);

	if(y==0)

	{printf("\n");

	printf("player 1 won");

	break;

	}

	}

	else 

	{l:

	printf("\tplayer 1 turn\n");

	scanf("%d",&n);

	switch(n)

	{

	case 1:row=0;column=0;

	break;

	

	case 2:row=0;column=1;

	break;

	case 3:row=0;column=2;

	break;

	case 4:row=1;column=0;

	break;

	case 5:row=1;column=1;

	break;

	case 6:row=1;column=2;

	break;

	case 7:row=2;column=0;

	break;

	case 8:row=2;column=1;

	break;

	case 9:row=2;column=2;

	break;

	}

	if(a[row][column]!='X' && a[row][column]!='O')

	a[row][column]='O';

	else

	{

		printf("\n");

		printf("no space available\n");

		printf("\n");

		goto l;

	}

	printf("\n");

	h(a);

	y=check(a);

	if(y==0)

	{printf("\n");

	printf("player 1won");

	break;

	}

	}

	}

	}

	

	

	

	else

	{

			print();

	printf("\n");

	for(i=1;i<=9;i++)

	{

		if(i%2==0)

	{z:

	 printf("\tplayer 2 turn\t\n");

	scanf("%d",&n);

	switch(n)

	{

	case 1:row=0;column=0;

	break;

	case 2:row=0;column=1;

	break;

	case 3:row=0;column=2;

	break;

	case 4:row=1;column=0;

	break;

	case 5:row=1;column=1;

	break;

	case 6:row=1;column=2;

	break;

	case 7:row=2;column=0;

	break;

	case 8:row=2;column=1;

	break;

	case 9:row=2;column=2;

	break;

	}

	if(a[row][column]!='X' && a[row][column]!='O')

		{a[row][column]='X';

		printf("HUMAN PLAYED AT %d POSITION\n",n);}

		

	else

	{printf("\n");

		printf("space not available\n");

		printf("\n");

		goto z;

	}

	printf("\n");

	h(a);

	y=check(a);

	if(y==0)

	{printf("\n");

	printf("player 2 won");

	break;

	}

	ti4=tie(a);

	if(ti4==0)

	{printf("ITS TIE");}

	}

	

	

if(i%2!=0)

		{

	

				

			

	

	printf("\tcomputer turn\n");

	if(i==3)

			{

				if(a[1][1]!='X')

				a[1][1]='O';

				else

				{

				

	

	j=bestkey(a);

	printf("COMPUTER PLAYED AT %d POSTION\n",j);

	

	

	switch(j)

	{

	case 1:row=0;column=0;

	break;

	case 2:row=0;column=1;

	break;

	case 3:row=0;column=2;

	break;

	case 4:row=1;column=0;

	break;

	case 5:row=1;column=1;

	break;

	case 6:row=1;column=2;

	break;

	case 7:row=2;column=0;

	break;

	case 8:row=2;column=1;

	break;

	case 9:row=2;column=2;

	break;

	}}}

	else{

		j=bestkey(a);

	printf("COMPUTER PLAYED AT %d POSTION\n",j);

	

	

	switch(j)

	{

	case 1:row=0;column=0;

	break;

	case 2:row=0;column=1;

	break;

	case 3:row=0;column=2;

	break;

	case 4:row=1;column=0;

	break;

	case 5:row=1;column=1;

	break;

	case 6:row=1;column=2;

	break;

	case 7:row=2;column=0;

	break;

	case 8:row=2;column=1;

	break;

	case 9:row=2;column=2;

	break;

	}}

	

	if(a[row][column]!='X' && a[row][column]!='O')

	a[row][column]='O';

		

	printf("\n");

	h(a);

	y=check(a);

	if(y==0)

	{

		printf("\n");

	printf("HA HA HA YOU CANT BEAT ME HUMAN");

	break;

	}

	ti4=tie(a);

	if(ti4==0)

	{printf("ITS TIE");}

	}

	}

	}

	

	

}

void print()

{

	printf("1 | 2 | 3\n");

	printf("---------\n");

	printf("4 | 5 | 6\n");

	printf("---------\n");

	printf("7 | 8 | 9\n");

	 printf("\n");

	 printf("enter respective numbers from 1 to 9\n");

}

void h(char b[][side])

{

	printf("%c | %c | %c\n",b[0][0],b[0][1],b[0][2]);

	printf("---------\n");

	printf("%c | %c | %c\n",b[1][0],b[1][1],b[1][2]);

	printf("---------\n");

	printf("%c | %c | %c\n",b[2][0],b[2][1],b[2][2]);

//	printf("---------\n");

	 printf("\n");

}

int check(char a[][side])

{int i;

//	for(i=0;i<3;i++)

//{

	if(a[0][0]==a[0][1] && a[0][1]==a[0][2] && a[0][0]!=' ')

	{	return(0);

	

	}

	else if(a[1][0]==a[1][1] && a[1][1]==a[1][2] && a[1][0]!=' ') 

	{	return(0);

	

	}

		else if(a[2][0]==a[2][1] && a[2][1]==a[2][2] && a[2][0]!=' ')

	{	return(0);

	

	}

		else if(a[i][0]==a[i][1] && a[i][1]==a[i][2] && a[i][0]!=' ')

	{	return(0);

	

	}

else if(a[0][0] == a[1][1] && a[1][1]==a[2][2] && a[0][0]!=' ' )

{	return(0);

	

}

  else if(a[0][2] == a[1][1] && a[1][1]==a[2][0] && a[0][2]!=' ')

	{	return(0);

	}

else  if(a[0][0]==a[1][0] && a[1][0]==a[2][0] && a[0][0]!=' ')

	 {	return(0);

	 }

	 else if(a[0][1]==a[1][1] && a[1][1]==a[2][1] && a[0][1]!=' ' )

	 {	return(0);

	 

	 }

	else  if(a[0][2]==a[1][2] && a[1][2]==a[2][2] && a[0][2]!=' ')

	 {	return(0);

	 

	 }

	

	else

	return (1);

}

int bestkey( char a[][3])

{

	int i,j,s,k,high,temp,row,column;

	for(i=0;i<3;i++)

	{

		for(j=0;j<3;j++)

		{

			if(a[i][j]==' ')

			{

				a[i][j]='O';

				s=minimax(a,false);

	          printf("%d\n",s);

			if(high<s)

			{

			high=s;

			row=i;

			column=j;

			}

     	a[i][j]=' ';

			}}}

			if(row==0 && column==0)

			temp=1;

				if(row==0 && column==1)

			temp=2;

				if(row==0 && column==2)

			temp=3;

				if(row==1 && column==0)

			temp=4;

				if(row==1 && column==1)

			temp=5;

				if(row==1 && column==2)

			temp=6;

				if(row==2 && column==0)

			temp=7;

				if(row==2 && column==1)

			temp=8;

			if(row==2 && column==2)

				temp=9;

		return temp;

	

}				

	

int minimax(char a[][3],bool ismax)

{ int m,n,s,best,sco,hl;

	

sco=score(a);

if(sco==1){

	return sco;}

	if(sco==-1){

	return sco;}

 hl=tie(a);

 if(hl==0){

 return 0;}

	if(ismax==false)

	{

		int best=1000;

		for(m=0;m<3;m++)

{

	for(n=0;n<3;n++)

	{

		if(a[m][n]==' ')

		{

			a[m][n]='X';

			s=minimax(a,true);

			if(best>s)

			{

			best=s;

			}

			a[m][n]=' ';

		

		}

	}}

return best;

}	

		else

		{

		int best=-1000;

		for(m=0;m<3;m++)

{

	for(n=0;n<3;n++)

	{

		if(a[m][n]==' ')

		{

			a[m][n]='O';

			s=minimax(a,false);

			if(best<s)

			{

			best=s;

			}

		

			a[m][n]=' ';

		

		}

	}}

return best;

}

}		

int score(char a[][3])

{int i,j;

	for(i=0;i<3;i++)

{ for(j=0;j<3;j++)

{

	if(a[i][0]==a[i][1] && a[i][1]==a[i][2] && a[i][0]!=' ' )

	{	

		if(a[i][0]=='O'){

		return 1;}

		else {

		return -1;}

	}

 if(a[0][0] == a[1][1] && a[1][1] == a[2][2] && a[0][0]!=' ' )

{

			if(a[0][0]=='O'){

	return 	1;}

		else {

	return	-1;}

}

if(a[0][2] == a[1][1] && a[1][1]==a[2][0] && a[0][2]!=' ')

	{	

		if(a[0][2]=='O'){

	return 	1;}

		else {

	return	-1; }

	}

	if (a[0][i]==a[1][i] && a[1][i]==a[2][i] && a[0][i]!=' ')

	{ 	

	if(a[0][i]=='O'){

	return	1;}

		else {

	return	-1;}

	}

	if(a[0][0]==a[1][0] && a[1][0]==a[2][0] && a[0][0]!=' ')

	 {	

	  if(a[0][0]=='O'){

	return	1;}

		else {

	return -1;}

	 }

	if(a[0][1]==a[1][1] && a[1][1]==a[2][1] && a[0][1]!=' ' )

	 {	

	 	if(a[0][1]=='O'){

	return	1;}

		else {

	return	-1;}

	 }

	if(a[0][2]==a[1][2] && a[1][2]==a[2][2] && a[0][2]!=' ')

	 {	

	 	if(a[0][2]=='O'){

		return 1;}

		else {

	return	-1;}

	 }

}

}

}

int tie(char a[][3])

{

  int i,j,c=0;

  for(i=0;i<3;i++)

  {

  	for(j=0;j<3;j++)

  	{

  		if(a[i][j]!=' ')

  		{c++;}

  	}

  }

  if(c==9){

  return 0;}

}	
