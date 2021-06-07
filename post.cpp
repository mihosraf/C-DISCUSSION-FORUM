#include "post.h"
#include <iostream>


Post::Post (int id,std::string title,char* date,std::string text): id(id),title(title),date(date),text(text) {
  cout << "A post has been created "<< endl;
}

Post::~Post(){

  cout<< "Post number:"<< id <<" is about to be destroyed" << endl;
}
int Post::getPostId(){
  return id;
}
void Post::printpost(){
  cout << "Post with id "<< id << " title : "<< title << " date : " << date << " text : " << text << endl;
}
