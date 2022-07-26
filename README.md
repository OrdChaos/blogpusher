# BlogPusher
A tool to help you push your blog or any other git repo by one command.

### How to use?
You just need to move blogpusher.exe to your git repo and add `blogpusher.*` to .gitignore.
Then, use `blogpusher xxxxxx` instead of:
```
git pull origin master
git add .
git commit -m"xxxxxx"
git push origin matser
```
That is!

### Compile
```
g++ -o blogpusher.exe blogpusher.cpp
```
Yes, you see, you can also compile it as other OS's executable file easily.
