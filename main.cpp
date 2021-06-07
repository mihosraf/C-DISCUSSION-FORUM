#include <iostream>
#include <string>
#include "forum.h"
#include "samples.h"
using namespace std;

int main(){
  /* initialize random seed: */
    srand (time(NULL));
    struct tm
 {
                  int tm_sec; // seconds of minutes from 0 to 61
                  int tm_min; // minutes of hour from 0 to 59
                  int tm_hour; // hours of day from 0 to 24
                  int tm_mday; // day of month from 1 to 31
                  int tm_mon; // month of year from 0 to 11
                  int tm_year; // year since 1900
                  int tm_wday; // days since sunday
                  int tm_yday; // days since January 1st
                  int tm_isdst; // hours of daylight savings time
 };

  /* generate number between 1 and 10: */
  int totalthreads = rand() % 3 + 1;
  //    cout<< totalposts << endl <<totalthreads<< endl;
  //    int j;
  //    for (int i = 0; i < 4; i++)
  //            j = rand() % 3 + 1;
  //            cout << sample[j] << "\n";
  Forum * forum = new Forum("Αντικειμενοστραφης Προγραμματισμος", totalthreads);

  forum->printThreadsTitle();
  forum->printbytitle("Κανόνες και Χρησιμες Πληροφοριες");
  int randidselection = rand() % 4 + 1;
  forum->printpostbyid(randidselection);

  delete forum;

    return 0;
}
