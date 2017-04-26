#include <iostream>
#include <sstream>
#include <string>
#include <map>
#include <conio.h>
using namespace std;
int main()
{  
string text;
string str;
getline(cin,str); 
istringstream istr(str);
map< string, int > count;
string word;
 
while (istr >> word)
	
	++count[word];
 	for (map< string, int >::const_iterator it = count.begin();
        it != count.end();
		++it)
    cout << it->first << ": " << it->second <<endl;
         	
	getch();
    return 0;
}
