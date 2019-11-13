#include"MyMovieStat.h"

int * makeArray(int size)
{


	//creates the dynamic array of integers
	int * modeArray = new int[size];

	//checks if such an array was created successfully
	if(!modeArray)	return 0;

	//loop that fills the array with the random integers
	for(int i = 0; i < size; i++)
  { cout<<"How many Netflix movies this the student "<<i+1<<" watch"<<endl;
		cin>>*(modeArray + i);
    cout<<"-----------------------------------------"<<endl;
  }
  	return modeArray;
}

//Function that displays an array to the user
void showArray(int * modeArray, int size)
{
	for(int i = 0; i < size; i++)
		cout << *(modeArray + i) << " ";
}
//average calculation function
double average(int*modeArray, int size)
{
  int sum=0;
  for(int i = 0; i < size; i++)
		sum+=*(modeArray + i);
    double average=(double) sum/size;
  cout<< "The average:"<<average<< endl;
    return average ;

}
//function to print the median 
void findMedian(int* modeArray, int size) 
{ 
    // First we sort the array 
    sort(modeArray, modeArray+size); 
  //cout<< "size"<< size<< endl;
    // check for even case 
    if (size % 2 != 0) 
    {  
      cout<<endl<<"odd Median "<<modeArray[size/2]<<endl;
      // return (double)modeArray[size/2]; 
    }
    else { 
    //return (double)
    cout<<endl<< "Even Median "<<(modeArray[(size-1)/2] + modeArray[size/2])/2.0<<endl; 
    }
} 
/*-------------------------------------------------------*/
 //function that calculates the mode from a user input 
/*-------------------------------------------------------*/
int mode(int * modeArray, int size)
{
		// definition of maximum to create the array to return mode
 int max = *modeArray;
  for (int i =0; i < size; i++)
    {
      if(max< *(modeArray+i))
         max=*(modeArray+i);
    }
    //creation of a dynamic short array of sixe: max +1 and initialization of every members to 0
  	short * amount = new short[max+1]();
  //checks if the creation is successful
	if(!amount) 
    return -1;
  // sorting the array
   for (int i = 0; i < size-1; i++)      
     { 
        for (int j = 0; j < size-i-1; j++) 
        { 
            if (modeArray[j] > modeArray[j+1])  
            {
            int temp = modeArray[j];  
            modeArray[j] = modeArray[j+1];  
            modeArray[j+1] = temp; 
            }
        }
     }
  // function to return the mode
  for (int i=0;i<size;i++)
  {
    amount[modeArray[i]]++;
  }
    int mode = 0; 
    int k = amount[0]; 
    int i;
    for ( i = 1; i < max+1; i++) { 
        if (amount[i] > k)
         { 
            k = amount[i]; 
            mode = i; 
         } 
    } 
    //the case where there is no mode
    if (mode ==0)
    {
      return -1;
    }
  
	// free some memory
	delete [] amount;
	delete [] modeArray;
  
  
 return mode;
}