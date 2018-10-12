#!/bin/sh

git config --global credential.helper cache

i=5500
limit=6000
while [ $i -lt $limit ]
do
  i=`expr 1 + $i`
  echo "# hg pull --rev=$i"
  hg pull --rev=$i
  echo "# hg update"
  hg update
  echo "# git add ."
  git add .
  echo "# git commit"
  git commit -m "hg pull --rev=$i"
  echo "---------------------------------------------------------------------------------------------"
done

echo "# git push -u origin master"
git push -u origin master

