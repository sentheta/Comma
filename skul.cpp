//#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<string>
#include<cstdlib>
#include<unistd.h>

using namespace std;

#define rep(i,a,b) for(int i=a;i<b;i++)


// ==================== PRINT TABEL PELAJARAN ==================== //

// print tabel pelajaran
void print_table_0(){
	cout
	<<"===========TABEL PELAJARAN===========\n"
	<<"| MON | TUE | WED | THU | FRI | EXT |\n"
	<<"|-----------------------------------|\n"
	<<"| IND | BIO | PJK | PKW | ENG | AGM |\n"
	<<"| FSK | SNI | KIM | MTK | BMR |     |\n"
	<<"| SJR | MTK |     | PKN | JPG |     |\n"
	<<"=====================================\n";
	cout.flush();
}

// ascii art simple border
void print_table_1(){
	cout
	<<"===========TABEL PELAJARAN===========  ____________________\n"
	<<"| MON | TUE | WED | THU | FRI | EXT | /        ____        \\\n"
	<<"|-----------------------------------| |       /    \\       |\n"
	<<"| IND | BIO | PJK | PKW | ENG | AGM | |       \\____/       |\n"
	<<"| FSK | SNI | KIM | MTK | BMR |     | |       __||__       |\n"
	<<"| SJR | MTK |     | PKN | JPG |     | |      /      \\      |\n"
	<<"===================================== \\____________________/\n";
	cout.flush();
}

// ascii art thick border
void print_table_2(){
	cout
	<<"===========TABEL PELAJARAN===========  ____________________\n"
	<<"| MON | TUE | WED | THU | FRI | EXT | /_______ ____ ______ \\\n"
	<<"|-----------------------------------| ||      /    \\      ||\n"
	<<"| IND | BIO | PJK | PKW | ENG | AGM | ||      \\____/      ||\n"
	<<"| FSK | SNI | KIM | MTK | BMR |     | ||      __||__      ||\n"
	<<"| SJR | MTK |     | PKN | JPG |     | ||_____/______\\_____||\n"
	<<"===================================== \\____________________/\n";
	cout.flush();
}

void print_table_3(){
	cout
	<<"===========TABEL PELAJARAN=========== /====================\\\n"
	<<"| MON | TUE | WED | THU | FRI | EXT | ||       ____       ||\n"
	<<"|-----------------------------------| ||      /    \\      ||\n"
	<<"| IND | BIO | PJK | PKW | ENG | AGM | ||      \\____/      ||\n"
	<<"| FSK | SNI | KIM | MTK | BMR |     | ||      __||__      ||\n"
	<<"| SJR | MTK |     | PKN | JPG |     | ||_____/______\\_____||\n"
	<<"===================================== \\____________________/\n";
	cout.flush();
}

void print_table_4(){
	cout
	<<"===========TABEL PELAJARAN=========== /====================\\\n"
	<<"| MON | TUE | WED | THU | FRI | EXT | ||       ____       ||\n"
	<<"|-----------------------------------| ||      /    \\      ||\n"
	<<"| IND | BIO | PJK | PKW | ENG | AGM | ||      \\____/      ||\n"
	<<"| FSK | SNI | KIM | MTK | BMR |     | ||      __||__      ||\n"
	<<"| SJR | MTK |     | PKN | JPG |     | ||     /______\\     ||\n"
	<<"===================================== \\====================/\n";
	cout.flush();
}

void print_table_5(){
	cout
	<<"===========TABEL PELAJARAN===========  ____________________\n"
	<<"| MON | TUE | WED | THU | FRI | EXT | /        ____        \\\n"
	<<"|-----------------------------------| ||      /    \\      ||\n"
	<<"| IND | BIO | PJK | PKW | ENG | AGM | ||      \\____/      ||\n"
	<<"| FSK | SNI | KIM | MTK | BMR |     | ||      __||__      ||\n"
	<<"| SJR | MTK |     | PKN | JPG |     | ||_____/______\\_____||\n"
	<<"===================================== \\____________________/\n";
	cout.flush();
}

// print author name
void print_author(){
	cout<< "                                           created by vanwij\n";
	cout.flush();
}

// print program name
void print_name(){
	cout
	<<" Comma : Command Of Managing Missions and Assignments\n";
}

// version check
void print_version(){
	cout
	<<"Comma : Command Of Managing Missions and Assignments\n"
	<<"version 0.1\n";
}

// print manual
void print_help(){

	print_version();

	cout
	<<"Options :\n"
	<<"   [mapel_code]    open corresponding mapel classroom\n"
 	<<"   0, 1            open classroom homepage\n"
 	<<"   CEK [0/1]       open classroom to-do list\n"
 	<<"   WA              open whatsapp\n"
 	<<"   MEGA            open MEGA drive\n"
 	<<"   MEET, ZOOM      open corresponding meeting platform\n"
 	<<"   ELEARNING       open school elearning platform\n"
 	<<"   GDRIVE [0/1]    open google drive\n"
	<<"   CLEAR           clear screen\n"
	<<"   END, CLOSE      stop program\n"
	<<"   [bash_command]  run bash command\n"
	<<"                   WARNING : NOT STABLE\n";
}


// ==================== Utility to run commands ==================== //

