/*
 *  file: quick_sort.cpp
 *  author: mlgc4869
 *  date: 2019-09-18
 *  description: quick sort
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

void quickSort(int data[], int left, int right) {
  if(left > right) return;

  int i, j , temp;
  i = left;
  j = right;

  //以左边的数为基准
  temp = data[left];
  while(i != j) {
    //从右边开始找小于temp的元素
    while(data[j] >= temp && i<j) {
      j--;
    }
    //从左边开始找大于temp的元素
    while(data[i] <= temp && i<j) {
      i++;
    }

    //两边都找到合适的数之后，进行交换
    if(i<j) {
      int exchange = data[i];
      data[i] = data[j];
      data[j] = exchange;
    }
  }

  //i==j  将基准数放在这个位置，左边均小于基准数，右边均大于基准数
  data[left] = data[i];
  data[i] = temp;

  //接着递归分别处理左右两边
  quickSort(data, left, i-1);
  quickSort(data, j+1, right);
}

int main() {

  int data[5] = {3, 1, 5, 2, 4};
  printArr(data, sizeof(data)/sizeof(int));
  quickSort(data, 0, sizeof(data)/sizeof(int)-1);
  printArr(data, sizeof(data)/sizeof(int));

  return 0;
}
