#! /bin/bash

#1: Print the current logged in user
echo "Loged in as : $(whoami)"

#2. In which directory
echo "I am in : $(pwd)"

#3. in which terminal working
echo "Currently working terminal is : $TERM"

#4. Total number of files and directories in the current directory
echo "Number of files :$(find . -maxdepth 1 -type d | wc -l)"
echo "Number of directories :$(find . -maxdepth 1 -type f | wc -l)"
echo "total_files=$(ls | wc -l)"

#5. get access control list of file.
setfacl --remove-all commands.txt
getfacl commands.txt

#6. Give permission to read and write  to user “user1” for file .
echo "Setting read and write permissions for user 'user1'..."
setfacl -m u:user1:rw commands.txt


#7. Give permission to read  to group  “dac” for file .
echo "Setting read permissions for group dac for 'file'"
setfacl -m g:dac:r commands.txt
getfacl commands.txt
