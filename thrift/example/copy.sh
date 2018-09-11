dependList=$( ldd $1 | awk '{if (match($3,"/")){ print $3}}' )
cp $dependList $2
cp $1 $2
