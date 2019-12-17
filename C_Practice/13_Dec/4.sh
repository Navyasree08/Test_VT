# !/bash/bin

read -p  "Enter a string:" arr
len=${#arr}
for (( i = len-1; i>=0; i-- ))
do
	reverse+="${arr:$i:1}"
done
echo $reverse
