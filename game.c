#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char user_input[50];
void clearwindows(){

#ifdef _WIN32
system("cls");
#else
system("clear");
#endif


}
void a(){
clearwindows();
#ifdef _WIN32
printf("\n");
#else
puts("      ⣀⣀⣤⣤⣴⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣦⣤⣤⣄⣀⡀\n\
    ⣴⣿⣿⡿⣿⢿⣟⣿⣻⣟⡿⣟⣿⣟⡿⣟⣿⣻⣟⣿⣻⢿⣻⡿⣿⢿⣷⣆\n\
   ⢘⣿⢯⣷⡿⡿⡿⢿⢿⣷⣯⡿⣽⣞⣷⣻⢯⣷⣻⣾⡿⡿⢿⢿⢿⢯⣟⣞⡮⡀\n\
   ⢸⢞⠟⠃⣉⢉⠉⠉⠓⠫⢿⣿⣷⢷⣻⣞⣿⣾⡟⠽⠚⠊⠉⠉⠉⠙⠻⣞⢵⠂\n\
   ⢜⢯⣺⢿⣻⣿⣿⣷⣔⡄ ⠈⠛⣿⣿⡾⠋⠁  ⣄⣶⣾⣿⡿⣿⡳⡌⡗⡅\n\
   ⢽⢱⢳⢹⡪⡞⠮⠯⢯⡻⡬⡐⢨⢿⣿⣿⢀⠐⡥⣻⡻⠯⡳⢳⢹⢜⢜⢜⢎⠆\n\
  ⠠⣻⢌⠘⠌⡂⠈⠁⠉⠁⠘⠑⢧⣕⣿⣿⣿⢤⡪⠚⠂⠈⠁⠁⠁⠂⡑⠡⡈⢮⠅\n\
  ⠠⣳⣿⣿⣽⣭⣶⣶⣶⣶⣶⣺⣟⣾⣻⣿⣯⢯⢿⣳⣶⣶⣶⣖⣶⣮⣭⣷⣽⣗⠍\n\
  ⢀⢻⡿⡿⣟⣿⣻⣽⣟⣿⢯⣟⣞⡷⣿⣿⣯⢿⢽⢯⣿⣻⣟⣿⣻⣟⣿⣻⢿⣿⢀\n\
   ⡑⡏⠯⡯⡳⡯⣗⢯⢟⡽⣗⣯⣟⣿⣿⣾⣫⢿⣽⠾⡽⣺⢳⡫⡞⡗⡝⢕⠕\n\
   ⢂⡎⠅⡃⢇⠇⠇⣃⣧⡺⡻⡳⡫⣿⡿⣟⠞⠽⠯⢧⣅⣃⠣⠱⡑⡑⠨⢐⢌⠂\n\
   ⠐⠼⣦⢀ ⣶⣿⢿⣿⣧⣄⡌⠂⠢⠩⠂⠑⣁⣅⣾⢿⣟⣷⠦  ⡤⡇⡪\n\
    ⠨⢻⣧⡅⡈⠛⠿⠿⠿⠛⠁ ⢀⡀  ⠘⠻⠿⠿⠯⠓⠁⢠⣱⡿⢑\n\
    ⠈⢌⢿⣷⡐⠤⣀⣀⣂⣀⢀⢀⡓⠝⡂⡀⢀⢀⢀⣀⣀⠤⢊⣼⡟⡡⡁\n\
     ⠈⢢⠚⣿⣄⠈⠉⠛⠛⠟⠿⠿⠟⠿⠻⠻⠛⠛⠉ ⣠⠾⢑⠰⠈\n\
       ⠑⢌⠿⣦⡡⣱⣸⣸⣆   ⣰⣕⢔⢔⠡⣼⠞⡡⠁⠁\n\
         ⠑⢝⢷⣕⡷⣿⡿  ⠠⣿⣯⣯⡳⡽⡋⠌\n\
           ⠙⢮⣿⣽⣯  ⢨⣿⣿⡷⡫⠃\n\
             ⠘⠙⠝⠂ ⢘⠋⠃⠁\n\n");
#endif

#ifdef _WIN32
system("echo aiden is a hacker. He lives in mom's basement where is nothing except his laptop. It's cold so he wears a hoodie.");
#else
system("echo aiden is a hacker. He lives in mom's basement where is nothing except his laptop. It's cold so he wears a hoodie. | pv -qL 10");
#endif
a:
printf("> ");

fgets(user_input, 30, stdin);
user_input[strlen(user_input)-1]='\0';
if(strcmp(user_input,"laptop")==0){
	return;}
else{
	printf("you cant do that\n");
	goto a;}
}




