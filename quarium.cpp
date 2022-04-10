#include<stdio.h>
#include<windows.h>
//5<Y<40 0<X<80 
int a,b;
void gotoxy(int x,int y);
void fish1();
void fish2();
void fish3();
void fish4();
void fish5();
void fish6();
void fish7();
void fish10();
void fish11();
void fish12();
void fish13();
void fish14();
void fish15();
void fish16();
void fish17();
void fish18();
void fish19();
void fish20();
void hook();
void castle();
void seaweed();

int main()
{	
    //dont move
	castle();
	//move
	for(;;)
	{
		system("cls");
		
		if (a>=80)
		{
			a=0;
		}
	//	Sleep(1000);
		fish1();
		fish2();
		fish3();
		fish4();
		fish5();	
		fish6();
		fish7();
		fish10();
		fish11();
		fish12();
		fish13();
		fish14();	
		fish15();
		fish16();
		fish17();
		fish18();
		fish19();
		fish20();
		hook();
		seaweed();
		castle();
		a++;
	}
		
} 
void gotoxy(int x, int y)
{
        HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
        COORD coord;
        coord.X = x;
        coord.Y = y;
        SetConsoleCursorPosition(handle, coord);
}
void fish1()
{	gotoxy(a,5);
	printf("       \\:.");
	gotoxy(a,6);
	printf(" \\;,   ,;\\\\\\,,");
	gotoxy(a,7);
	printf("  \\\\;;:::::::o");
	gotoxy(a,8);
	printf("  ///;;::::::::<");
	gotoxy(a,9);
	printf(" /;` ``/////\\");
}
void fish2()
{
	gotoxy(a,10);
	printf("       \\");
	gotoxy(a,11);
	printf("     ...\\..,");
	gotoxy(a,12);
	printf("\\  /'       \\");
	gotoxy(a,13);
	printf(" >=     (  ' >");
	gotoxy(a,14);
	printf("/  \\      / /");
	gotoxy(a,15);
	printf("    `""---/--""");
}
void fish3()
{
	int fish3 = a*3;
	if(fish3 >=80)
		return ;
	gotoxy(fish3,7);
	printf("  __\n");
	gotoxy(fish3,8);
	printf("><_'>\n");
	gotoxy(fish3,9);
	printf("   ' \n");
}
void fish4()
{
	int fish4 = a*2;
	if(fish4 >= 80)
		return ;
	gotoxy(fish4,13);
	printf("     ,\n");
	gotoxy(fish4,14);
	printf("     \\}\\\\\n");
	gotoxy(fish4,15);
	printf("\\\\  .'  `\\\\\n");
	gotoxy(fish4,16);
	printf("\\}\\}<   ( 6>\n"); 
	gotoxy(fish4,17);
	printf("/  `,   .'\n");
	gotoxy(fish4,18);
	printf("      \\}/\n"); 
	gotoxy(fish4,19);
	printf("     '\n");
}
void fish5()
{
	int fish5 = 2*a;
	if(fish5 >=80)
		return ;
	gotoxy(fish5,10);
	printf("    \\");
	gotoxy(fish5,11);
	printf("\\ /--\\");
	gotoxy(fish5,12);
	printf(">=  (o>");
	gotoxy(fish5,13);
	printf("/ \\__/");
	gotoxy(fish5,14);
	printf("    /");

}
void fish6()
{	
	int fish6 = 2*a;
	if(fish6 >=80)
		return;
	gotoxy(fish6,5);
	printf("       \\:.");
	gotoxy(fish6,6);
	printf(" \\;,   ,;\\\\\\,,");
	gotoxy(fish6,7);
	printf("  \\\\;;:::::::o");
	gotoxy(fish6,8);
	printf("  ///;;::::::::<");
	gotoxy(fish6,9);
	printf(" /;` ``/////\\");
}
void fish7()
{	
	int fish7 = 4*a;
	if(fish7 >=80)
		return;
	gotoxy(fish7,9);
	printf("  __");
	gotoxy(fish7,10);
	printf("\\/ o\\");
	gotoxy(fish7,11);
	printf("/\\__/");
}




