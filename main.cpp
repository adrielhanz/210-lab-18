// COMSC-210 | Lab 18 | Adriel Chandra
// IDE used: Visual Studio Code

#include <iostream>
#include <string>

using namespace std;

// Node structure
struct ReviewNode {
    float rating;
    string comment;
};

// Function prototypes
void addToHead();
void addToTail();
void displayReviews();

int main(){
    int choice;
    char anotherReview;

    cout << "Which linked list method should we use?\n";
    cout << "    [1] New nodes are added at the head of the linked list\n";
    cout << "    [2] New nodes are added at the tail of the linked list\n";
    cout << "Choice: ";
    cin >> choice;

    do{
        float rating;
        string comment;

        cout << "Enter review rating 0-5: ";
        cin >> rating;

        cout << "Enter review comments: ";
        getline(cin, comment);

        if (choice == 1){
            addToHead();
        } else{
            addToTail();
        }

        cout << "Enter another review? Y/N: "
    } while (anotherReview == 'Y' || anotherReview == 'y')
}

// Function definitions
void addToHead(){

}
void addToTail(){

}
void displayReviews(){

}