Vim�UnDo� ��B�����șo�$'�A�d��L���xR�U                                  NTNT    _�                            ����                                                                                                                                                                                                                                                                                                                                                  v    NBNB     �                "source $VIMRUNTIME/mswin.vim�                $source $VIMRUNTIME/vimrc_example.vim�                source $VIMRUNTIME/menu.vim�                 source $VIMRUNTIME/delmenu.vim5�_�                            ����                                                                                                                                                                                                                                                                                                                                                  v    NDND    �         I      ""source $VIMRUNTIME/mswin.vim5�_�                             ����                                                                                                                                                                                                                                                                                                                                       I           V    NSNS    �              I   "source $VIMRUNTIME/delmenu.vim   "source $VIMRUNTIME/menu.vim   %"source $VIMRUNTIME/vimrc_example.vim   "source $VIMRUNTIME/mswin.vim   "behave mswin       filetype plugin indent on   "set fileformats=unix,dos   set nobackup   set nowritebackup   set columns=90   "set encoding=utf-8   "set termencoding=utf-8   set fileencoding=utf-8   (set fileencodings=ucs-bom,utf-8,chinese    set nocompatible   set autochdir   "set guioptions-=m   set guioptions-=T   
"��������"   set shiftwidth=4   	set sts=4   set tabstop=4   "tab->space   set undofile    set undodir=~/vimfiles/undofiles   set expandtab   "����Ĭ�����弰��С"   !set guifont=Courier_New:h14:cANSI   "set langmenu=zh_CN.utf-8   "�������ִ�Сд"   set ignorecase smartcase   
set number   set directory=.,$TEMP   "language messages zh_cn.utf-8   "����Ĭ����ɫ����"   colorschem crt       ?"Only do this part when compiled with support for autocommands.   if has("autocmd")   A    autocmd Filetype java setlocal omnifunc=javacomplete#Complete   endif        map <F5> :call CompileRun()<CR>    map <C-F5> :call Debug()<CR>       func CompileRun()        exec "w"        "C����        if &filetype == 'c'            exec "!gcc % -g -o %<"            exec "!%<"        elseif &filetype == 'cpp'           exec "!g++ % -g -o %<"           exec "!%<"   
    endif    endfunc    "��������CompileRun       "����Debug�������������Գ���    func Debug()        exec "w"        "C����        if &filetype == 'c'            exec "!gcc % -g -o %<"            exec "!gdb %<"        elseif &filetype == 'cpp'           exec "!g++ % -g -o %<"           exec "!gdb %<"   
    endif    endfunc        L"autocmd Filetype java,javascript,jsp inoremap <buffer>  .  .<C-X><C-O><C-P>5�_�                             ����                                                                                                                                                                                                                                                                                                                                                  v    N*N*     �                 "source $VIMRUNTIME/delmenu.vim�                "source $VIMRUNTIME/menu.vim�                %"source $VIMRUNTIME/vimrc_example.vim�                ""source $VIMRUNTIME/mswin.vim5��