#include <iostream>
#include <cstring>
using namespace std;

//function to convert from morse code to English
void MorseToEnglish(char array[])
{
	cin.getline(array, sizeof(array));
	char* ptr = array;
	int a = strlen(ptr);
	
	for (int i = 0; i < a; i++)
	{
		if(array[i] == '.' && array[i + 1] == '-')
			cout<<"A";
		if(array[i + 1] == '-' && array[i + 2] == '.' && array[i + 3] == '.' && array[i + 4] == '.')
			cout<<"B";
		if(array[i] == '-' && array[i + 1] == '.' && array[i + 2] == '-' && array[i + 3] == '.')
			cout<<"C";
		if(array[i] == '-' && array[i + 1] == '.' && array[i + 2] == '.')
			cout<<"D";
		if(array[i] == '.')
			cout<<"E";
		if(array[i] == '.' && array[i + 1] == '.' && array[i + 2] == '-' && array[i + 3] == '.')
			cout<<"F";
		if(array[i] == '-' && array[i + 1] == '-' && array[i + 2] == '.')
			cout<<"G";
		if(array[i] == '.' && array[i + 1] == '.' && array[i + 2] == '.' && array[i + 3] == '.')
			cout<<"H";
		if(array[i] == '.' && array[i + 1] == '.')
			cout<<"I";
		if(array[i] == '.' && array[i + 1] == '-' && array[i + 2] == '-' && array[i + 3] == '-')
			cout<<"J";
		if(array[i] == '-' && array[i + 1] == '.' && array[i + 2] == '-')
			cout<<"K";
		if(array[i] == '.' && array[i + 1] == '-' && array[i + 2] == '.' && array[i + 3] == '.')
			cout<<"L";
		if(array[i] == '-' && array[i + 1] == '-')
			cout<<"M";
		if(array[i] == '-' && array[i + 1] == '.')
			cout<<"N";
		if(array[i] == '-' && array[i + 1] == '-' && array[i + 2] == '-')
			cout<<"O";
		if(array[i] == '.' && array[i + 1] == '-' && array[i + 2] == '-' && array[i + 3] == '.')
			cout<<"P";
		if(array[i] == '-' && array[i + 1] == '-' && array[i + 2] == '.' && array[i + 3] == '-')
			cout<<"Q";
		if(array[i] == '.' && array[i + 1] == '-' && array[i + 2] == '.')
			cout<<"R";
		if(array[i] == '.' && array[i + 1] == '.' && array[i + 2] == '.')
			cout<<"S";
		if(array[i] == '-')
			cout<<"T";
		if(array[i] == '.' && array[i + 1] == '.' && array[i + 2] == '-')
			cout<<"U";
		if(array[i] == '.' && array[i + 1] == '.' && array[i + 2] == '.' && array[i + 3] == '-')
			cout<<"V";
		if(array[i] == '.' && array[i + 1] == '-' && array[i + 2] == '-')
			cout<<"W";
		if(array[i] == '-' && array[i + 1] == '.' && array[i + 2] == '.' && array[i + 3] == '-')
			cout<<"X";
		if(array[i] == '-' && array[i + 1] == '.' && array[i + 2] == '-' && array[i + 3] == '-')
			cout<<"Y";
		if(array[i] == '-' && array[i + 1] == '-' && array[i + 2] == '.' && array[i + 3] == '.')
			cout<<"Z";
	}
}

