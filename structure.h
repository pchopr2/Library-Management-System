

struct livre{
  string name;
  string author;
  string genre;
  bool isHere;
  string owner=" ";
};

vector<livre>book;

livre emptyBook() {
  livre newBook;
  return newBook;
}

void create(
    vector<livre>&bb,
    array<string,21> tt,
    array <string,21> aa,
    array <string,21> gg){
      for(int x=0;x<21;x++){
        
        book.push_back(emptyBook());
        book[x].name=tt[x];
        book[x].author=aa[x];
        book[x].genre=gg[x];
      }  
    } 





  array <string,21> titles = {
      "lord of the flies",// 0
      "Duck Duck Goose",// 1// 
      "Twilight",// 2
      "little red riding//  hood",// 3
      "Watching water boil",// 4
      "How to cook onion",// 5
      "Twilight 3",// 6
      "Diary of a Wimpy Kid: Rodrick Rules",// 7
      "How milk was invented",// 8
      "Gogo's strange Journey",//9
      "Spongebob: return of the brotherhood",// 10
      "What to do if Novel finds your uncles attractive",// 11
      "Advanced functions 10",// 12
      "How to hide your uncle from Novel",// 13
      "Twilight 7",// 14
      "The life of spongebob",// 15
      "How to read time",// 16
      "Advanced Functions 12",// 17
      "Reason of our existance",// 18
      "Why was I a chid",// 19
      "My life in residential Schools",// 20
  };

  array <string,21> authors={
  "william golding",//0
  "Pranav Chopra",//1
  "Stephanie Meyer",//2
  "Charles Perrault",//3
  "Deen Razzaq",//4
  "Deen Razzaq",//5
  "Stephanie Meyer"//6
  "Jeff Kinney",//7
  "Novel B Alex",//8
  "M Shakeeb Masood",//9
  "Deen Razzaq",//10
  "M talal Nasir",//11
  "Chris",//12
  "M talal Nasir",//13
  "Stephanie Meyer",//14
  "Pranav Chopra",//15
  "Novel B Alex",//16
  "Chris",//17
  "Pranav Chopra",//18
  "Pranav Chopra",//19
  "Novel B Alex",//20
  };

  array <string,21> genres={
  "horror",//0
  "comedy",//1
  "romance",//2
  "comedy",//3
  "action",//4
  "non-fiction",//5
  "romance",//6
  "comedy",//7
  "non-fiction",//8
  "action",//9
  "action",//10
  "non-fiction",//11
  "horror",//12
  "non-fiction",//13
  "romance",//14
  "non-fiction",//15
  "non-fiction",//16
  "horror",//17
  "action",//18
  "comedy",//19
  "non-fiction",//20
  };


struct user {
  string username;
  string password;
  bool isStaff;
  vector<livre> userBooks;
};

 vector<user> users;

user emptyUser() {
  user newUser;
  return newUser;
}