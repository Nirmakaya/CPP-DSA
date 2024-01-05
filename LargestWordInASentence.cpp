#include<iostream>
using namespace std;

int main(){

    int n;
    
    cin>>n;
    cin.ignore();               //Since we have used getline function

    char arr[n+1];
    

    //IN C++ the comlipler see a sapce as the input of another variable

    cin.getline(arr, n);            //This will input all the sentence,the compiler will not see space as another varialble and store the words after space in the same sentence
    cin.ignore();                   //To clear the buffer. Or we can use flush function

    int i=0;                    //Since we are going to use while loop hence a iterator is initialised

    int currLen=0, maxLen=0;
    int st=0, maxst=0;                  //St will tell the starting index of the word and manSt will give answer's startin index

    while(1){                       //Here we have taken always true condition
        
        if(arr[i]==' ' || arr[i]=='\0'){

            if( currLen > maxLen){

                maxLen = currLen;
                maxst = st;                 
            } 
                currLen=0;
                st=i+1;             //After this space the new index will be space + 1 or i+1
            
        }

        else
        currLen++;                      //To add the number of words

        if(arr[i] == '\0')             //In this we didn't write any brackets due to one line
            break;

        i++;

    }

    cout<< maxLen <<endl;

    for( int i=0; i<maxLen; i++){           //Loop is to increse the index and print the whole number, till maximum length

        cout<<arr[maxst+i];                 //To print character of maxst index and increment it

    }

    return 0;
}
