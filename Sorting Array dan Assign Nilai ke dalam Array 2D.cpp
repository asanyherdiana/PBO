#include<iostream>
#include<algorithm>

using namespace std;

class Sorting_Array
{
	public:
		int A[8];
		int B[2][4];
		int a=-1;
		int nilai_tertinggi= -9999999;
		
	
		void display1(int a[])
		{
   			for(int i = 0; i <8; ++i)
   			{
   				cout << a[i] << " ";
			}
   				
		}
		void display2(int a[][4])
		{
			
			cout<<endl<<"Setelah dipindahkan ke dalam matriks 2d:\n";
			for(int i=0;i<2;i++)
			{
				for(int j=0;j<4;j++)
				{
					cout<<B[i][j]<<" ";
				}
				cout<<endl;
			}
		}
		
		void input_array()
		{
			for(int i=1;i<=8;i++)
			{
				cout<<"Input kolom ke-"<<i<<":";
				cin>>A[i-1];
			}
			cout<<"Array sebelum diurutkan :"<<endl;
			display1(A);
			//Pengurutan
			sort(A,A+8);
			cout<<"\nArray sesudah diurutkan :"<<endl;
			display1(A);
		}
		
		void assign_array()
		{
			
			for(int i=0;i<2;i++)
			{
				for(int j=0;j<4;j++)
				{
					a+=1;
					B[i][j]=A[a];
				}
			}
			
			display2(B);
			
			for(int i=0;i<4;i++)
			{
				if(B[0][i]>nilai_tertinggi)
				{
					nilai_tertinggi=B[0][i];
				}
			}
			cout<<"Nilai tertinggi di baris pertama: "<<nilai_tertinggi;
		}
};

int main()
{
	//Deklarasi Objek
	Sorting_Array array1;
	//Input Array
	array1.input_array();
	//Assign Array menjadi array 2D
	array1.assign_array();
		
}