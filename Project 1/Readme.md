## Problem Analysis

- **Input:** The program takes input from the user through a menu-driven interface. Users provide choices for registration, reviewing seat occupancy, searching for a patron, accessing an admin panel, or exiting the program. The input includes names, ages, and the number of individuals to register in the VIP or Standard section.

- **Process:** The program processes user input based on the chosen menu option. It validates input, manages registration in the VIP and Standard sections, displays seat occupancy information, searches for patrons, and provides access to an admin panel with password protection. The admin panel allows viewing information for the VIP, Standard, or both sections, depending on user input.

- **Output:** The program outputs relevant information based on user actions. This includes displaying registration details such as names, ages, and assigned seat numbers for both VIP and Standard sections. The program also outputs seat occupancy information, searches for patrons and displays their seat numbers, and provides an admin panel to view detailed information about the sections with proper authentication.

## Pseudocode
    
    1. Start program
    2. Declare constants: VIP_CAPACITY = 30, STANDARD_CAPACITY = 70
    3. Declare arrays: names[100], vipSeats[30], standardSeats[70], ages[100]
    4. Declare integers: totalVIP = 0, totalStandard = 0, vipSeatIndex = 0, standardSeatIndex = 0, choice, n
    5. Enter main function
    6. Do the following until user chooses to exit (choice == 5):
    7. Display menu:
    8. Read user choice, validate for integer input
    9. Switch based on user choice:
    10. Case 1:
    11. Display registration menu:
    12. Read section choice
    13. Switch based on section choice:
    14. Case 1 (VIP):
    15. Display VIP section header
    16. Check if VIP section is not full:
    17. Read number of individuals (n) to register
    18. Check if there is enough space in VIP section:
    19. Loop for each individual:
    20. Read name and age, validate age input
    21. Assign VIP seat and increment counters
    22. Display ticket information for registered individuals
    23. If not enough space:
    24. Display message and ask if some can be allocated to Standard section
    25. Read user choice:
    26. If yes:
    27. Read number of individuals (n) for VIP section
    28. Check if remaining VIP seats are sufficient
    29. Loop for each individual, same process as Case 1
    30. If no:
    31. Display message and ask if all can be allocated to Standard section
    32. Read user choice:
    33. If yes, go to Case 2
    34. If no, exit program
    35. If VIP section is full:
    36. Display message and ask if user wants to register in Standard section
    37. Read user response:
    38. If yes, go to Case 2
    39. If no, exit program
    40. Case 2 (Standard):
    41. Display Standard section header
    42. Check if Standard section is not full:
    43. Read number of individuals (n) to register
    44. Check if there is enough space in Standard section:
    45. Loop for each individual:
    46. Read name and age, validate age input
    47. Assign Standard seat and increment counters
    48. Display ticket information for registered individuals
    49. If not enough space:
    50. Display message and ask if some can be allocated to VIP section
    51. Read user choice:
    52. If yes:
    53. Read number of individuals (n) for Standard section
    54. Check if remaining Standard seats are sufficient
    55. Loop for each individual, same process as Case 2
    56. If no:
    57. Display message and ask if all can be allocated to VIP section
    58. Read user choice:
    59. If yes, go to Case 1
    60. If no, exit program
    61. If Standard section is full:
    62. Display message and ask if user wants to register in VIP section
    63. Read user response:
    64. If yes, go to Case 1
    65. If no, exit program
    66. Default:
    67. Display error message
    68. Display ticket information for registered individuals in the selected section
    69. Case 2:
    70. Display seat occupancy information
    71. Case 3:
    72. Read patron name to search
    73. Loop through names array to find patron and display seat number
    74. Case 4:
    75. Prompt user for password
    76. If password is correct:
    77. Prompt user for section choice
    78. Switch based on section choice:
    79. Case 1 (VIP):
    80. Display VIP section information
    81. Case 2 (Standard):
    82. Display Standard section information
    83. Case 3 (Both):
    84. Display VIP section information
    85. Display Standard section information
    86. If password is incorrect, display error message
    87. Case 5:
    88. Display exit message
    89. Break out of loop
    90. Default:
    91. Display error message
    92. End switch
    93. Display separator line
    94. End program
