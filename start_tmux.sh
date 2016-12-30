#!/bin/sh

tmux has-session -t dev
if [ $? -eq 1 ]
then
    tmux new-session -s dev -n dataCheck -d
    tmux send-keys -t dev 'cd ~/code/drqry_new/dataCheck ' C-m
    tmux new-window -n ocnosql -t dev
    tmux send-keys -t dev:1 'sshocnosql' C-m
    sleep 1
    tmux send-keys -t dev:1 'Ocnosql@2016' C-m
    tmux send-keys -t dev:1 'cd maintain/huangkun' C-m

    tmux new-window -n zxdcx -t dev
    tmux send-keys -t dev:2 'sshzxdcx' C-m
    sleep 1
    tmux send-keys -t dev:2 'zxdcx' C-m
    tmux send-keys -t dev:2 'cd maintain/huangkun' C-m

    tmux new-window -n tomcat -t dev
    tmux send-keys -t dev:3 'cd /usr/local/bin/apache-tomcat-7.0.69' C-m
    #tmux new-window -n tomcat/lib -t dev
    #tmux send-keys -t dev:4 'cd /usr/local/bin/apache-tomcat-7.0.69/lib' C-m
    #tmux new-window -n tomcat/conf -t dev
    #tmux send-keys -t dev:5 'cd /usr/local/bin/apache-tomcat-7.0.69/conf' C-m
    #tmux new-window -n tomcat/logs -t dev
    #tmux send-keys -t dev:6 'cd /usr/local/bin/apache-tomcat-7.0.69/logs' C-m
    tmux new-window -n tomcat -t dev
    tmux send-keys -t dev:4 'cd /usr/local/bin/apache-tomcat-7.0.69' C-m
    tmux new-window -t dev
    tmux new-window -t dev
    tmux new-window -t dev
    tmux new-window -t dev
    tmux new-window -t dev
    tmux select-window -t dev:0
fi
tmux attach -t dev
