echo "CPP STL repo push>>"
git init 
git add .
git commit -m "first commit"
git branch -M main
git remote add github_cpp_stl https://github.com/golden-cp/cpp-stl.git
git push -u github_cpp_stl main
# git branch --set-upstream-to main github_cpp_stl