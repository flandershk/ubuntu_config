source $VIMRUNTIME/delmenu.vim
source $VIMRUNTIME/menu.vim
source $VIMRUNTIME/vimrc_example.vim
"source $VIMRUNTIME/mswin.vim
"behave mswin

filetype plugin indent on
set fileformats=unix,dos
set nobackup
set nowritebackup
"set noswapfile
"set columns=90
"set encoding=utf-8
set foldmethod=marker
set termencoding=utf-8
set fileencoding=gbk
set fileencodings=utf-8,ucs-bom,chinese
set nocompatible
set autochdir
set guioptions-=m
set guioptions-=M
set guioptions-=T
set guioptions-=r
set guioptions-=L
set t_Co=256
"设置缩进"
set shiftwidth=4
set sts=4
set tabstop=4
"set selectmode=cmd
"set selection=inclusive
"tab->space
set undofile
set undodir=~/undofiles
set expandtab
set fo+=mB
"Indent related
set cin
set ai
set cino=:0g0t0(susj1
"设置默认字体及大小"
set guifont=Anonymous\ Pro\ 13
"set langmenu=zh_CN.utf-8
"智能区分大小写"
set ignorecase smartcase
set number
set directory=.,$TEMP
"language messages zh_cn.utf-8
"设置默认配色方案"
"colorschem calmar256-dark
syntax on
set background=dark
colorschem solarized
set completeopt=longest,menu

"Only do this part when compiled with support for autocommands.
if has("autocmd")
    autocmd Filetype java setlocal omnifunc=javacomplete#Complete
endif

map <F5> :call CompileRun()<CR> 
map <C-F5> :call Debug()<CR>

function! CompileRun() 
    exec "w" 
    "C程序 
    if &filetype == 'c' 
        exec "!gcc % -g -o %<" 
        exec "!%<" 
    elseif &filetype == 'cpp'
        exec "!g++ % -g -o %<"
        exec "!%<"
    endif 
endfunc 
"结束定义CompileRun

"定义Debug函数，用来调试程序 
function! Debug() 
    exec "w" 
    "C程序 
    if &filetype == 'c' 
        exec "!gcc % -g -o %<" 
        exec "!gdb %<" 
    elseif &filetype == 'cpp'
        exec "!g++ % -g -o %<"
        exec "!gdb %<"
    endif 
endfunc 

let Tlist_Show_One_File=1
let Tlist_Exit_OnlyWindow=1
"auto complete
let g:SuperTabRetainCompletionType=2
"let g:SuperTabDefaultCompletionType="<C-X><C-O>"
nnoremap <silent> <F8> :TlistToggle<CR>
set tags=tags;/
map <F4> :!ctags -R --c++-kinds=+p --fields=+iaS --extra=+q .<CR>
"autocmd Filetype java,javascript,jsp inoremap <buffer>  .  .<C-X><C-O><C-P>

map fg : Dox<cr>
map fl : DoxLic<cr>
map fa : DoxAuthor<cr>
let g:DoxygenToolkit_authorName="huangkun, huangkun@asiainfo-linkage.com\<enter>* @copyright(c) 2003-2012, Asiainfo HangZhou. All rights reserved."
let s:licenseTag = "Copyright (c) 2003-2009, Asiainfo HangZhou. All rights reserved.\<enter>"
let s:licenseTag = s:licenseTag . "For free\<enter>"
let s:licenseTag = s:licenseTag . "All right reserved\<enter>"
let g:DoxygenToolkit_licenseTag = s:licenseTag
"let g:DoxygenToolkit_licenseTag="My own license\<enter>"
let g:DoxygenToolkit_undocTag="DOXIGEN_SKIP_BLOCK"
let g:DoxygenToolkit_briefTag_pre = "@brief  "
let g:DoxygenToolkit_paramTag_pre = "@param  "
let g:DoxygenToolkit_returnTag = "@return  "
let g:DoxygenToolkit_briefTag_funcName = "no"
let g:DoxygenToolkit_maxFunctionProtoLines = 30

au GUIEnter * call MaximizeWindow()
function! MaximizeWindow()
    silent !wmctrl -r :ACTIVE: -b add,maximized_vert,maximized_horz
endfunction

"let g:EchoFuncKeyNext="ALT+N"
"let g:EchoFuncKeyPrev="ALT+P"

let OmniCpp_MayCompleteScope = 1

set clipboard^=unnamed,unnamedplus
"set go+=a
vnoremap <C-Ins> "+y
