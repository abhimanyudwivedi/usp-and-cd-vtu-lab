lab5.c ->

Problem Statement ->

Write a C/C++ program that outputs the contents of its Environment list.

Compilation ->
$ gcc lab5.c
$ ./a.out


XDG_VTNR=7
SSH_AGENT_PID=1979
XDG_SESSION_ID=c2
CLUTTER_IM_MODULE=xim
SELINUX_INIT=YES
XDG_GREETER_DATA_DIR=/var/lib/lightdm-data/abhimanyu
COMP_WORDBREAKS= 	
"'><;|&(:
GPG_AGENT_INFO=/run/user/1000/keyring-AP7US5/gpg:0:1
TERM=xterm
SHELL=/bin/bash
VTE_VERSION=3409
SSH_AGENT_LAUNCHER=upstart
WINDOWID=12582924
UPSTART_SESSION=unix:abstract=/com/ubuntu/upstart-session/1000/1913
GNOME_KEYRING_CONTROL=/run/user/1000/keyring-AP7US5
GTK_MODULES=overlay-scrollbar:unity-gtk-module
USER=abhimanyu
LS_COLORS=rs=0:di=01;34:ln=01;36:mh=00:pi=40;33:so=01;35:do=01;35:bd=40;33;01:cd=40;33;01:or=40;31;01:su=37;41:sg=30;43:ca=30;41:tw=30;42:ow=34;42:st=37;44:ex=01;32:*.tar=01;31:*.tgz=01;31:*.arj=01;31:*.taz=01;31:*.lzh=01;31:*.lzma=01;31:*.tlz=01;31:*.txz=01;31:*.zip=01;31:*.z=01;31:*.Z=01;31:*.dz=01;31:*.gz=01;31:*.lz=01;31:*.xz=01;31:*.bz2=01;31:*.bz=01;31:*.tbz=01;31:*.tbz2=01;31:*.tz=01;31:*.deb=01;31:*.rpm=01;31:*.jar=01;31:*.war=01;31:*.ear=01;31:*.sar=01;31:*.rar=01;31:*.ace=01;31:*.zoo=01;31:*.cpio=01;31:*.7z=01;31:*.rz=01;31:*.jpg=01;35:*.jpeg=01;35:*.gif=01;35:*.bmp=01;35:*.pbm=01;35:*.pgm=01;35:*.ppm=01;35:*.tga=01;35:*.xbm=01;35:*.xpm=01;35:*.tif=01;35:*.tiff=01;35:*.png=01;35:*.svg=01;35:*.svgz=01;35:*.mng=01;35:*.pcx=01;35:*.mov=01;35:*.mpg=01;35:*.mpeg=01;35:*.m2v=01;35:*.mkv=01;35:*.webm=01;35:*.ogm=01;35:*.mp4=01;35:*.m4v=01;35:*.mp4v=01;35:*.vob=01;35:*.qt=01;35:*.nuv=01;35:*.wmv=01;35:*.asf=01;35:*.rm=01;35:*.rmvb=01;35:*.flc=01;35:*.avi=01;35:*.fli=01;35:*.flv=01;35:*.gl=01;35:*.dl=01;35:*.xcf=01;35:*.xwd=01;35:*.yuv=01;35:*.cgm=01;35:*.emf=01;35:*.axv=01;35:*.anx=01;35:*.ogv=01;35:*.ogx=01;35:*.aac=00;36:*.au=00;36:*.flac=00;36:*.mid=00;36:*.midi=00;36:*.mka=00;36:*.mp3=00;36:*.mpc=00;36:*.ogg=00;36:*.ra=00;36:*.wav=00;36:*.axa=00;36:*.oga=00;36:*.spx=00;36:*.xspf=00;36:
XDG_SESSION_PATH=/org/freedesktop/DisplayManager/Session0
XDG_SEAT_PATH=/org/freedesktop/DisplayManager/Seat0
SSH_AUTH_SOCK=/run/user/1000/keyring-AP7US5/ssh
DEFAULTS_PATH=/usr/share/gconf/ubuntu.default.path
XDG_CONFIG_DIRS=/etc/xdg/xdg-ubuntu:/usr/share/upstart/xdg:/etc/xdg
PATH=/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games
DESKTOP_SESSION=ubuntu
QT_IM_MODULE=ibus
QT_QPA_PLATFORMTHEME=appmenu-qt5
JOB=gnome-session
PWD=/home/abhimanyu/gitwork/usp-and-cd/lab5
XMODIFIERS=@im=ibus
GNOME_KEYRING_PID=1910
LANG=en_IN
GDM_LANG=en_US
MANDATORY_PATH=/usr/share/gconf/ubuntu.mandatory.path
UBUNTU_MENUPROXY=1
IM_CONFIG_PHASE=1
COMPIZ_CONFIG_PROFILE=ubuntu
GDMSESSION=ubuntu
SESSIONTYPE=gnome-session
SHLVL=1
XDG_SEAT=seat0
HOME=/home/abhimanyu
LANGUAGE=en_IN:en
GNOME_DESKTOP_SESSION_ID=this-is-deprecated
UPSTART_INSTANCE=
UPSTART_EVENTS=started starting
LOGNAME=abhimanyu
QT4_IM_MODULE=xim
XDG_DATA_DIRS=/usr/share/ubuntu:/usr/share/gnome:/usr/local/share/:/usr/share/
DBUS_SESSION_BUS_ADDRESS=unix:abstract=/tmp/dbus-IaGjJN0beo
LESSOPEN=| /usr/bin/lesspipe %s
INSTANCE=Unity
UPSTART_JOB=unity-settings-daemon
TEXTDOMAIN=im-config
XDG_RUNTIME_DIR=/run/user/1000
DISPLAY=:0
XDG_CURRENT_DESKTOP=Unity
GTK_IM_MODULE=ibus
LESSCLOSE=/usr/bin/lesspipe %s %s
TEXTDOMAINDIR=/usr/share/locale/
COLORTERM=gnome-terminal
XAUTHORITY=/home/abhimanyu/.Xauthority
OLDPWD=/home/abhimanyu/gitwork/usp-and-cd
_=./a.out

lab5b.c ->

Problem Statement ->

Write a C/C++ program to emulate the unix ln command.

Compilation ->

$ gcc lab5b.c
$ ./a.out

$ gcc ques5b.c 
$ ./a.out file1 file2

$ ls -l
total 20
-rwxrwxr-x 1 abhimanyu abhimanyu 8614 Mar 14 14:37 a.out
-rw-rw-r-- 1 abhimanyu abhimanyu  342 Mar 14 14:34 lab5b.c
-rw-rw-r-- 1 abhimanyu abhimanyu  139 Mar 14 14:37 README.md
-rw-rw-r-- 2 abhimanyu abhimanyu    0 Mar 14 14:37 file1
-rw-rw-r-- 2 abhimanyu abhimanyu    0 Mar 14 14:37 file2