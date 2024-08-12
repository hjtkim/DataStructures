#include <stdio.h>
#include <stdlib.h>
#include "array.h"

// 동적 배열 초기 용량
#define INITIAL_CAPACITY 8

DynamicArray* create_array(size_t initial_capacity) {
  DynamicArray *arr = (DynamicArray *)malloc(sizeof(DynamicArray));
  if(!arr) {
    perror("배열 메모리 할당 실패\n");
    exit(EXIT_FAILURE);
  }
  arr->data = (int *)malloc(initial_capacity * sizeof(int));
  if(!arr->data) {
    perror("배열 데이터 메모리 할당 실패/n");
    free(arr);
    exit(EXIT_FAILURE);
  }
  arr->size = 0;
  arr->capacity = initial_capacity;
  return arr;
}

void destroy(DynamicArray *arr){

}

void append(DynamicArray *arr, int value) {

}

void remove(DynamicArray *arr, size_t index) {

}

int getArray(const DynamicArray *arr, size_t index) {
  if(index >= arr->size) {
    fprintf(stderr, "인덱스가 범위를 벗어났습니다.\n");
    return -1;
  }
  return arr->data[index];
}

size_t getSize(const DynamicArray *arr) {
  return arr->size;
}
