#include <string>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {
  string name;
  cout << "\x1B[92mEnter name > \x1B[00m";
  cin >> name;
  system("clear");
  if(!name.empty()){
  printf("welcome to termax \n\n");
  while (true)
  {
  	string text;
  	cout << "\x1B[92m" << name << "\x1B[91m@\x1B[92mconsole\x1B[93m-$\x1B[00m ";
  	cin >> text;
  	if(text == "help"){
  		cout << " command      description\n ------------------------\n tecat        Ascii animation\n sysinfo      Abute system\n abute        Abute we";
  	}
  	else if(text == "tecat"){
  		printf("\x1B[93m  _     _         _     _\n");
  		cout << " | |___| |       | |___| |  --| \x1B[91mHello my friend \x1B[93m\n";
  		printf(" |       |  ||_  |       |\n");
  		printf(" | # _ # | / __| | # _ # |\n");
  		printf(" |       |/ /    |       |\n");
  		printf("_|         /_____|       |___\n");
  	}
  	else if(text == "sysinfo"){
  	   FILE *fp;
    char path[1035];
    fp = popen("whoami", "r");
    while (fgets(path, sizeof(path)-1, fp) != NULL) {
    time_t now = time(0);
    tm *ltm = localtime(&now);
      cout << "\x1B[96m ############ \n";
      cout << "\x1B[96m  ##  ##  ##   "<<"\x1B[92m"<<name<<"\x1B[91m@\x1B[92m"<<"console\n";
      cout << "\x1B[96m  ##  ##  ##   "<<"\x1B[91m"<<"--------------\n";
      cout << "\x1B[96m  ##  ##  ##   "<<"\x1B[92m"<<ltm->tm_hour << ":" << ltm->tm_min << ":" << ltm->tm_sec<<"\n";
      cout << "\x1B[96m  ##  ##  ##   "<<"\x1B[92mtermax OS"<<"\n";
      cout << "\x1B[96m  ##  ##  ##   "<<"\x1B[92m"<<path;
      cout << "\x1B[96m  ##  ##  ##\n";
      cout << "\x1B[96m  ##  ##  ##   \x1B[105m  \x1B[103m  \x1B[102m  \x1B[101m  \x1B[104m  \x1B[106m  \x1B[00m";
  	}
  	}
  	else if(text == "abute"){
  		printf("\x1B[96m github > Mr-Banana-2045\n Terminal version > 1.0");
  	}else{
          system(text.c_str());
  	}
  	cout << endl;
  }
  return 0;
  }
}
