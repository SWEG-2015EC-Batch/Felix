## Time to send a file

#### Problem Analysis

This program calculates the time required to transmit a file based on the size of the data in megabytes (MB). The program prompts the user to input the size of the data in megabytes, converts it to bytes, and then calculates the transmission time in seconds. The program uses a while loop to handle the conversion of seconds into days, hours, and minutes, concatenating the result into a string. The final output includes the formatted time in days, hours, minutes, and seconds required to transmit the file.

#### Algorithm
    1. Start
    2. Declare variables: size_in_mb (float), size_in_bytes (float), trans_time_in_seconds (int), result (string)
    3. Display "Enter the size of the data in MegaBytes(MB): "
    4. Read 'size_in_mb' from the user
    5. Calculate 'size_in_bytes' as 'size_in_mb * 1048576'
    6. Calculate 'trans_time_in_seconds' as 'size_in_bytes / 960'
    7. While 'trans_time_in_seconds' is greater than or equal to 60:
       a. If 'trans_time_in_seconds' is greater than or equal to 86400:
          i. Append 'trans_time_in_seconds / 86400' days to 'result'
          ii. Set 'trans_time_in_seconds' to 'trans_time_in_seconds % 86400'
       b. Else, if 'trans_time_in_seconds' is greater than or equal to 3600:
          i. Append 'trans_time_in_seconds / 3600' hours to 'result'
          ii. Set 'trans_time_in_seconds' to 'trans_time_in_seconds % 3600'
       c. Else:
          i. Append 'trans_time_in_seconds / 60' minutes to 'result'
          ii. Set 'trans_time_in_seconds' to 'trans_time_in_seconds % 60'
    8. Display "It takes ", 'result', " and ", 'trans_time_in_seconds', " seconds to send this file"
    9. End
#### FlowChart