void b(){
clearwindows();
printf("        _______________________________________\n\
       |,---\"--------------o--------------\"---,|\n\
       ||                                     ||\n\
       ||                                     ||\n\
       ||         	                      ||\n\
       ||                                     ||\n\
       ||                                     ||\n\
       ||                                     ||\n\
       ||                                     ||\n\
       ||_____,_________________________,_____||\n\
       |)_____)-----.|   xpcx   |.------(_____(|\n\
     //=======|_____|=----------=|______|=======\\\n\
    // _| _| _| _| _| _| _| _| _| _| _| _| _| _| \\\n\
   // ___| _| _| _| _| _| _| _| _| _| _| _|  |  | \\\n\
  |/ ___| _| _| _| _| _| _| _| _| _| _| _| ______| \\\n\
  / __| _| _| _| _| _| _| _| _| _| _| _| _| _| ___| \\\n\
 / _| _| _| _| ________________________| _| _| _| _| \\\n\
|------\"--------------------------------------\"-------|\n\
`-----------------------------------------------------'\n\n");
#ifdef _WIN32
system("echo the power is down.");
#else
system("echo the power is down. | pv -qL 10");

#endif
b:
printf("> ");

fgets(user_input, 30, stdin);
user_input[strlen(user_input)-1]='\0';
if(strcmp(user_input,"turn on")==0){
	return;}
else{
	printf("you cant do that\n");
	goto b;}
}

void c(){
clearwindows();
printf("        _______________________________________\n\
       |,---\"--------------o--------------\"---,|\n\
       ||                                     ||\n\
       ||              kali Linux             ||\n\
       ||         	                      ||\n\
       ||          username: aiden            ||\n\
       ||          password:                  ||\n\
       ||                                     ||\n\
       ||                                     ||\n\
       ||_____,_________________________,_____||\n\
       |)_____)-----.|   xpcx   |.------(_____(|\n\
     //=======|_____|=----------=|______|=======\\\n\
    // _| _| _| _| _| _| _| _| _| _| _| _| _| _| \\\n\
   // ___| _| _| _| _| _| _| _| _| _| _| _|  |  | \\\n\
  |/ ___| _| _| _| _| _| _| _| _| _| _| _| ______| \\\n\
  / __| _| _| _| _| _| _| _| _| _| _| _| _| _| ___| \\\n\
 / _| _| _| _| ________________________| _| _| _| _| \\\n\
|------\"--------------------------------------\"-------|\n\
`-----------------------------------------------------'\n\n");
#ifdef _WIN32
system("echo Aiden turns on laptop running kali linux. It prompts for password? Aiden password is 8 diggits long.");
#else
system("echo Aiden turns on laptop running kali linux. It prompts for password? Aiden password is 8 diggits long. | pv -qL 10");

#endif
c:
printf("> ");
fgets(user_input, 30, stdin);
user_input[strlen(user_input)-1]='\0';
if(strlen(user_input)==8){}

else {
	printf("password incorrect\n"); goto c;}
clearwindows();
printf("        _______________________________________\n\
       |,---\"--------------o--------------\"---,|\n\
       ||                                     ||\n\
       ||              kali Linux             ||\n\
       ||         	                      ||\n\
       ||          username: aiden            ||\n\
       ||          password: %s         ||\n\
       ||                                     ||\n\
       ||                                     ||\n\
       ||_____,_________________________,_____||\n\
       |)_____)-----.|   xpcx   |.------(_____(|\n\
     //=======|_____|=----------=|______|=======\\\n\
    // _| _| _| _| _| _| _| _| _| _| _| _| _| _| \\\n\
   // ___| _| _| _| _| _| _| _| _| _| _| _|  |  | \\\n\
  |/ ___| _| _| _| _| _| _| _| _| _| _| _| ______| \\\n\
  / __| _| _| _| _| _| _| _| _| _| _| _| _| _| ___| \\\n\
 / _| _| _| _| ________________________| _| _| _| _| \\\n\
|------\"--------------------------------------\"-------|\n\
`-----------------------------------------------------'\n\n", user_input);
system("echo password correct.");
#ifdef _WIN32
system("pause");
#else

#endif
return;}

