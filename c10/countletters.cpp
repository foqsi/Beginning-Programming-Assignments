#include<iostream>
#include<fstream>
using namespace std;

int main(){

char filename[] = "randomwords.txt"; // update the file name here in this line
ifstream infile(filename);

if(!infile.is_open()){
cout<<"Error: Unable to open/read file: "<<filename<<endl;
return 1;
}

int upperCases=0;
string line;

while(getline(infile,line,'\n')){

for(int i=0; i<line.length();i++){
if('A'<=line.at(i) && line.at(i)<='Z') upperCases+=1;
}
}
infile.close();

cout<<"Total upper case letters in the file is : "<<upperCases<<endl;

}