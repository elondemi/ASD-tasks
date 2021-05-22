
#include <iostream>
#include <string>
using namespace std;
string dec_to_hex(int i) {
	if(i == 10) return "A";
	if(i == 11) return "B";
	if(i == 12) return "C";
	if(i == 13) return "D";
	if(i == 14) return "E";
	if(i == 15) return "F";
	if( i < 10) return to_string(i); //asci table
	return to_string(i);
}

string reverse_word(string word) {
	string result = "";
	for(int i = word.length() -1 ; i >= 0; i--) {
		result = result +  word.at(i);
	}
	return result;
}


int main(){
    cout << "shkruani numrin ne decimal";
	string reversed_hex = "";
	int x ;
    cin >> x;
	bool shouldNotEnd = x > 0;
	while(shouldNotEnd){
		if(x/16 == 0) shouldNotEnd = false;
		reversed_hex += dec_to_hex(x%16);

		x /= 16;
	}


	string result = reverse_word(reversed_hex);
    cout << result;
return 0;
}