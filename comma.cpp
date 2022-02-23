#include<bits/stdc++.h>
using namespace std;

void uncaps(string& s){
	for(char& c : s){
		if('A'<=c && c<='Z'){
			c -= 32;
		}
	}
}


map<string,string> m;
void init_to_url(){
	ifstream in;
	in.open("list.txt");

	string a, b;
	while(in >> a >> b){
		uncaps(a);
		//cout << a << " " << b << endl;
		m[a] = b;
	}
	in.close();
}
string to_url(string s){
	if(m.count(s)) return m[s];
	return "";
}


void f(){
	cout << ">>> "; cout.flush();
	string s;
	cin >> s;
	uncaps(s);

	s = to_url(s);
	if(s.size() == 0){
		cout << "404 STRING NOT FOUND" << endl;
		return;
	}
	cout << "Opening..." << endl;

	string cmd;
	// linux - brave
	//cmd = "brave-browser " + s + " > /dev/null 2>&1";
	// windows
	cmd = "start \"\" \""+s+"\"";

	system(cmd.c_str());
}

int main(){
	cout << "COMMA by vanwij" << endl;
	init_to_url();
	while(true){
		f();
	}
}

// compile command in linux for windows :
// x86_64-w64-mingw32-g++ b.cpp -static-libgcc -static-libstdc++ -o comma.exe