void d(){
clearwindows();
printf("        _______________________________________\n\
       |,---\"--------------o--------------\"---,|\n\
       ||                                     ||\n\
       ||                                     ||\n\
       ||         	                      ||\n\
       ||             No Internet             ||\n\
       ||                                     ||\n\
       ||                                     ||\n\
       ||                                     ||\n\
       ||_____,_________________________,_____||\n\
       |)_____)-----.|   xpcx   |.------(_____(|\n\
     //=======|_____|=----------=|______|=======\\\n\
    // _| _| _| _| _| _| _| _| _| _| _| _| _| _| \\\n\
   // ___| _| _| _| _| _| _| _| _| _| _| _|  |  | \\\n\
  |/ ___| _| _| _| _| _| _| _| _| _| _| _| ______| \\\n\
  / __| _| _| _| _| _| _| _| _| _| _| _| _| _| ___| \\\n\
 / _| _| _| _| ________________________| _| _| _| _| \\\n\
|------\"--------------------------------------\"-------|\n\
`-----------------------------------------------------'\n\n");
#ifdef _WIN32
system("echo Aiden loged in but there is no internet connection. Aiden mom does not buy any home internet service!");
#else
system("echo Aiden loged in but there is no internet connection. Aiden mom does not buy any home internet service! | pv -qL 10");

#endif
d:
printf("> ");

fgets(user_input, 30, stdin);
user_input[strlen(user_input)-1]='\0';
if(strcmp(user_input,"scan wifi")==0){
	return;}
else{
	printf("you cant do that\n");
	goto d;}
}





void e(){
clearwindows();
printf("        _______________________________________\n\
       |,---\"--------------o--------------\"---,|\n\
       ||                                     ||\n\
       ||                                     ||\n\
       ||	     id	  name		      ||\n\
       ||	     1....lan solo            ||\n\
       ||            2....muLan               ||\n\
       ||            3....laggy gaga          ||\n\
       ||                                     ||\n\
       ||_____,_________________________,_____||\n\
       |)_____)-----.|   xpcx   |.------(_____(|\n\
     //=======|_____|=----------=|______|=======\\\n\
    // _| _| _| _| _| _| _| _| _| _| _| _| _| _| \\\n\
   // ___| _| _| _| _| _| _| _| _| _| _| _|  |  | \\\n\
  |/ ___| _| _| _| _| _| _| _| _| _| _| _| ______| \\\n\
  / __| _| _| _| _| _| _| _| _| _| _| _| _| _| ___| \\\n\
 / _| _| _| _| ________________________| _| _| _| _| \\\n\
|------\"--------------------------------------\"-------|\n\
`-----------------------------------------------------'\n\n");



#ifdef _WIN32
system("echo Aiden scans for internet access points and finds many wifis from his neiborhs. they require password.");
#else
system("echo Aiden scans for internet access points and finds many wifis from his neiborhs. they require password. | pv -qL 10");

#endif
e:
printf("> ");

fgets(user_input, 30, stdin);
user_input[strlen(user_input)-1]='\0';
if(strcmp(user_input,"hack")==0){
	return;}
else{
	printf("you cant do that\n");
	goto e;}
}



void f(){
clearwindows();
printf(" _______________________________________________________________________\n\
|[] kali@localhost                                           [-][#][X]|\"|\n\
|=====================================================================|\"|\n\
|root@localhost:~#                                                    | |\n\
|                                                                     | |\n\
|                                                                     | |\n\
|                                                                     | |\n\
|                                                                     | |\n\
|                                                                     | |\n\
|                                                                     | |\n\
|                                                                     | |\n\
|                                                                     | |\n\
|                                                                     |_|\n\
|_____________________________________________________________________|/|\n\n");



#ifdef _WIN32
system("echo which script we should use to hack aiden use wifite to get the job done?");
#else
system("echo which script we should use to hack aiden use wifite to get the job done? | pv -qL 10");

#endif
f:
printf("> ");

fgets(user_input, 30, stdin);
user_input[strlen(user_input)-1]='\0';
if(strcmp(user_input,"wifite")==0){
	return;}
else{
	printf("whats that?\n");
	goto f;}
}
void g1(){
clearwindows();
printf(" _______________________________________________________________________\n\
|[] kali@localhost                                           [-][#][X]|\"|\n\
|=====================================================================|\"|\n\
|root@localhost:~# wifite 1                                           | |\n\
|[*] wifite script running...                                         | |\n\
|[*] id=1,name=\"lan solo\".                                            | |\n\
|[*] Password cracked = starwars123                                   | |\n\
|[*] Connected to wifi id: 1 name: \"han solo\"                         | |\n\
|                                                                     | |\n\
|                                                                     | |\n\
|                                                                     | |\n\
|                                                                     | |\n\
|                                                                     |_|\n\
|_____________________________________________________________________|/|\n\n");

#ifdef _WIN32
system("echo wifite targerts the lan solo. and cracks the password. we are in.");
#else
system("echo wifite targerts the lan solo. and cracks the password. we are in. | pv -qL 10");

#endif
g1:
printf("> ");

fgets(user_input, 30, stdin);
user_input[strlen(user_input)-1]='\0';
if(strcmp(user_input,"web")==0){
	return;}
else{
	printf("you cant do that\n");
	goto g1;}

}

