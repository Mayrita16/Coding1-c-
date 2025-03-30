//Mayra Vargas Coding 1 Spring 2025 Week 7
//Recap day  

#include <iostream>    
#include <string>      
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
using namespace std;  

int main() {

  if (true){
    //start talking about vectors
    

    vector<string> favBooks; //= { "The Outsiders", "JJK Manga"};
    favBooks.push_back("The Outsiders");
    favBooks.push_back("JJK Manga");

    cout << "The first book in my list of favBook is " << favBooks[0] << ".\n";

    cout << "Please add another book to the list.\n";
    getline(cin, input);

    favBooks.push_back(input);      //adds another element to the end of the vector.

    cout << "There are now " << favBooks.size() << "books in the list.\n";
    cout << "The last book in the list is " << favBooks[favBooks.size() - 1] << ".\n";


   // useful stuff with vectors , after push_back and variable sizes
   // is #include <algorithm> for .find() and .sort() and .shuffle()

   cout << " Here is the unsorted list:\n";
   for (int i = 0; i < favBooks.size(); i++) {
    cout << favBooks[i] << "\n";
   }
   
   cout << "Let's sort the list!\n";
   sort(favBooks.beging(), favBooks.end());

   cout << "Here is a sorted list:\n";
   for(int i = 0; i < favBooks.size(); i++) {
    cout << favBooks[i] << "\n";
   }
   
   cout << "Randomly shuffling the list\n";
   random_shuffle(favBooks.begin(), favBooks.end());

   cout << "Here is the shuffled list:\n";
   for (int i = 0; i < favBooks.size(); i++);{
    cout << favBooks[i] << "\n";
   }

   cout << "Give me a book from the list, and i'll tell you what position it is in the list.\n";
   getline(cin, input);
   vector<string>::interior iter;
   iter = find(favBooks.begin(), favBooks.end(), input);
   
   if(iter != favbooks.end()) {
      cout << *iter << ".\n";
   }
   else {
      cout << "That book is not in the list.\n";
   }

 }


}

        
   
   
   
   

    
    

   