void fish10()
{	
	int i_fish10 = a*4;
	int fish10 = 80-i_fish10;
	if(fish10 <=0)
		return ;
	int x,y;
	gotoxy(fish10,20);
	printf("    o _.-~~~~' ``---..__ .' ;");
	gotoxy(fish10,21);
	printf(" _.-b' b) ``--...____.' .'");
	gotoxy(fish10,22);
	printf(" ( _. )). `-._ <");
	gotoxy(fish10,23);
	printf("  `\|\|\|\|)-.....___.-");
}



void fish11()
{	
	int i_fish11 = 2*a;
	int fish11 = 80-i_fish11;
	if(fish11 <=0)
		return ;
	gotoxy(fish11,9);	
	printf(" <?)))><");
	gotoxy(fish11,15);
	printf(" ¦Æ¡ã)))áê");
	gotoxy(fish11,20);
	printf(" (¡ã)#))<<");
	gotoxy(fish11,25);
	printf(" £¾¡ã))))áê");
	gotoxy(fish11,32);
	printf(" <¡ã)))áê");
}



void fish12()
{
	int i_a = 80-a;
	int fish12 = i_a;
	if(fish12 <=0)
		return ;
	gotoxy(fish12,30);
	printf("                     /\' )");
	gotoxy(fish12,31);
	printf("                  /\'   (                           ,");
	gotoxy(fish12,32);
	printf("              __/\'     )                        .\' `;");
	gotoxy(fish12,33);
	printf(" o    _.-~~~~\'          ``---..__             .\'   ;");
	gotoxy(fish12,34);
	printf(" _.--\'   b)                      ``--...____.\'   .\'");
	gotoxy(fish12,35);
	printf(" (     _.      )).      `-._                     <)");
	gotoxy(fish12,36);
	printf(" `vvvvvvv-)-.....___.-     `-.         __...--\'-.\'.");
	gotoxy(fish12,37);
	printf("   `^^^^^\'-------.....`-.___.\'----... .\'         `.;");
}


void fish13()
{
	gotoxy(a,11);	
	printf("  \\");
	gotoxy(a,12);	
	printf("  /\\");
	gotoxy(a,13);	
	printf(">=)\'>");
	gotoxy(a,14);	          
	printf("  \\/");
	gotoxy(a,15);	
	printf("  //");  
}


void fish14()
{	
	int i_a = (80-a);
	int fish14 = i_a;
	if(fish14 <= 0)
		return ;
	gotoxy(fish14,25);
	printf("                      `ii.   :::");
	gotoxy(fish14,26);
	printf("                      .+I}   ;,"); 
	gotoxy(fish14,27);
	printf(" ,~i/]}}]111/1I]}/+/iiiiil]!'"); 
	gotoxy(fish14,28);
	printf(" ``1,;'~>+/1*1*YYY*I1i;:. ");    
	gotoxy(fish14,29); 
	printf("      l:::   1*i;");  
	gotoxy(fish14,30);      
	printf("      `;:      ,;");   
}


void fish15()
{
	int fish15 = a*5;
	if(fish15 >=80)
		return ;
	gotoxy(fish15,25);
	printf("     __)\_  ");
	gotoxy(fish15,26);
	printf("  (\_.-'    a`-.");
	gotoxy(fish15,27);
	printf("  (/~~````(/~^^");
}


void fish16()
{	
	int fish16 = 3*a;
	if(fish16 >= 80)
		return ;
	gotoxy(fish16,26);
	printf("           .-----:");
	gotoxy(fish16,27);
	printf("         .'       `.");
	gotoxy(fish16,28);
	printf("  ,    /       (o) \\");
	gotoxy(fish16,29);
	printf("  \`._/          ,__)");
	gotoxy(fish16,30);
	printf("   / .n");
	gotoxy(fish16,31);
	printf("   V-");     
}


void fish17()
{	
	int i_fish17 = 2*a;
	int fish17 = 80-i_fish17;
	if(fish17 <=0)
		return ;
	gotoxy(fish17,18);
	printf("         / \\");
	gotoxy(fish17,19);
	printf(".    ,../...\ ");
	gotoxy(fish17,20);
	printf("   /       `\\  // .");
	gotoxy(fish17,21);
	printf("  < \'  )     =<\\ ");
	gotoxy(fish17,22);
	printf("    \\\\      /  \\"); 
	gotoxy(fish17,23);
	printf("     \\'\'\'\'\'");
}


