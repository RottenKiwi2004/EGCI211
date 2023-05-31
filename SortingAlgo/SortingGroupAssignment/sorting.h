#include <iomanip>
#include <iostream>
#include <vector>

inline void display(std::vector <int> a, int n){
  int i;
  for(i=0;i<n;i++)
    std::cout<< " " <<a[i];
  std::cout<<std::endl;

}

// selection sort function module in C 

inline void swap(int &a,int &b){
 int temp;
  temp=a;
  a=b;
  b=temp;
  
}

void selectionSort(std::vector <int> &a, int length) 
{ 
	int i, j, mi; 

	for(j=0 ; j<length-1; j++){
		// Reset tracking variable
	  mi = j; 

		// Find minimum
		for (i = j; i < length; i++) 
		{ 
	  	// Find the minimum 
	    if(a[i]<a[mi])
	      mi = i;
		}
		swap(a[j], a[mi]);
	}
} 

void insertionSort(std::vector <int> &a,int n)
{
    for(int i=1;i<n;i++)
		{
      int value = a[i];
			int j;
			for(j=i-1; j>=0 ; j--){
        if(a[j]>value) a[j+1] = a[j];
				else break;
      }
			a[j+1] = value;
		}
}

void bubbleSort(std::vector <int> &a,int n){

	int i,j;
	// how many pair to compare?
	for(j=1;j<=n-1;j++) {
		
		bool sorted = true;
	  for(i=0;i<n-j;i++) {
			if(a[i]>a[i+1]) {
				sorted = false;
				swap(a[i],a[i+1]);
			}
		}
		
		if (sorted) break;
	}
  
}

bool isSorted(std::vector <int> &v) {
	for(int i=0;i<v.size()-1;i++) if(v[i] > v[i+1]) return false;
	return true;
}