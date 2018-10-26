# ~/.bashrc: executed by bash(1) for non-login shells.
# see /usr/share/doc/bash/examples/startup-files (in the package bash-doc)
# for examples

# If not running interactively, don't do anything
case $- in
    *i*) ;;
      *) return;;
esac

# don't put duplicate lines or lines starting with space in the history.
# See bash(1) for more options
HISTCONTROL=ignoreboth

# append to the history file, don't overwrite it
shopt -s histappend

# for setting history length see HISTSIZE and HISTFILESIZE in bash(1)
HISTSIZE=1000
HISTFILESIZE=2000

# check the window size after each command and, if necessary,
# update the values of LINES and COLUMNS.
shopt -s checkwinsize

# If set, the pattern "**" used in a pathname expansion context will
# match all files and zero or more directories and subdirectories.
#shopt -s globstar

# make less more friendly for non-text input files, see lesspipe(1)
[ -x /usr/bin/lesspipe ] && eval "$(SHELL=/bin/sh lesspipe)"

# set variable identifying the chroot you work in (used in the prompt below)
if [ -z "${debian_chroot:-}" ] && [ -r /etc/debian_chroot ]; then
    debian_chroot=$(cat /etc/debian_chroot)
fi

# set a fancy prompt (non-color, unless we know we "want" color)
case "$TERM" in
    xterm-color|*-256color) color_prompt=yes;;
esac

# uncomment for a colored prompt, if the terminal has the capability; turned
# off by default to not distract the user: the focus in a terminal window
# should be on the output of commands, not on the prompt
#force_color_prompt=yes

if [ -n "$force_color_prompt" ]; then
    if [ -x /usr/bin/tput ] && tput setaf 1 >&/dev/null; then
	# We have color support; assume it's compliant with Ecma-48
	# (ISO/IEC-6429). (Lack of such support is extremely rare, and such
	# a case would tend to support setf rather than setaf.)
	color_prompt=yes
    else
	color_prompt=
    fi
fi

if [ "$color_prompt" = yes ]; then
    #PS1='${debian_chroot:+($debian_chroot)}\[\033[01;32m\]\u@\h\[\033[00m\]:\[\033[01;34m\]\w\[\033[00m\]\$ '
    PS1='${debian_chroot:+($debian_chroot)}\[\033[01;32m\]\u\[\033[00m\]:\[\033[01;34m\]\w\[\033[00m\]\$ '
else
    PS1='${debian_chroot:+($debian_chroot)}\u@\h:\w\$ '
fi
unset color_prompt force_color_prompt

# If this is an xterm set the title to user@host:dir
case "$TERM" in
xterm*|rxvt*)
    #PS1="\[\e]0;${debian_chroot:+($debian_chroot)}\u@\h: \w\a\]$PS1"
    PS1="\[\e]0;${debian_chroot:+($debian_chroot)}\u: \w\a\]$PS1"
    ;;
*)
    ;;
esac

# enable color support of ls and also add handy aliases
if [ -x /usr/bin/dircolors ]; then
    test -r ~/.dircolors && eval "$(dircolors -b ~/.dircolors)" || eval "$(dircolors -b)"
    alias ls='ls --color=auto'
    #alias dir='dir --color=auto'
    #alias vdir='vdir --color=auto'

    alias grep='grep --color=auto'
    alias fgrep='fgrep --color=auto'
    alias egrep='egrep --color=auto'
fi

# colored GCC warnings and errors
#export GCC_COLORS='error=01;31:warning=01;35:note=01;36:caret=01;32:locus=01:quote=01'

# some more ls aliases
alias ll='ls -alF'
alias la='ls -A'
alias l='ls -CF'

# Add an "alert" alias for long running commands.  Use like so:
#   sleep 10; alert
alias alert='notify-send --urgency=low -i "$([ $? = 0 ] && echo terminal || echo error)" "$(history|tail -n1|sed -e '\''s/^\s*[0-9]\+\s*//;s/[;&|]\s*alert$//'\'')"'

# Alias definitions.
# You may want to put all your additions into a separate file like
# ~/.bash_aliases, instead of adding them here directly.
# See /usr/share/doc/bash-doc/examples in the bash-doc package.

if [ -f ~/.bash_aliases ]; then
    . ~/.bash_aliases
fi

# enable programmable completion features (you don't need to enable
# this, if it's already enabled in /etc/bash.bashrc and /etc/profile
# sources /etc/bash.bashrc).
if ! shopt -oq posix; then
  if [ -f /usr/share/bash-completion/bash_completion ]; then
    . /usr/share/bash-completion/bash_completion
  elif [ -f /etc/bash_completion ]; then
    . /etc/bash_completion
  fi
fi


