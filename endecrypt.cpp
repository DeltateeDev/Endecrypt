#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <fstream>
#include <algorithm> // for std::find
#include <iterator> // for std::begin, std::end
using namespace std;

int encryption(char characters[],string text){
	string translation;

	cout << endl << "Encrypting the text: '" << text << "'" << endl;

	cout << endl << endl << "---------------------------" << endl << endl; //just for decoration
	
	
	for (int i = 0; i < text.length(); i++){
		switch (text[i]){
			case 'a':
				translation.push_back(characters[0]);
				break;
			case 'b':
				translation.push_back(characters[1]);
				break;
			case 'c':
				translation.push_back(characters[2]);
				break;
			case 'd':
				translation.push_back(characters[3]);
				break;
			case 'e':
				translation.push_back(characters[4]);
				break;
			case 'f':
				translation.push_back(characters[5]);
				break;
			case 'g':
				translation.push_back(characters[6]);
				break;
			case 'h':
				translation.push_back(characters[7]);
				break;
			case 'i':
				translation.push_back(characters[8]);
				break;
			case 'j':
				translation.push_back(characters[9]);
				break;
			case 'k':
				translation.push_back(characters[10]);
				break;
			case 'l':
				translation.push_back(characters[11]);
				break;
			case 'm':
				translation.push_back(characters[12]);
				break;
			case 'n':
				translation.push_back(characters[13]);
				break;
			case 'o':
				translation.push_back(characters[14]);
				break;
			case 'p':
				translation.push_back(characters[15]);
				break;
			case 'q':
				translation.push_back(characters[16]);
				break;
			case 'r':
				translation.push_back(characters[17]);
				break;
			case 's':
				translation.push_back(characters[18]);
				break;
			case 't':
				translation.push_back(characters[19]);
				break;
			case 'u':
				translation.push_back(characters[20]);
				break;
			case 'v':
				translation.push_back(characters[21]);
				break;
			case 'w':
				translation.push_back(characters[22]);
				break;
			case 'x':
				translation.push_back(characters[23]);
				break;
			case 'y':
				translation.push_back(characters[24]);
				break;
			case 'z':
				translation.push_back(characters[25]);
				break;
			case 'A':
				translation.push_back(characters[26]);
				break;
			case 'B':
				translation.push_back(characters[27]);
				break;
			case 'C':
				translation.push_back(characters[28]);
				break;
			case 'D':
				translation.push_back(characters[29]);
				break;
			case 'E':
				translation.push_back(characters[30]);
				break;
			case 'F':
				translation.push_back(characters[31]);
				break;
			case 'G':
				translation.push_back(characters[32]);
				break;
			case 'H':
				translation.push_back(characters[33]);
				break;
			case 'I':
				translation.push_back(characters[34]);
				break;
			case 'J':
				translation.push_back(characters[35]);
				break;
			case 'K':
				translation.push_back(characters[36]);
				break;
			case 'L':
				translation.push_back(characters[37]);
				break;
			case 'M':
				translation.push_back(characters[38]);
				break;
			case 'N':
				translation.push_back(characters[39]);
				break;
			case 'O':
				translation.push_back(characters[40]);
				break;
			case 'P':
				translation.push_back(characters[41]);
				break;
			case 'Q':
				translation.push_back(characters[42]);
				break;
			case 'R':
				translation.push_back(characters[43]);
				break;
			case 'S':
				translation.push_back(characters[44]);
				break;
			case 'T':
				translation.push_back(characters[45]);
				break;
			case 'U':
				translation.push_back(characters[46]);
				break;
			case 'V':
				translation.push_back(characters[47]);
				break;
			case 'W':
				translation.push_back(characters[48]);
				break;
			case 'X':
				translation.push_back(characters[49]);
				break;
			case 'Y':
				translation.push_back(characters[50]);
				break;
			case 'Z':
				translation.push_back(characters[51]);
				break;
			case '0':
				translation.push_back(characters[52]);
				break;
			case '1':
				translation.push_back(characters[53]);
				break;
			case '2':
				translation.push_back(characters[54]);
				break;
			case '3':
				translation.push_back(characters[55]);
				break;
			case '4':
				translation.push_back(characters[56]);
				break;
			case '5':
				translation.push_back(characters[57]);
				break;
			case '6':
				translation.push_back(characters[58]);
				break;
			case '7':
				translation.push_back(characters[59]);
				break;
			case '8':
				translation.push_back(characters[60]);
				break;
			case '9':
				translation.push_back(characters[61]);
				break;
			case ' ':
				translation.push_back(' ');
				break;
			case '.':
				translation.push_back('.');
				break;
			case '-':
				translation.push_back('-');
				break;
			case '_':
				translation.push_back('_');
				break;
			case '/':
				translation.push_back('/');
				break;
		}
	}
	cout << "Original message: " << text << endl << endl;
	cout << "Encrypted message: " << translation << endl << endl;
	cout << "Key used for encryption: ";
	for (int i = 0; i< 62; i++){
		cout << characters[i];
	}
	cout << endl << endl << "---------------------------" << endl << endl; //just for decoration
	
}

