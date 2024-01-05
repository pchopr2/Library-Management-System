#include <array>
#include <iostream>
#include <unistd.h>
#include <vector>
using namespace std;
#include "structure.h"
#include "createNew.h"
#include "search.h"
#include "withdraw.h"

bool login(vector<user> users,
           int &currentUser) { // creating a function that runs if the user
                               // wants to sign in

  string userAttempt = " ";
  string passAttempt = " ";
  bool condition = false;
  cout << "Enter your username" << endl;
  cin >> userAttempt;
  cout << "Enter your password" << endl;
  cin >> passAttempt;

  for (int i = 0; i < users.size();
       i++) { // move on if the username & password are correct

    if (userAttempt == users[i].username && passAttempt == users[i].password) {
      currentUser = i;
      condition = true;
    } else {
      cout << "Nnvalid username or Password\n" << endl;
    }
  }

  return condition;
}

void forgot(vector<user> users, int &currentUser) {
  string username = " ";
  cout << "Enter you username: ";
  cin >> username;
  cout << endl;
  for (int i = 0; i < users.size(); i++) {

    if (username == users[i].username) {

      cout << "Your password is: " << users[i].password << endl << endl;
      sleep(3);
      break;
    }
  }
}

int main() {
  cout << "!Library Management!" << endl << endl;

  create(book, titles, authors, genres);

  char input = ' ';
  bool logedIn = false;
  int currentUser = 0;

  while (logedIn == false) {

    cout << "1 to Sign in:" << endl
         << endl
         << "2 to Sign up:" << endl
         << endl
         << "3 if you forgot your password:" << endl;

    cin >> input;
    if (input == '1') {
      logedIn = login(users, currentUser);
    } else if (input == '2') {
      users.push_back(createUser());
      continue;
    } else if (input == '3') {
      forgot(users, currentUser);

    } else {
      cout << "invalid input" << endl << endl;
      continue;
    }
  }

  cout << "You are currently logged in under: \n"
       << users[currentUser].username << endl;

  bool loggedOut = false;
  while (loggedOut == false) {
    int choice;

    cout << "What would you like to do?" << endl
         << endl
         << "Withdraw a book: 1\n\nDeposit a book: 2\n\nSearch for a book: 3 "
            "\n \nRegister new book: 4\n\n"
            "log out: 5 "
         << endl;

    cin >> choice;

    vector<int> sResult;

    switch (choice) {
    case 1:
      // current user = z  book==x   users=y
      withdrawBook(book, users, currentUser);
      break;
    case 2:
      depositBook(book, users, currentUser);
      break;
    case 3:
      search(sResult, book);
      break;
    case 4:
      if (users[currentUser].isStaff == true) {
        book.push_back(createBook());
        break;
      } else {
        cout << "This action is restricted to administrators" << endl;
        break;
      }
    case 5:
      loggedOut = true;
      break;
    }
  }
}
