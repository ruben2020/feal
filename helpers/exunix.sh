echo =================================
echo Running fealactorstimers ...
./build/examples/actors_and_timers/fealactorstimers
echo =================================
echo Running promise ...
./build/examples/promise/fealpromise
echo =================================
echo Running sigchld fork ...
./build/examples/sigchld_fork/fealfork
echo =================================
echo Running fork ipc ...
./build/examples/fork_ipc/fealforkipc
echo =================================
echo Running promise curl ...
./build/examples/promise_curl/fealpromisecurl
echo =================================
echo Running pipe info ...
./build/examples/pipe_info/fealfifowriter &
./build/examples/pipe_info/fealfiforeader
echo =================================
echo Running tcp IPv4 ...
./build/examples/tcp_echo_clientserver/fealtcpclient &
./build/examples/tcp_echo_clientserver/fealtcpserver
echo =================================
echo Running tcp IPv6 ...
./build/examples/tcp_echo_clientserver/fealtcpclient6 &
./build/examples/tcp_echo_clientserver/fealtcpserver6
echo =================================
echo Running udp IPv4 ...
./build/examples/udp_echo_clientserver/fealudpclient &
./build/examples/udp_echo_clientserver/fealudpserver
echo =================================
echo Running udp IPv6 ...
./build/examples/udp_echo_clientserver/fealudpclient6 &
./build/examples/udp_echo_clientserver/fealudpserver6
echo =================================
echo Running und ...
./build/examples/und_echo_clientserver/fealundclient &
./build/examples/und_echo_clientserver/fealundserver
echo =================================
echo Running uns ...
./build/examples/uns_echo_clientserver/fealunsclient &
./build/examples/uns_echo_clientserver/fealunsserver
echo =================================
echo Running uns abstract ...
./build/examples/uns_echo_clientserver/fealunsclient_abs &
./build/examples/uns_echo_clientserver/fealunsserver_abs
