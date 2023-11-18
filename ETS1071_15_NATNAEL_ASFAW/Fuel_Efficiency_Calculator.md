A.)Problem Analysis: Calculating Automobile Range

 To create a program that calculates the maximum distance an automobile can travel without needing a refuel, based on the fuel tank's capacity and the vehicle's miles per gallon efficiency.
 
 Inputs:
 
  Tank Capacity (in gallons): This value represents the maximum amount of fuel the automobile's tank can hold.
  Miles per Gallon Efficiency: This value signifies the distance the automobile can cover per gallon of fuel.
 
 Output:
 
  The program will output the total distance the automobile can travel without refueling, based on the provided tank capacity and miles per gallon efficiency.
  
B.)Algorithm Design:

  Step1.Start
  
  Step2.Declare variables tankCapacity, milesPerGallon, and milesPossible of type double.

  Step3.Display a message to prompt the user to input the fuel tank capacity (tankCapacity).
  
  Step4.Read and store the user input into the variable tankCapacity.

  Step5.Display a message to prompt the user to input the miles per gallon (milesPerGallon).
 
  Step6.Read and store the user input into the variable milesPerGallon.
  
  Step7.Calculate milesPossible by multiplying tankCapacity with milesPerGallon.
  
  Step8.Display the calculated value of milesPossible as the number of miles the automobile can be driven without refueling.
  
  Step9.End
  
#Flowchart
``` mermaid
graph TD;
A([Start]) --> B[/"Enter the capacity of your automobile:,
Enter the miles per gallon your automobile can be driven:"/];
B --> D[miles = fuelCapacity * milesPerGallon];
D --> E[/'The number of miles your automobiles can be driven without refuling is' miles/];
E --> F([End]);
```
