//GAME READY!!!
//NEED TO ADD COMMENT BOX

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
class game
{
	private:
		char a[20][35],temp,ele,m[10],pos,loc;
		int i,j,b1,b2,t1,t2,c1,c2,game_count;
	public:
		void instructions();
		void board();
		void start();
		void crux();

};
void game:: instructions()
{
cout<<"Inspector : 'Mr.X has broken out of the prison!'" ;
cout<<"Send in the best detectives of  Scotland Yard... Preferrably A and B..."<<endl;
cout<<"Detectives A & B: At your service Inspector."<<endl;
cout<<"Inspector: Here are 110 tickets for each of you... I want you to hunt down Mr.X the dangerous criminal as soon as you can!";
cout<<endl;
cout<<" Use your tickets wisely and capture him before he escapes!";
cout<<endl;
cout<<"You can only use the train tickets on the locations 't' to 'p','b' to 'f'and'c' to 'z'.";
cout<<endl;
cout<<"You have to use cab for consecutive stops and you have to take the bus if you   need to skip 1 location";
cout<<endl;
cout<<"Meanwhile Mr.X also has to follow the same rules!"<<endl;
cout<<" Keep your eyes peeled boys! After every 5 moves Mr.X resurfaces on your map... Strategise to catch him!";
cout<<endl;
cout<<"Mean while... Mr.X, keep yuor locations a secret and try to evade the detectives... the same rules applies to you as to the detectives!";
cout<<endl;
cout<<"Best of Luck! May the hunt begin!";
cout<<endl;
cout<<"The game will automatically end when Mr.X is caught or the Dectectives run out  of their tickets!";
cout<<endl;
cout<<"Press 'ENTER' to continue";
cout<<endl;
getch();
clrscr();
}
void game:: board()
{
	for(i=0;i<20;i++)
	{
		for(j=0;j<35;j++)
		{
			a[i][j]=0;
			if(((i+j)%2)==0)
			{
				a[i][j]='!';
			}
			if(((i+j)%10)==0)
			{
				a[i][j]='@';
			}
		}
	}

	for(i=0;i<20;i++)
	{
		for(j=0;j<35;j++)
		{


			a[1][1]='a';


			a[10][21]=a[11][22]=a[12][23]='\\';



			a[6][23]=a[7][22]=a[8][21]='/';

			a[6][17]='k';
			a[9][14]='l'; a[10][13]=a[11][12]=a[12][11]='/';
			a[12][18]='m';
			a[9][20]='n';
			a[6][14]=a[6][15]=a[6][16]=a[6][18]=a[6][19]=a[6][20]='-';
			a[7][14]=a[8][14]=a[10][14]=a[11][14]='|';
			a[12][14]=a[12][15]=a[12][16]=a[12][17]=a[12][19]=a[12][20]='-';
			a[7][20]=a[8][20]=a[10][20]=a[11][20]='|';
			a[14][9]=a[15][8]='/';
			a[5][10]=a[6][11]=a[7][12]=a[8][13]='\\';
			a[3][7]=a[4][7]=a[5][7]='|';
			a[4][5]=a[3][6]='/';
			a[3][22]=a[4][23]='\\';
			a[2][21]='v';
			a[9][5]='w';  a[6][2]=a[7][3]=a[8][4]='\\';
			a[12][2]=a[11][3]=a[10][4]='/';
			a[9][29]='x'; a[10][30]=a[11][31]=a[12][32]='\\';
			a[8][30]=a[7][31]=a[6][32]='/';
			a[7][15]=':';a[8][15]='T';a[9][15]=':';a[10][15]=':';a[11][15]=':';
			a[7][16]=':';a[8][16]='O';a[9][16]='H';a[10][16]=':';a[11][16]=':';
			a[7][17]=':';a[8][17]='W';a[9][17]='A';a[10][17]=':';a[11][17]=':';
			a[7][18]=':';a[8][18]='N';a[9][18]='L';a[10][18]=':';a[11][18]=':';
			a[7][19]=':';a[8][19]=':';a[9][19]='L';a[10][19]=':';a[11][19]=':';
			a[1][24]='#';a[1][25]='P';a[1][26]='O';a[1][27]='L';a[1][28]='I';a[1][29]='C';a[1][30]='E';a[1][31]='#';
			a[2][24]='#';a[2][25]='F';a[2][26]='O';a[2][27]='R';a[2][28]='C';a[2][29]='E';a[2][30]='#';a[2][31]='#';
			a[19][18]='~';a[19][19]='D';a[19][20]='O';a[19][21]='C';a[19][22]='K';a[19][23]='Y';a[19][24]='A';a[19][25]='R';a[19][26]='D';a[19][27]='~';
			a[17][9]='$';a[17][10]='$';a[17][11]='$';a[17][12]='$';a[17][13]='$';a[17][14]='$';
			a[16][9]='M';a[16][10]='A';a[16][11]='R';a[16][12]='K';a[16][13]='E';a[16][14]='T';
			a[15][9]='$';a[15][10]='$';a[15][11]='$';a[15][12]='$';a[15][13]='$';a[15][14]='$';
			a[16][8]='$';a[16][15]='$';

			a[15][27]='P';a[15][28]='A';a[15][29]='R';a[15][30]='K';
			a[14][26]=a[14][27]=a[14][28]=a[14][29]=a[14][30]=a[14][31]='!';
			a[15][26]=a[16][26]=a[16][27]=a[16][28]=a[16][29]=a[16][30]=a[16][31]=a[15][31]='!';

		}
	}
	for(j=6;j<14;j++)
	{
		a[9][j]='-';
	}
	for(j=21;j<29;j++)
	{
		a[9][j]='-';
	}
	for(i=2;i<18;i++)
	{
		a[i][1]='|';
		a[13][1]='b';
		a[18][1]='c';
		a[5][1]='t';
		a[i][33]='|';
		a[18][33]='z';
		a[1][33]='j';
		a[5][33]='p';
		a[13][33]='f';
	}
	for(j=2;j<33;j++)
	{
		a[18][j]='-';
		a[18][24]='g';
		a[18][11]='u';
		a[13][j]='-';

		a[13][10]='h';
		a[5][j]='-';
		a[5][24]='i';
		a[5][4]='o';
		a[5][10]='y';
	}
	for(i=6;i<16;i++)
	{
		a[i][24]='|';
		a[13][24]='e';
		a[16][24]=a[17][24]='|';
		a[i][7]='|';
		a[16][7]='r';
		a[2][7]='s';
	}
	a[3][14]=a[4][15]=a[5][16]='\\';
	for(j=8;j<21;j++)
	{
		a[2][j]='-';
		a[2][13]='d';
	}
	a[13][19]=a[14][20]=a[15][21]=a[16][22]=a[17][23]='\\';
}
void game:: start()
{


	for(i=0;i<20;i++)
	{
		for(j=0;j<35;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
void game::crux()
{
	b1=50; c1=50; t1=10;
	b2=50; c2=50; t2=10;
	game_count=0;
	char r[10]="train", s[10]="bus", c[10]="cab";
	while(game_count<111)
	{


		board();
		game_count++;
		cout<<endl;
		cout<<"move number "<<game_count<<"\t";
		cout<<"Mr.X travelled in a "<<m<<endl;
		cout<<"Tickets left"<<"\t train "<<t1<<"\t bus "<<b1<<"\t cab "<<c1<<endl;
		cout<<"Enter the Detective A's next move"<<endl;
		cin>>ele;
		cout<<"Enter the mode of transport"<<endl;
		gets(m);
		if(strcmp(m,s)==0)
		{
			if(b1>b1--)
			b1=b1--;
		}
		if(strcmp(m,c)==0)
		{
			if(c1>c1--)
			c1=c1--;
		}
		if(strcmp(m,r)==0)
		{
			if(t1>t1--)
			t1=t1--;
		}
		for(i=0;i<20;i++)
		{
		    for(j=0;j<35;j++)
		    {
			if(a[i][j]==ele)
			a[i][j]='A';
		    }
		}
		if (ele==pos)
		{
		    cout<<"detectives win";
		    break;
		}
		cout<<"Tickets left"<<"\t train "<<t2<<"\t bus "<<b2<<"\t cab "<<c2<<endl;
		cout<<"Enter the Dectective B's next move"<<endl;
		cin>>loc;
		cout<<"Enter the mode of transport"<<endl;
		gets(m);
		if(strcmp(m,s)==0)
		{
			if(b2>b2--)
			b2=b2--;
		}
		if(strcmp(m,c)==0)
		{
			if(c2>c2--)
			c2=c2--;
		}
		if(strcmp(m,r)==0)
		{
			if(t2>t2--)
			t2=t2--;
		}
		for(i=0;i<20;i++)
		{
		    for(j=0;j<35;j++)
		    {
			if(a[i][j]==loc)
			a[i][j]='B';
		    }
		}
		start();

		if (loc==pos)
		{
			cout<<"detectives win";
			break;
		}
		cout<<"Enter the mr.X position"<<endl;
		cin>>pos;
		for(i=0;i<20;i++)
		{
		    for(j=0;j<35;j++)
		    {
			if(a[i][j]==pos && game_count==5)
			{
				a[i][j]='^';
			}
		    }
		}

		cout<<"Enter your mode of transport"<<endl;
		gets(m);
		if (ele==pos || ele==loc)
		{
			cout<<"detectives win";
			break;
		}
		clrscr();
		start();
	}
}
void main()
{
	clrscr();
	game g;
	g.instructions();
	g.board();
	g.start();
	g.crux();
	getch();

}