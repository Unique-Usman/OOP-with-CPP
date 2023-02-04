#include <iostream>
#include <cstring>
#include <string>


using namespace std;

class Word{
private:
        char word[100];
        char meaning[1000];
        short int lang;
public:
        void setWord();
        void printWord();
        int isPalindrome();
        int findLength();
//      Word concat(Word w);
        Word();
        Word(char *w);
        Word(char *w, char *m);

/*      Word(){
                strcpy(word, "");
        }*/
        ~Word(){
                cout << "Destructor invoked" << endl;
        }
};

int main(){
        Word w1;
        Word w2("Hello");
        Word w3("Hello", "Begining");

//      w1.setWord();
        w1.printWord();
        w1.isPalindrome();
        w1.findLength();
//      w1.concat(w3);
}

//defining the function to set the content of the word
void Word::setWord(){
        cout << "Enter the word you want" << endl;
        cin >> word;
}

//defining the function to print the word;
void Word::printWord(){
        cout << word;
}
//the default constructor
Word::Word(){
        cout << "Enter the word: " << endl;
        cin >> word;

}
//parameerized constructor for one paramter
Word::Word(char *w){
        strcpy(word, w);

}

//parameterized constructor for two parameter //this is also called constructor overloading
Word::Word(char *w, char  *m){
        strcpy(word, w);
        strcpy(meaning, m);
}


int Word::isPalindrome(){
        int size = strlen(word);
        cout << "Inside the palindrome" << size << endl;
        for(int i = 0; i < size - 1; i++){
                if (word[i] !=  word[size - 1 - i]){
                        cout << "Not a palindrome" << endl;
                        return 1;
                }
                cout << "It is a palindrome" << endl;
                return 0;
        }
}
int Word::findLength(){
        int size = strlen(word);
        int count = 0;
        for(int i = 0; i < size; i++){
                count++;
        }
        cout << count << endl;
        return count;
}
//Word Word::concat(Word w){
//      Word *w1;
//      w1->word = word + w.word;
//      cout << w1->word;
//}          
