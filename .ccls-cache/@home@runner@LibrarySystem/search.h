
void searchByName(vector<livre> x, vector<int> &sResult) {
  cout << "please enter the name of the book that you would like to search for"<< endl;
  
  string search = " ";
  cin >> search;
  bool isFound = false;
  
  for (int i = 0; i < x.size(); i++) {
    if (search == x[i].name && x[i].isHere == true) {
      sResult.push_back(i);
      isFound = true;
      // if the search == the book, bring it out
    }
  }


  if (isFound) {
    cout << search << " is avaliable, its Id is "<<sResult[0] << endl;
  } else {
    cout << search << " is unavailable." << endl;
  }
}
    
    


void searchByAuthor(vector<livre> x, vector<int> &sResult) {
  cout << "please enter the author that you would like to search for"<< endl;
  string search = " ";
  cin >> search;
  bool isFound = false;
  
  for (int i = 0; i < x.size(); i++) {
    if (search == x[i].author && x[i].isHere == true) {
      sResult.push_back(i);
      isFound = true;
      // if the search == the book, bring it out
    }
  }

  if (isFound) {
    for(int x;x<sResult.size();x++){
      cout<<book[sResult[x]].name<<" has an index of "<<sResult[x]<<endl<<endl;
    }
  } else {
    cout <<"there are no books under author "<<search << endl;
  }
}

void searchByGenre(vector<livre> x, vector<int> &sResult) {
  
  cout << "please enter the genre that you would like to search for"<< endl;
  
  string search = " ";
  cin >> search;
  bool isFound = false;
  
  for (int i = 0; i < x.size(); i++) {
    if (search == x[i].genre && x[i].isHere == true) {
      sResult.push_back(i);
      isFound = true;
      // if the search == the book, bring it out
    }
  }

  if (isFound) {
    for(int x=0;x<sResult.size();x++){
      cout<<book[sResult[x]].name<<" index: "<<sResult[x]<<endl<<endl;
    }
  } else {
    cout <<"there are no books under"<<search << " is unavailable." << endl;
  }
}

void search(vector<int>&sResult,vector<livre> x){
  cout<<"what would you like to search by\n"<<endl<<
    "search by name: 1\n\n"<<"search by author: 2\n\n"<<"search by genre: 3"<<endl;
  int searchchoice=0;
  cin>>searchchoice;
  
  switch(searchchoice){
    case 1:
      searchByName(book,sResult);
      break;
    case 2:
      searchByAuthor(book,sResult);
      break;
    case 3:
      searchByGenre(book,sResult);
      break;
    default:
      cout<<"invalid input\n"<<endl;
  }
}