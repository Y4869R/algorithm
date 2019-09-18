/*
 *  file: insert_sort.cpp
 *  author: mlgc4869
 *  date: 2019-09-18
 *  description: insert sort
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

void insertSort(int data[], int len) {
  //第一个元素是已排序数组
  //从第二个开始加入已经排好的数组中
  for(int i=1; i<len; ++i) {
    if(data[i] < data[i-1]) {
      int temp = data[i];
      int j = i;
      while(j>0 && data[j-1] > temp) {
        data[j] = data[j-1];
        j--;
      }
      //每趟把新的值插到合适的位置
      data[j] = temp;
    }
  }
}

int main() {

  int data[5] = {2, 3, 5, 1, 4};
  printArr(data, sizeof(data)/sizeof(int));
  insertSort(data, sizeof(data)/sizeof(int));
  printArr(data, sizeof(data)/sizeof(int));

  return 0;
}
