// Call by values

#include <iostream>

void swap(int p, int q)
{
	int temp;
	temp = q;
	q = p;
	p = temp;
}

int main()
{
	int i , j ;
	std::cin>>i>>j;
	swap(i,j);
	std::cout<<i<<" "<<j<<"\n";
	std::cout<<j<<" "<<i<<"\n";
}
