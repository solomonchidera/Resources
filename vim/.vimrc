" Basic Vim configuration

" Enable syntax highlighting
syntax on

" Enable line numbers
set number

" Set tab width to 4 spaces
set tabstop=4
set shiftwidth=4
set expandtab

" Enable mouse support (if needed)
set mouse=a

" Enable filetype detection
filetype plugin indent on

" Highlight search results as you type
set incsearch

" Ignore case when searching
set ignorecase

" Highlight search matches, but respect case
set smartcase

" Enable auto-indentation
set autoindent

" Enable visual feedback for tabs and trailing spaces
set list listchars=tab:▸\ ,trail:·

" Show current mode
set showmode

" Display the cursor position
set ruler

" Display incomplete commands
set showcmd

" Enable backspace in insert mode
set backspace=indent,eol,start

" Set the colorscheme (choose your favorite)
colorscheme desert

" Enable incremental search highlighting
set hlsearch

" Display matching brackets/parentheses
set showmatch

" Enable persistent undo across sessions
set undofile

" Enable word wrapping
set wrap

" Automatically save changes before running commands like :next, :make etc.
set autowrite

" Highlight the current line
set cursorline

" Ignore case when completing file names and directories
set wildignorecase

" Set a shorter timeout for mappings
set timeoutlen=300

" More Vim commands  edited on 28/03/2024

" Enable line wrapping at word boundaries
set linebreak

" Display a vertical line at a specific column to guide text wrapping
" set colorcolumn=80

" Enable persistent undo history
set undodir=~/.vim/undodir

" Display the full file path in the window status line
set statusline=%F

" Automatically indent new lines based on the previous line
set smartindent

" Enable spell checking
set spell

" Set the maximum width of text to display
set textwidth=80

" Enable auto-completion in insert mode
set completeopt=menuone,longest,preview

" Highlight visually selected text
set visualbell

" Display the current mode in the command line
set showmode

" There are certain files that we would never want to edit with Vim.
" Wildmenu will ignore files with these extensions.
set wildignore=*.docx,*.jpg,*.png,*.gif,*.pdf,*.pyc,*.exe,*.flv,*.img,*.xlsx

" Show matching words during a search.
set showmatch

" Do not wrap lines. Allow long lines to extend as far as the line goes.
set nowrap

" Load an indent file for the detected file type.
filetype indent on

" Disable compatibility with vi which can cause unexpected issues.
set nocompatible

" Begining of Plugin Magic

set nocompatible               " be iMproved
filetype off                   " required!

set rtp+=~/.vim/bundle/vundle/
call vundle#rc()

" let Vundle manage Vundle
" required! 
Bundle 'gmarik/vundle'

" My Bundles here:

" let Vundle manage Vundle, required
Plugin 'VundleVim/Vundle.vim'

" original repos on github
Bundle 'tpope/vim-fugitive'
Bundle 'Lokaltog/vim-easymotion'
Bundle 'rstacruz/sparkup', {'rtp': 'vim/'}
Bundle 'tpope/vim-rails.git'
Bundle 'vim-python/python-syntax'
" vim-scripts repos
Bundle 'L9'
Bundle 'FuzzyFinder'
" non github repos
Bundle 'git://git.wincent.com/command-t.git'
" ...

call vundle#end()             " required!
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

