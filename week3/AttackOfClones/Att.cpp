#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;


void find_jedi(){
  // read inputs
  int n,m;
  cin >> n >> m;
  int a[n],b[n];
  for (int i =0 ; i < n ; i ++){
    cin >> a[i];
    cin >> b[i];
  }

  // find one segment with less then 10 jedi
  int counter =0;
  int seg_ind;


  for(int j = 1; j< m+1 ; j++, counter = 0){ // test every segment
  vector<int> jedi_index(10,-1);
    for (int i = 0; i <n, counter != 11; i++){

      if (b[i]< a[i]){ // in two turns
        if (!(j < a[i] and j > b[i])) jedi_index[counter++] = i;
      }

      else {
        if (j>=a[i] and j <= b[i]) jedi_index[counter++] = i;
      }
    }

    if ( counter <= 10) {seg_ind = j; break;}
  }


  // Reorganize the data depending on the current index
  multimap<int,int> data; // Data without jedis defedning this segment
  for (int i = 0; i <n ; i ++){

  }


  // Run the greedy algorithm counter + 1 times

  for (int p = 0; p < counter; p++){

  }

}

int main(){
  int t;
  while(t--){
    find_jedi();
  }
  return 0;
}
