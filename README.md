# Text-Analyzer

Programming Project #4 – Text Analyzer
Goal
Author a program that analyzes and modifies a user’s text. The text analyzer allows a user to enter a small amount of text as a “post”, query basic information about the post, and modify the post by replacing acronyms with full text.
●	Requirement 1 – Program must display a menu of choices until user selects “Quit”.
o	The menu functionality should be written as a function
o	The menu must contain at minimum the following choices;
▪	1 – Input post
▪	2 – Output post
▪	3 – Get total word count
▪	4 – Replace acronyms
▪	5 – Quit

●	Requirement 2 – A user must be able to input a post
o	Posting must be written as a separate function with the declaration;
▪	void inputPost( string& )
▪	A post has a maximum of 128 characters and a minimum of three (3) characters 
▪	
●	Requirement 3 – A user must be able to output a post
o	Printing must be written as a separate function with the declaration;
▪	void outputPost( const string& )
▪	prints the currently saved post to the console

●	 Requirement 4 – A user must be able to get the total word count of a post
o	The word count functionality must be written as a function with the declaration:
▪	int getTotalWordCount( const string&)
▪	Counts and returns the number of distinct words in the input text, (a word can be considered anything that borders a space).

●	Requirement 5 – A user must be able to replace an acronym with user inputted words
o	Replace acronym must be written as a function with the following declaration;
▪	void replaceAcronyms( const string&, const string&, string&)
▪	Replaces any matching acronyms in the post with new phrase


Learning Objectives
This project provides: • Experience using functions, references, unit tests, and strings, It is also a review of designing flow control logic, selection, and looping. 

Sample Output
Here are examples of a valid output for the program:
1.	Menu Display
MENU
1 - Input a post
2 – Output post
3 – Get total word count
4. - Replace user defined acronyms
5 - Quit
Please enter your choice (1 – 5)  
2.	User selects menu item 1
Please enter your post: 
USER INPUT: IMHO - the best answer is “42”
3.	User selects menu item 2
		Your current post is: 
IMHO - the best answer is “42”
4.	User selects menu item 3
There are 5 words in your post
5.	User selects menu item 4
Please input the acronym you would like to replace
USER INPUT: IMHO
Please input the text you would like to replace IMHO with: 
USER INPUT: In my humble opinion
	Your post has been updated.

6.	User selects menu item 2
		Your current post is: 
In my humble opinion - the best answer is “42”
7.	User selects menu item 5
Thank you – goodbye