###############################################################################
##nvr)
###############################################################################
# Hisilicon Linux, Cross-Toolchain PATH
#export PATH="$PATH:/opt/hisilicon/toolchains/arm-linux-nptl-soft/bin" 
#export PATH="$PATH:/opt/hisi-linux_v2/x86-arm/arm-hisiv200-linux/target/bin" 
#export PATH="$PATH:/opt/hisi-linux_nvr/x86-arm/arm-hisiv200-linux/target/bin" 
# for 1670, 470, 1000
MPC8536_BIN=/opt/freescaleNVR/bin
# for 4000
P2041_BIN=/opt/QorIQ-SDK-V1.2-20120614-yocto/build_p2041rdb_release/tmp/sysroots/i686-linux/usr/bin/ppce500mc-fsl-linux
# for 4000, openssl version updated to 0.9.8zh
P2041_V2_BIN=/opt/QorIQ-SDK-V1.2-20120614-yocto_v2/build_p2041rdb_release/tmp/sysroots/i686-linux/usr/libexec/ppce500mc-fsl-linux/gcc/powerpc-fsl-linux/4.6.2/
# for 4000, the new compiler
P2041_2ND_BIN=/opt/QorIQ-SDK-V1.4-20130625-yocto/build_p2041rdb_release/tmp/sysroots/i686-linux/usr/bin/ppce500mc-fsl_networking-linux
# A8_TOOLCHAIN_PATH=/home/67SambaRoot/DSP/toolchain/ ##commented because of the new Arm-cross-compiler, which is newly added for 472S
A8_TOOLCHAIN_PATH=/opt/SRN-472S/Cross-Compiler/arm-dsp/
# A8_TOOLCHAIN_BIN_PATH=/home/67SambaRoot/DSP/toolchain/bin ##commented because of the new Arm-cross-compiler, which is newly added for 472S
A8_TOOLCHAIN_BIN_PATH=/opt/SRN-472S/Cross-Compiler/arm-dsp/bin
# for 2000
SRN2000_BIN=/opt/hi3536_v2010/arm-hisiv400-linux/target/bin
SRN2000_LIB=/opt/hi3536_v2010/arm-hisiv400-linux/arm-hisiv400-linux-gnueabi/lib
# Hi3536v3
Hi3536_S1_PATH=/opt/hi3536_v50/arm-hisiv400-linux/target/bin
# for Hi3798C & Hi3798Cv2
HI3798C_PATH=/opt/hi3798c_v031/arm-histbv310-linux/bin


#NVR
#PATH=$PATH:$MPC8536_BIN:$P2041_BIN:$P2041_V2_BIN:$P2041_2ND_BIN:$A8_TOOLCHAIN_BIN_PATH:$SRN2000_BIN:$Hi3536_S1_PATH:$HI3798C_PATH

#DVR
PATH=$PATH:/opt/montavista/pro/devkit/ppc/83xx/bin:/opt/hisi-linux/x86-arm/arm-hisiv200-linux/target/bin:/opt/hisilicon/toolchains/arm-linux-nptl-soft/bin:/opt/hisi-linux/x86-arm/arm-hisiv400-linux/target/bin


###############################################################################
#alias
###############################################################################

alias lb='FF="wn5example";Now=`date +%s`;Was=`stat -c %Z $FF`;echo "$FF was made $(($Now-$Was)) seconds ($(($(($Now-$Was))/60)) mins) ago"'
alias lc='FF="bin/dvr_main";Now=`date +%s`;Was=`stat -c %Z $FF`;echo "$FF was made $(($Now-$Was)) seconds ($(($(($Now-$Was))/60)) mins) ago"'

alias llb='FF="../../../bsp/rootfilesystem/nfsroot/wn5/work/www/htdocs/webServices";Now=`date +%s`;Was=`stat -c %Z $FF`;echo "$FF was made $(($Now-$Was)) seconds ($(($(($Now-$Was))/60)) mins) ago"'
alias mllb='time make -j 2 -s buildweb;FF="../../../bsp/rootfilesystem/nfsroot/wn5/work/www/htdocs/webServices";Now=`date +%s`;Was=`stat -c %Z $FF`;echo "$FF was made $(($Now-$Was)) seconds ($(($(($Now-$Was))/60)) mins) ago"'

alias sdm='svn diff --diff-cmd=meld'
alias sdd='svn diff --diff-cmd=diffuse -x -t'

alias g='grep -rniI --exclude-dir=.svn --exclude=*.map --exclude=tags --exclude=cscope.out'
alias gg='grep -rnaiI --include=*.c --include=*.cpp --include=*.h --include=Makefile --include=Rules.make* --include=config.in '
alias ff='find ./ -iname'


alias nvr_rb='svn up;\
	rm ~/.post-review-cookies.txt;\
	rbt post -d --server http://ctf1.stw.net/rb/s/proj1035 --username dm8_kim --description-file ~/review_template.txt'
alias dvr_rb='svn up;\
        rm ~/.post-review-cookies.txt;\
        rbt post -d --server http://ctf1.stw.net/rb/s/proj1034 --username dm8_kim'

#alias zz='cd /home/dm8/project/tsto/logo/HRD-443_170405_v1.00/dvr_app'
#alias xx='cd /home/dm8/project/tsto/logo/hrd-1641-841-840-440_20170508/dvr_app'
alias xx='cd /home/dm8/project/tsto/logo/hrd-1642_161219/dvr_app'
alias mm='time make -j 9 -s;lc'
alias zz='cd /home/dm8/project/tsto/unification/detroit'

#
#alias dvr='source ~/compiler_path DVR'
#alias nvr='source ~/compiler_path NVR'

alias python=python3
#alias pip=pip3

