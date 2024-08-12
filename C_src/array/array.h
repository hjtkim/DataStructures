#ifndef _ARRAY_H_
#define _ARRAY_H_

#include <stddef.h> // size_t를 사용하기 위한 헤더파일

// 동적 배열 구조체 정의
typedef struct {
  int *data;
  size_t size; // 배열의 현재 크기
  size_t capacity; // 배열의 현재 용량
} DynamicArray;

// 함수 프로토타입
DynamicArray* create(size_t initialCapacity); // 배열 생성 함수
void destroy(DynamicArray *arr); // 배열 메모리 해제 함수
void append(DynamicArray *arr, int value); // 배열에 값 추가 함수
void remove(DynamicArray *arr, size_t index); // 배열에 값 삭제 함수
int getArray(DynamicArray *arr, size_t index); // 배열에서 값 가져오기 함수
size_t getSize(const DynamicArray *arr); // 배열 크기 반환 함수

#endif
