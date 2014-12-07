 set nocompatible               " be iMproved
 filetype off                   " required!

 set rtp+=~/.vim/bundle/vundle/
 call vundle#rc()

 " let Vundle manage Vundle
 " required! 
 Bundle 'gmarik/vundle'

 " My Bundles here:
 "
 " original repos on github
 Bundle 'tpope/vim-fugitive'
 Bundle 'Lokaltog/vim-easymotion'
 Bundle 'rstacruz/sparkup', {'rtp': 'vim/'}
 Bundle 'tpope/vim-rails.git'
 Bundle 'scrooloose/nerdtree'
 Bundle 'kien/ctrlp.vim'
 Bundle 'msanders/snipmate.vim'
 Bundle 'mileszs/ack.vim'
 Bundle 'Shougo/neocomplcache.vim'
 Bundle 'Townk/vim-autoclose'
 Bundle 'Lokaltog/vim-powerline'
 Bundle 'scrooloose/nerdcommenter'
 " vim-scripts repos
 Bundle 'L9'
 Bundle 'FuzzyFinder'
 " non github repos
 Bundle 'git://git.wincent.com/command-t.git'
 " git repos on your local machine (ie. when working on your own plugin)
 " ...

 filetype plugin indent on     " required!
 "
 " Brief help
 " :BundleList          - list configured bundles
 " :BundleInstall(!)    - install(update) bundles
 " :BundleSearch(!) foo - search(or refresh cache first) for foo
 " :BundleClean(!)      - confirm(or auto-approve) removal of unused bundles
 "
 " see :h vundle for more details or wiki for FAQ
 " NOTE: comments after Bundle command are not allowed..

 " NERDTree config
 map <F2> :NERDTreeToggle<CR>
 autocmd bufenter * if (winnr("$") == 1 && exists("b:NERDTreeType") &&  b:NERDTreeType == "primary") | q | endif
 autocmd StdinReadPre * let s:std_in=1
 autocmd VimEnter * if argc() == 0 && !exists("s:std_in") | NERDTree | endif

 "neocomplache config
 let g:neocomplcache_enable_at_startup = 1
 let g:neocomplcache_force_overwrite_completefunc = 1

 "other config
 set nu
 set mouse=a
 set tabstop=2
 let mapleader = ","  
 let g:mapleader = ","  
 map Y "+y  
 map P "+p  ""

 "easymotion
 let g:EasyMotion_leader_key = '<Leader>'

 "powerline config
 set nocompatible
 set t_Co=256
 set enc=utf-8
 let termencoding=&encoding
 set fileencodings=utf-8,gbk,ucs-bom,cp936
 let g:Powerline_symbols = 'fancy'
 set guifont=Ubuntu\ Mono\ for\ Powerline\ 12
 
 "The-Nerd-Comment config
 :nmap <C-K><C-C> <leader>c<space>
 :imap <C-K><C-C> <Esc><leader>c<space>i
 :nmap <C-K><C-U> <leader>c<space>
 :imap <C-K><C-U> <Esc><leader>c<space>i
