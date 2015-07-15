let tagfiles=glob("`find ~/.vim/tagfiles ~/Desktop/Workspace/ -name tags -print`")
let &tags=substitute(tagfiles,"\n",",","g")
