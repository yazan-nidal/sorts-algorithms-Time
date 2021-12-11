#ifndef sorts_h
#define sorts_h

void swap(int &obj1, int &obj2);
void swap(float &obj1, float &obj2);

//

void selection_sort(int *a, int size); 
void selection_sort(float *a, int size); 

void sort0(float *a,int size);
void counting_sort(int *a,int size);
void counting_sort(float *a,int size);

void insertion_sort(int *a, int size);
void insertion_sort(float *a, int size);

void merge(int *a, int l, int m, int r);
void merge(float *a, int l, int m, int r);
void merge_sort(int *a, int l, int r);
void merge_sort(float *a, int l, int r);

int partition(int *a, int l, int h);
int partition(float *a, int l, int h);
void quick_sort(int *a, int l, int h);
void quick_sort(float *a, int l, int h);

void heap(int *a, int size, int i);
void heap(float *a, int size, int i);
void heap_sort(int *a, int size);
void heap_sort(float *a, int size);

#endif