//function to convert from English to Morse Code
void EngToMorse(char arr[])
{
   int length;
   length = strlen(arr);
   for (int i=0; i<length; i++)
   {
      if(arr[i] == ' ')
        cout<<" ";
       
       //following is for numbers.
      else if(arr[i] == '0')
        cout<<"-----"<<endl;
      else if(arr[i] == '1')
        cout<<".----"<<endl;
      else if(arr[i] == '2')
        cout<<"..---"<<endl;
      else if(arr[i] == '3')
        cout<<"...--"<<endl;
      else if(arr[i] == '4')
        cout<<"....-"<<endl;
      else if(arr[i] == '5')
        cout<<"....."<<endl;
      else if(arr[i] == '6')
        cout<<"-...."<<endl;
      else if(arr[i] == '7')
        cout<<"--..."<<endl;
      else if(arr[i] == '8')
        cout<<"---.."<<endl;
      else if(arr[i] == '9')
        cout<<"----."<<endl;
       
       //following is for letters.
      else if(arr[i] == 'A' || arr[i] == 'a')
        cout<<".-"<<" ";
      else if(arr[i] == 'B' || arr[i] == 'b')
        cout<<"-..."<<" ";
      else if(arr[i] == 'C' || arr[i] == 'c')
        cout<<"-.-."<<" ";
      else if(arr[i] == 'D' || arr[i] == 'd')
        cout<<"-.."<<" ";
      else if(arr[i] == 'E' || arr[i] == 'e')
        cout<<"."<<" ";
      else if(arr[i] == 'F' || arr[i] == 'f')
        cout<<"..-."<<" ";
      else if(arr[i] == 'G' || arr[i] == 'g')
        cout<<"--."<<" ";
      else if(arr[i] == 'H' || arr[i] == 'h')
        cout<<"...."<<" ";
      else if(arr[i] == 'I' || arr[i] == 'i')
        cout<<".."<<" ";
      else if(arr[i] == 'J' || arr[i] == 'j')
        cout<<".---"<<" ";
      else if(arr[i] == 'K' || arr[i] == 'k')
        cout<<"-.-"<<" ";
      else if(arr[i] == 'L' || arr[i] == 'l')
        cout<<".-.."<<" ";
      else if(arr[i] == 'M' || arr[i] == 'm')
        cout<<"--"<<" ";
      else if(arr[i] == 'N' || arr[i] == 'n')
        cout<<"-."<<" ";
      else if(arr[i] == 'O' || arr[i] == 'o')
        cout<<"---"<<" ";
      else if(arr[i] == 'P' || arr[i] == 'p')
        cout<<".--."<<" ";
      else if(arr[i] == 'Q' || arr[i] == 'q')
        cout<<"--.-"<<" ";
      else if(arr[i] == 'R' || arr[i] == 'r')
        cout<<".-."<<" ";
      else if(arr[i] == 'S' || arr[i] == 's')
        cout<<"..."<<" ";
      else if(arr[i] == 'T' || arr[i] == 't')
        cout<<"-"<<" ";
      else if(arr[i] == 'U' || arr[i] == 'u')
        cout<<"..-"<<" ";
      else if(arr[i] == 'V' || arr[i] == 'v')
        cout<<"...-"<<" ";
      else if(arr[i] == 'W' || arr[i] == 'w')
        cout<<".--"<<" ";
      else if(arr[i] == 'X' || arr[i] == 'x')
        cout<<"-..-"<<" ";
      else if(arr[i] == 'Y' || arr[i] == 'y')
        cout<<"-.--"<<" ";
      else if(arr[i] == 'Z' || arr[i] == 'z')
        cout<<"--.."<<" "; 
       
       //following is for other characters
      else if(arr[i] == '.')
        cout<<".-.-.-"<<endl;
      else if(arr[i] == ',')
        cout<<"--..--"<<endl;
      else if(arr[i] == '?')
        cout<<"..--.."<<endl;
      else if(arr[i] == '!')
        cout<<"-.-.--"<<endl;
      else if(arr[i] == '/')
        cout<<"-..-."<<endl;
      else if(arr[i] == '(')
        cout<<"-.--."<<endl;
      else if(arr[i] == ')')
        cout<<"-.--.-"<<endl;
      else if(arr[i] == '&')
        cout<<".-..."<<endl;
    }
  cout<<endl;
}

int main()
{
	int choice;
	char a[50];

    cout<<"\tOptions: \n";
    cout<<"1. Convert english to morse code "<<endl;
    cout<<"2. Convert morse code to english "<<endl;
    cout<<"Press 1 or 2: ";
    cin>>choice;
    
    switch(choice)
    {
    	case 1:
    	{	
    		cin>>a;
    		EngToMorse(a);
    		break;
    	}
		case 2:
    	{
			cin>>a;
			MorseToEnglish(a);
			break;
		}	
		default:
		{	
			cout<<"You have entered the wrong choice.";
			break;
		}
	}
    return 0;
}
