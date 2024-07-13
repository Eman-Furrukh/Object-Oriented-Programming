///		EMAN FURRUKH	   ///
///		  21i-1726	   ///
///     ASSIGNMENT #1	   ///


#include<iostream>
using namespace std;

//--------------------------------------------------Question 1 --------------------------------------------------
//char** bookSeats(int rows) {

	/*
	char** bus = new char*[rows];

	for (int i = 0; i < rows; i++)
		*(bus+i) = new char[5];

	strcpy(*(bus+0),"1ABCD");
	strcpy(*(bus+1),"2ABCD");
	strcpy(*(bus+2),"3ABCD");
	.
	.
	.
	rows 
	*/

	// Uncomment the helper code above

	// Code Here
 //}


//-------------------------------------------------- Question 2A --------------------------------------------------

int maxScore(int**& matrix, int rows, int cols) {
	int max = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; i < cols; j++)
		{
			if (i % 2 == 1)
				j = j - 1;
			else
				j = j + 1;

			if (*&matrix[i][j] == 1 || *&matrix[i][j] == 0)
				max += *&matrix[i][j];
			else
				max += -1;
		}
	}
	return max;
}



//-------------------------------------------------- Question 2B ---------------------------------------------------

/*int minCost(int**& matrix, int rows, int cols) {
	// Code Here
}*/

//-------------------------------------------------- Question 3 --------------------------------------------------

char** allocateNames(int n) {
	char** names = new char*[n];
	int i;
	for (i = 0; i < n; i++) {
		names[i] = '\0';
	}
	return names;
}

void setNames(int len, char**& names, const char* n) {
	int i = 0;
	while (i < len && names[i] != '\0') 
		i++;
	if (i == len) 
		 return;
	else {
		names[i] = new char[len];
		strcpy(names[i], n); 
	}
}

int* allocateVotes(int n) {
	int* votes = new int[n];
	return votes;
}

void setVotes(int len, char** names, char* name, int*& votes, int v) {
	int i = 0;
	while (i < len && names[i] != '\0')
	{
		if (strcmp(names[i], name) == 0)
		{
			votes[i] = v;
			break;
		}
		i++;
	}
}

float* allocatePercentages(int n, int* candidateVotes) {
	float* percent = new float[n];
	float sum = 0;
	for (int i = 0; i < n; i++) 
		sum += candidateVotes[i];
	for (int i = 0; i < n; i++) 
		percent[i] = (candidateVotes[i] / sum) * 100;
	return percent;
}

int returnTotalVotes(int n, int* candidateVotes) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += candidateVotes[i];
	}
	return sum;
}


//--------------------------------------------------Question 4 --------------------------------------------------


void calculateHistogram(int* marks, int*& histogram, int noOfMarks) {
	/*int max = 0;
	while (1) {
		if (*marks == -1)
			break;

		//finding maximum
		marks[noOfMarks--] = *marks;
		if (*marks > max)
			max = *marks; 
	}
	histogram = new int[max + 1]; 
	for (int i = 0; i <= max; i++) {
		histogram[i] = 0;
		for (int i = 0; i < noOfMarks; i++) 
			histogram[marks[i]]++;
	}
	*/

	//finding maximum 
	int max = marks[0];
	for (int i = 0; i < noOfMarks; i++)
	{
		if (marks[i] > max)
			max = marks[i];
	}
	//creating new dynamic array to store in histogram
	histogram = new int[max + 1];
	for (int i = 0; i <= max; i++)
		histogram[i] = 0;
	for (int i = 0; i < noOfMarks; i++)
		histogram[marks[i]]++;    //yahan parh frequency elements kee increment horahi hai
}

//--------------------------------------------------Question 5 --------------------------------------------------

int maximum(int* Arr, int size)
{
    int max = *Arr;
    for (int i = 1; i < size; i++) {
        if (*(Arr + i) > max)
            max = *(Arr + i);
    }
    return max;
}

int swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    return *a,*b;
}

int* merge(int* Arr1, int* Arr2, int size1, int size2) {
    int* newArray = new int[size1 + size2];
    for (int i = 0; i < size1; i++) {
        *(newArray + i) = *(Arr1 + i);
    }
    for (int i = size1; i < size1 + size2; i++) {
        *(newArray + i) = *(Arr2 + i - size1);
    }
    return newArray;
}

char* reverse(char* a) {
    int size = 0;
    int i = 0;
    while (a[i] != '\0')
    {
        size++;
        i++;
    }
    /*for (int k = 0; k < size; k++)
    {
        cout << "Enter a string: ";
        cin >> a[k];
    }*/
    char *p = new char[size];
    cout <<"Reversing the array : \n";
    for(int k = 0; k < i; k++) {
        p[k] = a[size-1];
        size--;
    }
    //cout << endl;
    return p;
}

/*
void Populateplanets(char** Arr, int size)
{
    /*string* p = new string[size];
    p = {"Neptune","Earth","Mercury", "Venus", "Jupiter","Saturn"};
    cout << "Planets are:\n";
    for (int i = 0; i < size; i++)
        cout << *(p + i) << "\t";
    cout << endl;*/
    /*for (int i = 0; i < size; i++)
        Arr[i];*/
//}


int countEven(int* Arr, int size) {
    int counter = 0;
    for (int i = 0; i < size; i++)
    {
        if (Arr[i] % 2 == 0)
            counter++;
    }
    return counter;
}

bool compare(char* arr, char a) {
    bool flag = false;
    for (int i = 0; i < 5; i++) {
        if (arr[i] != a)
            return flag;
        else
            flag = true;
    }
    return flag;
}

//--------------------------------------------------Question 6 --------------------------------------------------
///		PART A		///
int find(int array[], int length, int target) {
	//base condition
	if (length == -1)
		return -1;

	if (array[length] == target)
		return length;
	else
		find(array, length - 1, target);
}

//int start = 0;
///		PART B		///
bool isPalindrome(char str[], int size) {
	/*static int start = 0;
	int length = size - 1;
	//base condition
	if (start >= length)
		return false;
	if (str[start] == str[length])
	{
		start += 1;
		return isPalindrome(str, length - 1);
	}
	return true;*/
	static int start = 0;
	int length = size - 1;
	int s = length + start;
	//base condition
	if (s < start)
		return true;
	else if (str[size - 1] == str[start])
	{
		start += 1;
		return isPalindrome(str, length);
	}
	else 
		return false;
}

///		PART C		///
void replace(char* s1, char ch1, char ch2) {
	//base condition
	if (s1[0] == '\0')
		return;
	else
	{
		if (s1[0] == ch1)
			s1[0] = ch2;
		replace(s1+1, ch1, ch2);
	}
}


