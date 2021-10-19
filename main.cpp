/*	Project:    Program #4- Functions
	Name:       Darryl McCottrell
    Partner:    PARTNER'S NAME IF ANY
    Class:      example: CSC 1810 - Section 1
*/

#include <iostream>
#include<string>

using namespace std;

void inputPost(string &inPost) {
	while((inPost.size() < 3) || (inPost.size() > 128)) {
		cout << " Input post. A post must be a maximum of 128 words and a minimum of 3 words: " << endl;
		cin.ignore();
		getline(cin,inPost, '\n');
		
	}
		//Inputs Post that is a max of 128 words and a minimun of 3 words
}
void outputPost(const string &inPost) {
	cout << "Output post: " << inPost << endl;
	// Prints the post typed in previously in the input
}
int getTotalWordCount( const string &wdCount) {
	int numWord = 0;
	for(unsigned i = 0; i < wdCount.size(); i++) {
		char cnt = wdCount.at(i);
		if(isspace(cnt))
		numWord += 1;
	}
	return (numWord + 1); 			// Tells the number of words in the input

}
void replaceAcronyms( const string &f, const string &rep, string &userPost) {
	
	userPost.replace((userPost.find(f)), f.length(), rep); 			// Replaces the Acronyms in the Input Post and allows you to replace the function
}
void menu_choices() 
{
	string acronym = "";
	string choices = "";
	string userPost = "";
	string replace = "";

	while(choices != "5")      // Gives you the 5 choices in the menu
	{

		cout << "Menu Choices" << endl;
		cout << "1 - Input Post" << endl;
		cout << "2 - Output Post" << endl;
		cout << "3 - Get total word count" << endl;
		cout << "4 - Replace user acronyms" << endl;
		cout << "5 - Quit" << endl;

		cout << "Please enter your choice(1 - 5)" << endl;
		cin >> choices;
		
	

	if (choices == "1") 
	{
		inputPost(userPost);
	}
	else if (choices == "2") 
	{
		outputPost(userPost);
	}
	else if (choices == "3") 
	{
		cout << "The number of words in your post are:" << getTotalWordCount(userPost) << endl;
	}
	else if (choices == "4") 
	{
		cout << " Please input the acronym you would like to replace: ";
		cin >> acronym;
		cout << "What would you like to replace it with ? " ;
		cin.ignore();
		getline(cin,replace, '\n');

		replaceAcronyms(acronym,replace,userPost);
	}
	else if (choices == "5") {
		cout << "Thank You, Goodbye!" << endl;
	
	
	}
	}
	
	

}
	
		
	
int main(int argc, char *argv[])
{
	menu_choices(); // Captures the void function outside of the main function
	


	// This causes the program to pause at its completion.
	{
		char c;
		cout << "Hit enter to exit:";
		cin.get(c);
	}
	return 0;
}