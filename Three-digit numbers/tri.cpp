#include "iostream"
using namespace std;

int main ()
{

  for (int i=100; i<=999; i++)
  {
    int a=i/100;
    int b=(i/10)%10;
    int c=i%10;
    int res = a + b + c;
    if (res / 7 != 0 && (res == 7 || res == 21 || res == 14)) {
      cout<<i<<endl;}
  }
}



/*
for(int i = 100; i <= 999; i++){
  int a,b,c;
  a = i % 10, b = i / 100 , c =( i % 10 ) / 100;
//  if (i % 7 == 0 )
  //{cout << i << " ";}
  if((a + b + c) % 7 == 0 )
  {cout << i << " ";}
*/
/*
int i = 100;
    while(i < 1000)
    {
        int ed = i/100;
        int dwa = (i/10)%10;
        int thre = i%10;
        if ((ed + dwa + thre) == 7){
        cout << i << " ";}
        i++;
      }
      */
      /*
      int n = i, sum = 0;
          sum += n%10;
          n /= 10;
      if ((sum == 7) &&  (sum == 14) && (sum == 21)){
          cout << i << endl;}
*/
