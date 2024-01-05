 //withdraw and deposit books
//current user = z  book==x   users=y
void depositBook(vector<livre>&x,vector<user>y,int z){

  vector<int> id;
  bool condition=false;
  int deposit=0;
 
  for(int i=0;i<x.size();i++){
    if(y[z].username==x[i].owner){
      id.push_back(i);
      condition=true;
    }
  }
  if(condition){
    cout<<"the books that you currently have are:\n"<<endl;
    for(int i=0;i<id.size();i++){
      cout<<x[id[i]].name<<": "<<id[i]<<endl<<endl;
    }
    cout<<"enter the id of the book you would like to return"<<endl;
    cin>>deposit;
    x[deposit].isHere=true;
    x[deposit].owner=" ";
    cout<<"successfuly returned book"<<endl;
  
  }
  else{
    cout<<"thou art bookless"<<endl;
  }
  

  
}

void withdrawBook(vector<livre>&x,vector<user>y,int z){
  bool condition=false;

  while(condition==false){
    
    char yn=' ';
    int id=0;
    
    
    cout<<"please enter the Id of the book you would like to take out"<<endl;
    cin>>id;
    cout<<"you are going to take out: "<<x[id].name<<endl<<"is this correct?(y/n)"<<endl;
    
    cin>>yn;

    if (yn=='y'){
      x[id].isHere=false;
      x[id].owner=y[z].username;
      cout<<"successfully withdrew book\n"<<endl;
      break;
      condition=true;
    }
    else if (yn=='n'){
      continue;
    }
    else{
      cout<<"invalid input"<<endl;
      continue;
    }
    

  }
  
  
}
