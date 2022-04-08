#include<stdio.h>
int main()
{
	//QUESTION 9:
	int myExampleArray[10] = { 9,6,10,7,9,3,5,12,-4,8 };
	int seekedElementValue;
	seekedElementValue = myExampleArray[0];
	
	for (int i = 0; i < 10; i++)
	{
		if (myExampleArray[i] > seekedElementValue)
		{
			seekedElementValue = myExampleArray[i];
		}
	}
	printf("seekedElementValue: %d\n", seekedElementValue);

	//QUESTION 10:
	int seekedElementIndex = 0;
	seekedElementValue = myExampleArray[0];
	for (int i = 0; i < 10; i++)
	{
		if (myExampleArray[i] > seekedElementValue)
		{
			seekedElementIndex = i;
		}
	}
	printf("seekedElementValue[%d]\n", seekedElementIndex);

	//QUESTION 16:
	printf("find %d\n", find("aaaaaaCyril", 'C'));
	printf("count %d\n", count("aaaaaaCyril", 'a'));


}

//QUESTION 17
int count(char str[], char c)
{
	int i = 0;
	int occurences = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			occurences++;
		}
		i++;
	}
	return occurences;

}

//QUESTION 16
int find(char str[], char c)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			return i;
		}
		i++;
	}
	return -1;
}