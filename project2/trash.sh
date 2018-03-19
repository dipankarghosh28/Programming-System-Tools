#!/bin/bash

echo "Please enter the file name"
read var1
file=$var1

if [ -f "$file" ];
then 
	echo "$file exists"
else
	echo "does not exist"
fi

if [ -d "$HOME/TRASH" ]
then
	echo "TRASH directory exists brother and it shall move files to TRASH in 60 mins !" 
	find "$HOME/TRASH" -type f -mmin +60 -exec rm {} \;
else
	mkdir $HOME/TRASH 
	find "$HOME/TRASH" -type f -mmin +60 -exec rm {} \; 

fi  

echo "Enter the file names"
read -a arr
for a in ${arr[@]}
do
if [ -f $a ]
then
        echo " $a exists "
	find $pwd -name $a -exec mv {} $HOME/TRASH \;
	echo "$a copied"
else
	echo "$a does not exist and is not copied"
fi
done