void g2() {
clearwindows();
printf(" _______________________________________________________________________\n\
|[] kali@localhost                                           [-][#][X]|\"|\n\
|=====================================================================|\"|\n\
|root@localhost:~# wifite 2                                           | |\n\
|[*] wifite script running...                                         | |\n\
|[*] id=2,name=\"muLan\".                                               | |\n\
|[*] Password cracked = illuminati                                    | |\n\
|[*] Connected to wifi id: 2 name: \"muLan\"                            | |\n\
|                                                                     | |\n\
|                                                                     | |\n\
|                                                                     | |\n\
|                                                                     | |\n\
|                                                                     |_|\n\
|_____________________________________________________________________|/|\n\n");
#ifdef _WIN32
system("echo echo wifite targerts the muLan. and cracks the password. good job.");

#else
system("echo echo wifite targerts the muLan. and cracks the password. good job. | pv -qL 10");

#endif
g2:
printf("> ");

fgets(user_input, 30, stdin);
user_input[strlen(user_input)-1]='\0';
if(strcmp(user_input,"web")==0){
	return;}
else{
	printf("you cant do that?\n");
	goto g2;}
}


void g3(){
clearwindows();
printf(" _______________________________________________________________________\n\
|[] kali@localhost                                           [-][#][X]|\"|\n\
|=====================================================================|\"|\n\
|root@localhost:~# wifite 3                                           | |\n\
|[*] wifite script running...                                         | |\n\
|[*] id=3,name=\"laggy gaga\".                                          | |\n\
|[*] Password cracked = plsdonthackme                                 | |\n\
|[*] Connected to wifi id: 3 name: \"laggy gaga\"                       | |\n\
|                                                                     | |\n\
|                                                                     | |\n\
|                                                                     | |\n\
|                                                                     | |\n\
|                                                                     |_|\n\
|_____________________________________________________________________|/|\n\n");
#ifdef _WIN32
system("echo echo wifite targerts the laggy gaga. and cracks the password. ez.");
#else
system("echo echo wifite targerts the laggy gaga. and cracks the password. ez. | pv -qL 10");

#endif
g3:
printf("> ");

fgets(user_input, 30, stdin);
user_input[strlen(user_input)-1]='\0';
if(strcmp(user_input,"web")==0){
	return;}
else{
	printf("you cant do that?\n");
	goto g3;}



}

void g(){
clearwindows();
printf(" _______________________________________________________________________\n\
|[] kali@localhost                                           [-][#][X]|\"|\n\
|=====================================================================|\"|\n\
|root@localhost:~# wifite                                             | |\n\
|usage: wifite (id)                                                   | |\n\
|                                                                     | |\n\
|                                                                     | |\n\
|                                                                     | |\n\
|                                                                     | |\n\
|                                                                     | |\n\
|                                                                     | |\n\
|                                                                     | |\n\
|                                                                     |_|\n\
|_____________________________________________________________________|/|\n\n");
#ifdef _WIN32
system("echo wifite is powerfull script. it can crack passwords.");

#else
system("echo wifite is powerfull script. it can crack passwords. | pv -qL 10");

#endif
g:
printf("> ");

fgets(user_input, 30, stdin);
user_input[strlen(user_input)-1]='\0';
if(strcmp(user_input,"wifite 1")==0){
	g1();}
else if(strcmp(user_input,"wifite 2")==0){
	g2();
}
else if(strcmp(user_input,"wifite 3")==0){
	g3();
}
else{
	printf("you cant do that?\n");
	goto g;}

}



int main(){
#ifdef _WIN32
system("cls");
printf("HACKERS THE SAVIORS\n");
system("sleep 2");
#else
system("clear");
printf("HACKERS THE SAVIORS\n");
system("pause");
#endif

a();
b();
c();
d();
e();
f();
g();
}
/*int i;
int a;
	for(a=1;a<=50;a++){
		for(i=1;i<=75;i++){
			printf(CYN"█");
		}
		printf("\n");
	}
	system("mpg123 -q music.mp3");
	return;
*/
