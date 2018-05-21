#include <iostream>
using namespace std;

void selectSort();
void bubbleSort();
void mergeSort();
void print();

int data[100],n;
int main ()
{
	int p;
	cout<<"Masukkan Banyak data : "; cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Data ke-"<<i+1<<" : "; cin>>data[i];
	}
	cout<<"\nData sebelum Sorting : "; print();
	ulang:
	cout<<"\nPilih Sorting\n1.Selection Sort\n2.Bubble Sort\n3.Merge Sort\nMasukkan Pilihan : ";
	cin>>p;
	switch(p)
	{
		case 1: selectSort(); cout<<"\nData sesudah Sorting : "; print(); break;
		case 2: bubbleSort(); cout<<"\nData sesudah Sorting : "; print(); break;
		case 3: mergeSort(); cout<<"\nData sesudah Sorting : "; print(); break;
		default: cout<<"Pilihan tidak ada\n"; goto ulang;;
	}
	return 0;
}

void selectSort()
{
	for(int i=0;i<n;i++)
	{
		int min=i;

		for(int j=i+1;j<n;j++)
		{
			if(data[min]>data[j])
				min=j;
		}

		if(min!=i)
		{
			int temp=data[i];
			data[i]=data[min];
			data[min]=temp;
		}
	}
}

void bubbleSort()
{
	
}

void mergeSort()
{
	
}

void print()
{
	for(int i=0;i<n;i++)
	{
		cout<<data[i]<<" ";
	}
	cout<<endl;
}
