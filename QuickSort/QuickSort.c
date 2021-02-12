#include <stdio.h>
#include <stdlib.h>

short i,j;

void sort(int *data, int size){

	if (size <=1 )	return;

	int pivot = data[size/2];

	j= size-1;

	while(data[i]<pivot)	i++;
	while (data[j]>pivot)	j--;

	int aux = data[i];
	data[i] = data[j];
	data[j] = aux;

	sort(data, i);
	sort(data+i+1, data-i-1);

}

int main(){

	int data[15] = {10, 2, 23, 52, 31,
					74, 9, 81, 34, 45,
					15, 12, 8, 1 , 12};


	sort(data, 15);

	for (i=0;i<15;i++)	printf("%d", data[i]);

return 0;
}
