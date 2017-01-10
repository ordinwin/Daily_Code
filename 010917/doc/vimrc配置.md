```
syntax on
set nu
"colorscheme darkblue
set noswapfile
set nobackup
set mouse=a

filetype on

set history=1000
set cursorline
"set cursorcolumn

set autoindent
set cindent
set smartindent

"set expandtab " space grid replace tab
set backspace=2
set tabstop=4
set shiftwidth=4
set softtabstop=4

set linebreak
set showmatch

set fileencodings=utf-8,gb2312,gbk,gb18030
set termencoding=utf-8
"set fileformats=unix
"set encoding=prc
set encoding=utf-8

set hlsearch
set incsearch

set laststatus=2
set ruler

"no \n
set nowrap


autocmd BufNewFile *.[ch],*.hpp,*.cpp,*.cc exec ":call Addreadme()"

function Addreadme()
    call setline(1, " ///")
	call append(1, " /// @file    " .expand("%:t"))
	call append(2, " /// @author  ordin(ordinwin@gmail.com)")
	call append(3, " /// @date    ".strftime("%Y-%m-%d %H:%M:%S"))
	call append(4, " ///")
	call append(5, " ")
	call append(6, "#include <iostream>")
endf
```