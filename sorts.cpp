#include"sorts.h"

//swap : int,float
void swap(int &obj1, int &obj2)  
{  
    int temp = obj1;  
    obj1 = obj2;    
    obj2 = temp;  
} 

void swap(float &obj1, float &obj2)  
{  
    float temp = obj1;  
    obj1 = obj2;    
    obj2 = temp;  
}

//get max value from array : int,float
int get_max(int *a,int size)
{
	int max=a[0];
    for(int i=1;i<size;i++){if(a[i]>max){max=a[i];}}
	return max;
}

float get_max(float *a,int size)
{
	float max=a[0];
    for(int i=1;i<size;i++){if(a[i]>max){max=a[i];}}
	return max;
}

//selection Sort : int,float
void selection_sort(int *a, int size)  
{  
    int i, j, min_loc;  
  
    for(i = 0; i < size-1; i++)  
    { 
        min_loc = i;  
        for(j = i+1; j < size; j++){ if (a[j] < a[min_loc]){min_loc = j;} }
		swap(a[min_loc], a[i]);  
    }  
}

void selection_sort(float *a, int size)  
{  
    int i, j, min_loc;  
  
    for(i = 0; i < size-1; i++)  
    { 
        min_loc = i;  
        for(j = i+1; j < size; j++){ if (a[j] < a[min_loc]){min_loc = j;} }
		swap(a[min_loc], a[i]);  
    }  
}

//counting sort : int,float
void counting_sort(int *a,int size)
{
	int max=get_max(a,size);
	int *output=new int[size]; for(int i=0;i<size;i++){output[i]=0;}
    int *temp=new int[max+1]; for(int i=0;i<max+1;i++){temp[i]=0;}

    for(int i=0;i<size;i++){temp[a[i]]=temp[a[i]]+1;}
    for(int i=1;i<max+1;i++){temp[i]=temp[i]+temp[i-1];}
    for(int  i=size-1;i>=0;i--){output[temp[a[i]]-1]=a[i]; temp[a[i]]=temp[a[i]]-1;}
	for(int i=0;i<size;i++){a[i]=output[i];}
}

void sort0(float *a,int size)
{
	float max=get_max(a,size);
	float *output=new float[size]; for(int i=0;i<size;i++){output[i]=0;}
    float *temp=new float[(int)max+1]; for(int i=0;i<max+1;i++){temp[i]=0;}

    for(int i=0;i<size;i++){temp[(int)a[i]]=temp[(int)a[i]]+1;}
    for(int i=1;i<max+1;i++){temp[i]=temp[i]+temp[i-1];}
    for(int  i=size-1;i>=0;i--){output[(int)temp[(int)a[i]]-1]=a[i]; temp[(int)a[i]]=temp[(int)a[i]]-1;}
	for(int i=0;i<size;i++){a[i]=output[i];}
}

void counting_sort(float *a,int size)
{	
	 float *b1=new float[size];
	for(int i=0;i<size;i++)
	{ b1[i]=(a[i]-(int)a[i]); }

	float val,val1;
    int i,j;  
    for(i = 1; i < size; i++) 
    {
		val = b1[i]; 
		val1 = a[i];
		for(j = i - 1; j >= 0 && b1[j] > val ;j--){ b1[j + 1] = b1[j]; a[j + 1] = a[j]; }
		b1[j + 1] = val;  
		a[j + 1] = val1;
    }  
	
	sort0(a, size);
}

//insertion sort : int,float
void insertion_sort(int *a, int size)  
{  
    int i, val, j;  
    for(i = 1; i < size; i++) 
    {
		val = a[i]; 
		for(j = i - 1; j >= 0 && a[j] > val ;j--){ a[j + 1] = a[j]; }
		a[j + 1] = val;  
    }  
}

void insertion_sort(float *a, int size)  
{  
	float val;
    int i,j;  
    for(i = 1; i < size; i++) 
    {
		val = a[i]; 
		for(j = i - 1; j >= 0 && a[j] > val ;j--){ a[j + 1] = a[j]; }
		a[j + 1] = val;  
    }  
}

