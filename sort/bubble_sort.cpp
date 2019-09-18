/*
 *  file:
 *  author: mlgc4869
 *  date: 2019-
 *  description:
 *
 */

#include <iostream>

using namespace std;

void printArr(int data[], int len) {
  for(int i=0 ; i < len; ++i) {
    cout << data[i] << " ";
  }
  cout << endl;
}

void bubbleSort(int data[], int len) {
  for(int i=0; i<len-1; ++i) {
    for(int j=0; j<len-1-i; ++j) {
      if(data[j] > data[j+1]) {
        //每趟找出一个最大的，放到这趟最后一个位置
        data[j] ^= data[j+1];
        data[j+1] ^= data[j];
        data[j] ^= data[j+1];
      }
    }
  }
}

int main() {
  int data[5] = {2, 1, 5, 3, 4};
  printArr(data, sizeof(data)/sizeof(int));
  bubbleSort(data, 5);
  printArr(data, 5);
  return 0;
}
