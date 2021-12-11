#include <iostream>
#include <time.h>
#include <stdlib.h>
#include"sorts.h"
using namespace std;

int size[4]={10000,20000,30000,40000};

int *ai=NULL;
float *af=NULL;

void print_array(int *a, int size){ for (int i=0; i < size; i++){cout << a[i] << " ";} cout <<"\n"; } 
void print_array(float *a, int size){ for (int i=0; i < size; i++){cout << a[i] << " ";} cout <<"\n"; } 

void main()  
{  
	int n=-1;
				
		cout<<"Select the size of the array : \n";
		cout<<" 1- 500000 an items. \n";
		cout<<" 2- 1000000 an items. \n";
		cout<<" 3- 1500000 an items. \n";
		cout<<" 4- 2000000 an items. \n\n";
		while((n<=0) || (n>=5))
		{
		cout<<"   Enter select : "; cin>>n;
		if((n<=0) || (n>=5)){cout<<"    Invalid  select !! -> re select \n";}
		} n--;

	int s=0;

	cout<<"\n------------------------------------------------\nMENU : ----\n\nSelect sort for get time need to sort array from "<<size[n]<<" an items\n";

	cout<<"\n For integer array : \n";
	cout<<"   1- Selection sort \n";
	cout<<"   2- Counting Sort \n";
	cout<<"   3- Insertion Sort \n";
	cout<<"   4- Merge Sort \n";
	cout<<"   5- Quick Sort \n";
	cout<<"   6- Heap Sort \n";

	cout<<"\n For float array : \n";
	cout<<"   7- Selection sort \n";
	cout<<"   8- Counting Sort \n";
	cout<<"   9- Insertion Sort \n";
	cout<<"   10- Merge Sort \n";
	cout<<"   11- Quick Sort \n";
	cout<<"   12- Heap Sort \n";
	
	cout<<"\nOR Select\n\n 13- Chaenge Size of Array \n";
	cout<<" 14- Exit\n\n";
	
	while(s != 14)
	{
		cout<<"   Enter select : "; cin>>s;

	switch(s)
	{

			case 1:
			{
			if(ai != NULL)delete []ai;   ai=NULL;
			ai=new int[size[n]];
			cout<<"\nset random value : ";
		    srand(time(NULL)); 
			for(int i=0;i<size[n];i++){ int x=rand()%100+1; ai[i]=x; } cout<<"done\n";
			 cout<<"Time need for Selection sort integer array from "<<size[n]<<" an items : ";
			clock_t begin = clock();
	     	selection_sort(ai,size[n]);
			clock_t end = clock();
			cout<<(float)(end-begin)/CLOCKS_PER_SEC<<" sec \n\n";
			break;}

			case 2:		
			{
			if(ai != NULL)delete []ai;   ai=NULL;
			ai=new int[size[n]];
			cout<<"\nset random value : ";
			srand(time(NULL)); 
			for(int i=0;i<size[n];i++){ int x=rand()%100+1; ai[i]=x; } cout<<"done\n";
		    cout<<"Time need for Counting sort integer array from "<<size[n]<<" an items : ";
			clock_t begin = clock();
         	counting_sort(ai,size[n]);
			clock_t end = clock();
     		cout<<(float)(end-begin)/CLOCKS_PER_SEC<<" sec \n\n";
			break;}

			case 3:
			{
			if(ai != NULL)delete []ai;   ai=NULL;
			ai=new int[size[n]];
		    cout<<"\nset random value : ";
			srand(time(NULL));
			for(int i=0;i<size[n];i++){ int x=rand()%100+1; ai[i]=x; } cout<<"done\n";
			cout<<"Time need for Insertion sort integer array from "<<size[n]<<" an items : ";
			clock_t begin = clock();
			insertion_sort(ai,size[n]);
			clock_t end = clock();
		    cout<<(float)(end-begin)/CLOCKS_PER_SEC<<" sec \n\n";
			break;}

			case 4:
			{
			if(ai != NULL)delete []ai;   ai=NULL;
			ai=new int[size[n]];
			cout<<"\nset random value : ";
			srand(time(NULL));
			for(int i=0;i<size[n];i++){ int x=rand()%100+1; ai[i]=x; } cout<<"done\n";
		    cout<<"Time need for Merge sort integer array from "<<size[n]<<" an items : ";
			clock_t begin = clock();
		    merge_sort(ai,0,size[n]-1);
			clock_t end = clock();
			cout<<(float)(end-begin)/CLOCKS_PER_SEC<<" sec \n\n";
			break;}

			case 5:
			{
			if(ai != NULL)delete []ai;   ai=NULL;
			ai=new int[size[n]];
			cout<<"\nset random value : ";
			srand(time(NULL));
			for(int i=0;i<size[n];i++){ int x=rand()%100+1; ai[i]=x; } cout<<"done\n";
		    cout<<"Time need for Quick sort integer array from "<<size[n]<<" an items : ";
			clock_t begin = clock();
		    quick_sort(ai,0,size[n]-1);
			clock_t end = clock();
			cout<<(float)(end-begin)/CLOCKS_PER_SEC<<" sec \n\n";
			break;}

			case 6:
			{
			if(ai != NULL)delete []ai;   ai=NULL;
			ai=new int[size[n]];
			cout<<"\nset random value : ";
			srand(time(NULL));
			for(int i=0;i<size[n];i++){ int x=rand()%100+1; ai[i]=x; } cout<<"done\n";
			cout<<"Time need for Heap sort integer array from "<<size[n]<<" an items : ";
			clock_t begin = clock();
			heap_sort(ai,size[n]);
			clock_t end = clock();
			cout<<" an items : "<<(float)(end-begin)/CLOCKS_PER_SEC<<" sec \n\n";
			break;}

			case 7:
			{
			if(af != NULL)delete []af;   af=NULL;
			af=new float[size[n]];
			cout<<"\nset random value : ";
		    srand(time(NULL)); 
			for(int i=0;i<size[n];i++){ float x=(rand()%100)+(float)(rand()%100)/100.0; af[i]=x; } cout<<"done\n";
			 cout<<"Time need for Selection sort float array from "<<size[n]<<" an items : ";
			clock_t begin = clock();
	     	selection_sort(af,size[n]);
			clock_t end = clock();
			cout<<(float)(end-begin)/CLOCKS_PER_SEC<<" sec \n\n";
			break;}

			case 8:		
			{
			if(af != NULL)delete []af;   af=NULL;
			af=new float[size[n]];
			cout<<"\nset random value : ";
		    srand(time(NULL)); 
			for(int i=0;i<size[n];i++){ float x=(rand()%100)+(float)(rand()%100)/100.0; af[i]=x; } cout<<"done\n";
		    cout<<"Time need for Counting sort float array from "<<size[n]<<" an items : ";
			clock_t begin = clock();
         	counting_sort(af,size[n]);
			clock_t end = clock();
     		cout<<(float)(end-begin)/CLOCKS_PER_SEC<<" sec \n\n";
			break;}

			case 9:
			{
			if(af != NULL)delete []af;   af=NULL;
			af=new float[size[n]];
		    cout<<"\nset random value : ";
			srand(time(NULL));
			for(int i=0;i<size[n];i++){ float x=(rand()%100)+(float)(rand()%100)/100.0; af[i]=x; } cout<<"done\n";
			cout<<"Time need for Insertion sort float array from "<<size[n]<<" an items : ";
			clock_t begin = clock();
			insertion_sort(af,size[n]);
			clock_t end = clock();
		    cout<<(float)(end-begin)/CLOCKS_PER_SEC<<" sec \n\n";
			break;}

			case 10:
			{
			if(af != NULL)delete []af;   af=NULL;
			af=new float[size[n]];
			cout<<"\nset random value : ";
			srand(time(NULL));
			for(int i=0;i<size[n];i++){ float x=(rand()%100)+(float)(rand()%100)/100.0; af[i]=x; } cout<<"done\n";
		    cout<<"Time need for Merge sort float array from "<<size[n]<<" an items : ";
			clock_t begin = clock();
		    merge_sort(af,0,size[n]-1);
			clock_t end = clock();
			cout<<(float)(end-begin)/CLOCKS_PER_SEC<<" sec \n\n";
			break;}

			case 11:
			{
			if(af != NULL)delete []af;   af=NULL;
			af=new float[size[n]];
			cout<<"\nset random value : ";
			srand(time(NULL));
			for(int i=0;i<size[n];i++){ float x=(rand()%100)+(float)(rand()%100)/100.0; af[i]=x; } cout<<"done\n";
		    cout<<"Time need for Quick sort float array from "<<size[n]<<" an items : ";
			clock_t begin = clock();
		    quick_sort(af,0,size[n]-1);
			clock_t end = clock();
			cout<<(float)(end-begin)/CLOCKS_PER_SEC<<" sec \n\n";
			break;}

			case 12:
			{
			if(af != NULL)delete []af;   af=NULL;
			af=new float[size[n]];
			cout<<"\nset random value : ";
			srand(time(NULL));
			for(int i=0;i<size[n];i++){ float x=(rand()%100)+(float)(rand()%100)/100.0; af[i]=x; } cout<<"done\n";
			cout<<"Time need for Heap sort float array from "<<size[n]<<" an items : ";
			clock_t begin = clock();
			heap_sort(af,size[n]);
			clock_t end = clock();
			cout<<" an items : "<<(float)(end-begin)/CLOCKS_PER_SEC<<" sec \n\n";
			break;}

		case 13:
		{ n=-1;
		cout<<"\nSelect the size of the array : \n";
		cout<<" 1- 500000 an items. \n";
		cout<<" 2- 1000000 an items. \n";
		cout<<" 3- 1500000 an items. \n";
		cout<<" 4- 2000000 an items. \n\n";
		while((n<=0) || (n>=5))
		{
		cout<<"   Enter select : "; cin>>n;
		if((n<=0) || (n>=5)){cout<<"    Invalid  select !! -> re select \n";}
		} n--;
		cout<<"\n   Size of Array Chaenge to : "<<size[n]<<" an items\n\n";
		break;}

		case 14:{ s=14; break;}
		default : { cout<<"    Invalid  select !! -> re select \n"; }
	}

	}

	print_array(ai, size[n]);
	print_array(af, size[n]);

	if(ai != NULL)delete []ai; if(af != NULL) delete []af; ai=NULL; af=NULL;
	cout<<"\n--------------------- END OF PROGRAM ---------------------\n";

}