int decryption(char characters[], string text){
	string table = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	string key;
	int order[256];
	string translation;

	cout << endl << "Decrypting the text: '" << text << "'" << endl;

	cout << endl << endl << "---------------------------" << endl << endl; //just for decoration
	
	for (int i = 0; i < 62; i++){ //a loop for injecting the string with the key;
		key.push_back(characters[i]);
	}
	
	for (int i = 0; i < text.length(); i++){
		order[i] = (key.find(text[i])); //this finds in which place of the key the letter of encoded message is.
		translation.push_back(table[order[i]]);
	}
	cout << "Original message: " << text << endl << endl;
	cout << "Decrypted message: " << translation << endl << endl;
	cout << "Key used for Decryption: " << key;
	cout << endl << endl << "---------------------------" << endl << endl; //just for decoration
}

int key_setting(string keyinput,short choice, string text){
	char characters[62];
		//this loop is injecting the key into the array.
	for (int i = 0; i < 62; i++){
		characters[i] = keyinput[i];
	}
	
	if (choice == 1){
		encryption(characters,text);
	}
	else decryption(characters,text);

}

int key_generation(string keyinput, short choice, string text){
	char table[] {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','0','1','2','3','4','5','6','7','8','9'};
	char characters[62];
	char random;
	int generated;
	string generated_key;
	bool exists;
	
	srand (time(NULL));
	for (int i = 0; i < 62; i++){
		generated = rand() % 62;
		random = table[generated];
		exists = std::find(std::begin(characters), std::end(characters), random) != std::end(characters); //this checks if a character exists already inside the array
		if(exists == 0){
			characters[i] = random;
		}
		else i--;
	}
	if (choice == 1){
		encryption(characters,text);
	}
	else decryption(characters,text);
}

int main(){
	
	string key;
	string text;
	short choice;
	bool restarted = false;
	
	cout << "Endecrypt - Message Encryption & Decryption tool by Deltatee (VerWellick)" << endl;  //logo and description
	cout << "____________________________________________________" << endl << endl;
	
	
	
	for (int menu = 0; menu < 1; menu++){ //loop for making the program infinite
	cout << "Enter the message you want to translate." << endl << endl;
	if (restarted == true){ //calling cin.ignore() for being able to use the program a second time in one session. 
		cin.ignore();		//if the function is called on the first section, it ignores the first character of input message.
	}
	getline(cin,text);
	restarted = true;
	
	for (int loop = 0; loop < 1; loop++){
		cout << "Do you want to Encrypt this message [1], or Decrypt this message [2] ?" << endl;
		cin >> choice;
		if (choice < 1 || choice >2){
			cout << "Selected option does not exist. Please choose an existing option." << endl << "---------------------" << endl;
			choice = 0;
			loop = -1;
	}
}
	cout << endl << "---------------------" << endl << endl;
			
	switch(choice){
		case 1:
			cout << "Enter a key: (type in '0' for random generation)" << endl;
			cin >> key;
			if(key.length() == 62){
				key_setting(key,choice,text);
			}
			else if(key[0] == '0'){
				key_generation(key,choice,text);
			}
			else cout << "Selected key is invalid. Please restart the application.";

			break;
		case 2:
			cout << "Enter a key:" << endl;
			cin >> key;
			if(key.length() == 62){
				key_setting(key,choice,text);
			}
			else cout << "Selected key is invalid. Please restart the application.";
			break;
	}
	menu--;
}
	return 0;
}

