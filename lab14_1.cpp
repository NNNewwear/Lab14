#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){
    for(int i=0;i<N;i++)
	{
		for(int j=i;j>0;j--)
		{
			if(d[j]>d[j-1])
			{
				int a=d[j];
				d[j]=d[j-1];
				d[j-1]=a;
			}
		}
		if(i!=0)
		{
			cout<<"Pass "<<i<<":";
			int b=0;
			while(b<N)
			{
				cout<<d[b]<<" ";
				b++;
			}
			cout<<endl;
		}
	}
}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}