void fish18()
{
	gotoxy(a,15);
	printf("    .----.");
	gotoxy(a,16);
	printf(" (_\\/      \\_,");
	gotoxy(a,17);
	printf("  \'uu----uu~\'");
}

void fish19()
{	
	int i_fish19 = 2*a;
	int i_a = (80-i_fish19);
	int fish19 = i_a;
	if (fish19 <= 0)
	 return ;
	gotoxy(fish19,28);
	printf("     _ _ ");
	gotoxy(fish19,29);
	printf("  o  \`\\." );
	gotoxy(fish19,30);
	printf("     / _  |||;._//)");
	gotoxy(fish19,31);
	printf(" o_/@ @  ///  |=(");
	gotoxy(fish19,32);
	printf(" ( (`__,     ,`\|"); 
	gotoxy(fish19,33);
	printf("  '.\_/ |\_.'"); 
	gotoxy(fish19,34);
	printf("    `""```");
}



void fish20()
{
	gotoxy(a,30);
	printf("        __...--....---__  ");
	gotoxy(a,31);
	printf("      .-~~/  \\__/  \\~~-.\\        .---. ");
	gotoxy(a,32);
	printf("      /_/``\\__/  \\__/``\\_\\    >>  (o)(o)  "); 
	gotoxy(a,33);         
	printf("     /  \\__/  \\__/  \\__/  \\  \|         | ");
	gotoxy(a,34);
	printf(" `==/\\__/__\\__/__\\__/__\\__/\|| |.,./././ ");
	gotoxy(a,35);
	printf("  ~/__/__/^^^^^^^^\\__\\__\\~,,\\ ");
}
void hook()
{
	int i_hook = a;
	if(i_hook >=40)
		return ;
		
	for(int i = 0;i<=a;i++)
	{
		gotoxy(40,i);
		printf("    ||");		
	}	
	
	gotoxy(40,i_hook);
	printf("    ||");
	gotoxy(40,i_hook+1);
	printf("    ||");
	gotoxy(40,i_hook+2);
	printf("    ||");
	gotoxy(40,i_hook+3);
	printf("    ||");
	gotoxy(40,i_hook+4);
	printf("=__=||=__=");
		
}
void castle(){
	gotoxy(80,40);
	printf("               T~~ copyright by hdm & zzh");
	gotoxy(80,41);
	printf("               |");
	gotoxy(80,42);
	printf("              /^\\");
	gotoxy(80,43);
	printf("             /   \\");
	gotoxy(80,44);
	printf(" _   _   _  /     \\  _   _   _  ");
	gotoxy(80,45);
	printf("[ ]_[ ]_[ ]/ _   _ \\[ ]_[ ]_[ ]");
	gotoxy(80,46);
	printf("|_=__-_ =_|_[ ]_[ ]_|_=-___-__|");
	gotoxy(80,47);
	printf(" | _- =  | =_ = _    |= _=   |");
	gotoxy(80,48);
	printf(" |= -[]  |- = _ =    |_ =_[] |");
	gotoxy(80,48);
	printf(" | =_    |= - ___    |    =  |");
	gotoxy(80,49);
	printf(" |=  []- |-  /| |\\   |=  =[] |");
	gotoxy(80,50);
	printf(" |- =_   | =| | | |  |-   -  |");
	gotoxy(80,51);
	printf(" |_______|__|_|_|_|__|______ |");

}
void seaweed(){
	gotoxy(10,40);
	printf(")                           )");
	gotoxy(10,41);
	printf("(                           (       ");
	gotoxy(10,42);
	printf(")                           )      )");
	gotoxy(10,43);
	printf("(                           (      (");
	gotoxy(10,44);
	printf(")                    )      )      )");
	gotoxy(10,45);
	printf("(                    (      (      (");
	gotoxy(10,46);
	printf(")                    )      )      )");
	gotoxy(10,47);
	printf("(             (      (      (      (");
	gotoxy(10,48);
	printf(")      )      )      )      )      )");
	gotoxy(10,48);
	printf("(      (      (      (      (      (");
	gotoxy(10,49);
	printf(")      )      )      )      )      )             )");
	gotoxy(10,50);
	printf("(      (      (      (      (      (      (      (");
	gotoxy(10,51);
	printf(")      )      )      )      )      )      )      )     )");

}

