#include<iostream>
int main()
{
	int i,j,rows;
	std::cin>>rows;
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=i;j++)
		{
			std::cout<<j;
		}
		std::cout<<"\n";
	}
	return 0;
}