//merge sort : int,float
void merge(int *a, int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 

	int *Left=new int[n1]; for(i = 0; i < n1; i++){ Left[i] = a[l + i]; } 
	int *Right=new int[n2]; for(j = 0; j < n2; j++){ Right[j] = a[m + 1+ j]; }

	for(i=0,j=0,k=l;i < n1 && j < n2; k++)
	{ if(Left[i] <= Right[j]){ a[k] = Left[i]; i++; } else{ a[k] = Right[j]; j++; } } 
 
    for(; i < n1 ;i++,k++) { a[k] = Left[i]; } 
    for(; j < n2 ;j++,k++) { a[k] = Right[j]; } 
} 

void merge_sort(int *a, int l, int r) 
{ 
    if(l < r) 
    { 
        int m = l+(r-l)/2; 
        merge_sort(a, l, m); 
        merge_sort(a, m+1, r); 
        merge(a, l, m, r); 
    } 
}


void merge(float *a, int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 

	float *Left=new float[n1]; for(i = 0; i < n1; i++){ Left[i] = a[l + i]; } 
	float *Right=new float[n2]; for(j = 0; j < n2; j++){ Right[j] = a[m + 1+ j]; }

	for(i=0,j=0,k=l;i < n1 && j < n2; k++)
	{ if(Left[i] <= Right[j]){ a[k] = Left[i]; i++; } else{ a[k] = Right[j]; j++; } } 
 
    for(; i < n1 ;i++,k++) { a[k] = Left[i]; } 
    for(; j < n2 ;j++,k++) { a[k] = Right[j]; } 
} 

void merge_sort(float *a, int l, int r) 
{ 
    if(l < r) 
    { 
        int m = l+(r-l)/2; 
        merge_sort(a, l, m); 
        merge_sort(a, m+1, r); 
        merge(a, l, m, r); 
    } 
}

//quick sort : int,float
int partition(int *a, int l, int h)  
{  
    int pivot = a[h]; 
    int i = (l - 1);
    for(int j = l; j <= h - 1; j++){ if(a[j] < pivot){swap(a[++i],a[j]);} }  
    swap(a[i + 1],a[h]);
    return (i + 1);  
}  
  
void quick_sort(int *a, int l, int h)  
{  
    if(l < h)  
    {  
        int pi = partition(a, l, h); 
        quick_sort(a, l, pi - 1);  
        quick_sort(a, pi + 1, h);  
    }  
}

int partition(float *a, int l, int h)  
{  
    float pivot = a[h]; 
    int i = (l - 1);
    for(int j = l; j <= h - 1; j++){ if(a[j] < pivot){swap(a[++i],a[j]);} }  
    swap(a[i + 1],a[h]);
    return (i + 1);  
}  
  
void quick_sort(float *a, int l, int h)  
{  
    if(l < h)  
    {  
        int pi = partition(a, l, h); 
        quick_sort(a, l, pi - 1);  
        quick_sort(a, pi + 1, h);  
    }  
}

//heap sort : int,float
void heap(int *a, int size, int i) 
{ 
    int largest = i; 
    int l = 2*i + 1; 
    int r = 2*i + 2; 

	if(l < size && a[l] > a[largest]){largest = l;} 
	if(r < size && a[r] > a[largest]){ largest = r;}
    if(largest != i){ swap(a[i], a[largest]); heap(a, size, largest); } 
} 
  

void heap_sort(int *a, int size) 
{ 
	for(int i = size / 2 - 1; i >= 0; i--){ heap(a, size, i); } 
    for(int i=size-1; i>=0; i--){ swap(a[0], a[i]); heap(a, i, 0); } 
}

void heap(float *a, int size, int i) 
{ 
    int largest = i; 
    int l = 2*i + 1; 
    int r = 2*i + 2; 

	if(l < size && a[l] > a[largest]){largest = l;} 
	if(r < size && a[r] > a[largest]){ largest = r;}
    if(largest != i){ swap(a[i], a[largest]); heap(a, size, largest); } 
} 
  

void heap_sort(float *a, int size) 
{ 
	for(int i = size / 2 - 1; i >= 0; i--){ heap(a, size, i); } 
    for(int i=size-1; i>=0; i--){ swap(a[0], a[i]); heap(a, i, 0); } 
}

