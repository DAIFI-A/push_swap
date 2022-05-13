#! /bin/sh

read -p "your repositorie =>" repositorie
read -p "your branche =>" ranche
read -p "your message =>" message
read -p "your files =>"  files

git init
git checkout $branche
git add $files
git commit -m "$message"
git remote add $repositorie git@github.com:DAIFI-A/$repositorie.git
git push -u $repositorie $branche
