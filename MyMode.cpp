// #include "MyMode.h"

// int* myMode :: makeArray(int size)
// {

// 	//creates the dynamic array of integers
// 	  dataArray = new int[size];

// 	//loop that fills the array with the random integers
// 	for(int i = 0; i < size; i++)
//   {
//       cout<<"Enter the array position "<<i+1<<" number"<<endl;
// 	  	cin>> *(dataArray + i);
//       cout<<"-----------------------------------------"<<endl;
//   } 
//   this->size = size;
//   	return dataArray;
// }

// void myMode:: print()
// {
//  for(int i = 0; i < this->size; i++)
//  {
// 		cout << *(dataArray + i) << " ";
//  }
 
// }

// int myMode:: mode(int * dataArray, int size)
// {
//   this->dataArray =dataArray;
//   this->size = size;
//   /*//creates a parallel array that will contain the amount of times
// 	//an integer is repeated in the array of integers

//   int max = *(dataArray);
//    for(int i =0;i<size;i++)
//    { 
//      if(max<*(dataArray+i))
//      { //cout <<"checking";
//        max = *(dataArray+i);
//      }
//    }
	
//     //loop that sets all the values to 0
// 	int * amount = new int[max+1]();
  	
// 	 //check and store in the amount array

//   for(int i = 0; i < size ; i++)
//  {   
// 	 *(amount+*(dataArray+ i))=*(amount+*(dataArray+ i))+1;
// 	}
 
// 	if(!amount) return -1;



// 	//the position stores the index from the int array
// 	//max is a temporary varible to get the max from the short array
// 	//true_mode is the mode from the int array
// 	//Loop that checks the maximum from the short array
//   int position = 0, true_mode = *dataArray;
// 	for( int s = 0; s < max; s++)
// 	{
// 		if(max < *(amount + s))
// 		{
			
//  			max = *(amount + s);
//  			true_mode = *(dataArray + s);
//  			position = s;
    
//     }
    
// 	}
// if(max == 0) 
//   return -1;
// 	//free some memory
// 	delete [] amount;
// 	delete [] dataArray;
// cout<< endl;
// 	//the case where there is no mode
//  cout <<"The mode is "<< true_mode;
// 	return true_mode;
// }
// // void myMode :: average()
// // {
// //   int sum =0, average;
// //   for (int i =0;i<size;i++)
// //   sum+=*(dataArray +i);

// //   cout<<endl;
// //   cout<<"the average is: "<<sum/size;
// */

  


//   	//creates a parallel array that will contain the amount of times
// 	//an integer is repeated in the array of integers
// 	short * amount = new short[size];

// 	//checks if the creation is successful
// 	if(!amount) return -1;

// 	//loop that sets all the values to 0
// 	for(int k = 0; k < size; k++)
// 		*(amount + k) = 0;

// 	//Loop that check if an element is repeated in the array.
// 	//It starts with the first element and compares to other size - 2
// 	//elements in the array and so on.
// 	for(int i = 0; i < (size - 1); i++)
// 	{
// 		for(int j = i + 1; j < size; j++)
// 		{
// 			if(*(dataArray + i) == *(dataArray + j))
// 				*(amount + i) = *(amount + i) + 1;
// 		}
// 	}

// 	//declares a few variables to return the mode from the array
// 	//the position stores the index from the int array
// 	//max is a temporary varible to get the max from the short array
// 	//true_mode is the mode from the int array
// 	int position = 0, max = *amount, true_mode = *dataArray;

// 	//Loop that checks the maximum from the short array
// 	for(int s = 1; s < size; s++)
// 	{
// 		if(max < *(amount + s))
// 		{
// 			max = *(amount + s);
// 			true_mode = *(dataArray + s);
// 			position = s;
// 		}
// 	}

// 	// free some memory
// 	delete [] amount;
// 	delete [] dataArray;

// 	//the case where there is no mode
// 	if(max == 0) 
//   return -1;

// 	return true_mode;
//  }
