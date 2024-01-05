livre createBook(void) { // function for adding a book to the software. The user
                        // will have to input the name, id number, author, date
                        // of publication, month of publication and year of the
                        // publication of the book to have a successful entry
  livre newBook;
  cout << "In add function" << endl;
  cout << "Enter the name of the book" << endl;
  cin >> newBook.name;
  cout << "Enter the name of the Author" << endl;
  cin >> newBook.author;
  cout << "Enter the genre"<<endl;
  cin >> newBook.genre;
  newBook.isHere = true;
  cout << "The book has successfully been added!";
  return newBook;
}

user createUser() { // making a function that takes in the username and password
                    // if the user wants to sign up

  user newUser;
  cout << "Please enter your username: ";
  cin >> newUser.username;
  cout << "Please enter your password: ";
  cin >> newUser.password;
  cout
      << "Are you a staff member? (y/n):"; // the code will then ask the user if
                                           // they are a staff member or a
                                           // student to give each different
                                           // powers. The staff if provided with
                                           // higher level operation
                                           // responsibilities than the students
  char op;
  cin >> op; // taking in the input to ask if staff member or no

  if (op == 'y') { // if the user inputs 'y', than the program will detect that
                   // they are a staff member, and student if not
    newUser.isStaff = true;
  } else {
    newUser.isStaff = false;
  }

  cout << endl << "Successfully created new account!" << endl << endl;
  return newUser;
}