// convert mapel name to google-classroom link
// can be ported to a separate file in the future -07.13.2021
string mapel_to_link(string mapel){

	// convert to caps-lock styel
	transform(mapel.begin(), mapel.end(), mapel.begin(), ::toupper);

	// end program
	if (mapel=="END")
		return "END";
	if (mapel=="CLOSE")
		return "END";
	if (mapel=="EXIT")
		return "END";

	// clear screen
	if (mapel=="CLEAR")
		return "CLEAR";

	// print help
	if (mapel=="HELP")
		return "HELP";

	// check version
	if (mapel=="VER")
		return "VER";

	// special classroom call
	if (mapel=="0") //
		return "https://classroom.google.com/u/0/h";
	if (mapel=="1") //
		return "https://classroom.google.com/u/1/h";
	if (mapel=="CEK")
		return "https://classroom.google.com/u/0/a/not-turned-in/all";
	if (mapel=="CEK0")//
		return "https://classroom.google.com/u/0/a/not-turned-in/all";
	if (mapel=="CEK1")//
		return "https://classroom.google.com/u/1/a/not-turned-in/all";

	// special websites call
	if (mapel=="WA") //
		return "https://web.whatsapp.com/";
	if (mapel=="MEGA")
		return "https://mega.nz/fm/MYIiwJwJ";
	if (mapel=="GDRIVE")
		return "https://drive.google.com/drive/u/0/my-drive";
	if (mapel=="GDRIVE0")
		return "https://drive.google.com/drive/u/0/my-drive";
	if (mapel=="GDRIVE1")
		return "https://drive.google.com/drive/u/1/my-drive";
	if (mapel=="MEET")
		return "https://meet.google.com/";
	if (mapel=="ZOOM")
		return "https://us04web.zoom.us/join";
	if (mapel=="ELEARNING")
		return "https://elearning.sman8pekanbaru.sch.id/my/";

	// monday
	if (mapel=="IND") //
		return "https://classroom.google.com/u/0/c/MzcyNjk2ODE4NTI0";
	if (mapel=="FSK") // 
		return "https://classroom.google.com/u/1/c/MzcwNDI3MzI4Njg1";
	if (mapel=="SJR") //
		return "";

	// tuesday
	if (mapel=="BIO") // 
		return "https://classroom.google.com/u/1/c/MzcwNTcxMTY0ODg3";
	if (mapel=="SNI") // 
		return "https://classroom.google.com/u/1/c/MzcwNDIxMTc2NDAy";
	if (mapel=="MTK") // 
		return "https://classroom.google.com/u/0/c/MzcwNDM4NDk5NTAz";

	// wednesday
	if (mapel=="PJK") // 
		return "https://classroom.google.com/u/0/c/MzcwMzk2NDUxNjc1";
	if (mapel=="KIM") // 
		return "https://classroom.google.com/u/1/c/MzcwNTYzOTg2ODIw";
	
	// thursday
	if (mapel=="PKW") // 
		return "https://classroom.google.com/u/1/c/MzA1NjM1MTc4NjIy";
	if (mapel=="MTK") // 
		return "https://classroom.google.com/u/0/c/MzcwNDM4NDk5NTAz";
	if (mapel=="PKN") // 
		return "https://classroom.google.com/u/1/c/MzA1NjY0OTg0NTA0";
	
	// friday
	if (mapel=="ENG") //
		return "";
	if (mapel=="BMR") // 
		return "https://classroom.google.com/u/1/c/MzcwMzc0NjQ4MDM2";
	if (mapel=="JPG") //
		return "";

	// extra
	if (mapel=="AGM") //
		return "";

	// invalid mapel
	return "?";
}


// open mapel classroom with brave browser
// hide output by routing to /dev/null
void brave_command( string link ){
	string ret = "brave-browser " + link + " > /dev/null 2>&1";
	system( ret.c_str() );
}



// ==================== DRIVER CODE ==================== //

int main(int argc, char** argv){
	//ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	
	// clear screen
	system("clear");

	// print tabel pelajaran and author if wanted
	//print_table();
	print_name();
	print_table_2();
	print_author();

	string inp = "", inp_copy = "";

	// open provided command-line arguments
	// cannot make it work, maybe fix later lol -07.13.2021
	/*
	rep(i,1,argc){

		// inp = (argv[i]);

		/////
		cout << argv[i];

		inp = mapel_to_link(argv[i]);
		if(inp == "") continue;
		brave_command(inp);
	}
	*/

	// ask for more arguments, if wanted
	// open provided arguments
	while(1){
		
		//cout << "PILIH MAPEL : ";
		cout << ">>> ";
		cout.flush();	
		getline(cin, inp);
		inp_copy = inp;
		inp = mapel_to_link(inp);
		
		// undefined input, run as system
		if(inp == "?"){
			system(inp_copy.c_str());
			continue;
		}

		// clear screen
		if(inp == "CLEAR"){
			system("clear");
			print_name();
			print_table_2();
			print_author();
			continue;
		}

		// help screen
		if(inp == "HELP"){
			print_help();
			continue;
		}

		// version check
		if(inp == "VER"){
			print_version();
			continue;
		}

		// ending program
		if(inp == "END"){
			cout << "Ending...\n";
			cout.flush();
			break;
		}

		cout << "Opening...\n";
		cout.flush();		
		brave_command(inp);
	}

}


/*
g++ compilation
g++ skul.cpp -o skul
*/