/*
 *  file: choice_sort.cpp
 *  author: mlgc4869
 *  date: 2019-09-18
 *  description: choice sort
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

void choiceSort(int data[], int len) {
  for(int i=0; i<len; ++i) {
    int k=i;
    for(int j=i+1; j<len; ++j) {
      if(data[j] < data[k]) {
        k = j;
      }
    }
    //每趟选择一个最小的，交换到这趟的开始位置
    //和冒泡很像，一个操作值，一个操作下标
    int temp = data[i];
    data[i] = data[k];
    data[k] = temp;
  }
}


int main() {

  int data[5] = {3, 1, 5, 2, 4};
  printArr(data, sizeof(data)/sizeof(int));
  choiceSort(data, sizeof(data)/sizeof(int));
  printArr(data, sizeof(data)/sizeof(int));

  return 0;
}
