查看系统的一些信息



root权限下



查看系统版本

cat /proc/version

查看CPU信息

cat /proc/cpuinfo



ifconfig 查看网卡IP信息

Link encap 网络协议  Ethernet以太网卡

HWaddr硬件地址

inet addr ipv4地址

Bcast 广播地址

Mast 子网掩码



内网

交换机 路由器



route

```
NAME
       route - show / manipulate the IP routing table

SYNOPSIS
       route [-CFvnee]

       route  [-v] [-A family] add [-net|-host] target [netmask Nm] [gw
              Gw] [metric N] [mss M] [window W] [irtt I] [reject] [mod]
              [dyn] [reinstate] [[dev] If]

```



netstat

```
NAME
       netstat  -  Print network connections, routing tables, interface
       statistics, masquerade connections, and multicast memberships

SYNOPSIS
       netstat    [address_family_options]    [--tcp|-t]     [--udp|-u]
       [--raw|-w]     [--listening|-l]     [--all|-a]    [--numeric|-n]
       [--numeric-hosts]  [--numeric-ports]  [--numeric-users]  [--sym-
       bolic|-N]   [--extend|-e[--extend|-e]]   [--timers|-o]   [--pro-
       gram|-p] [--verbose|-v] [--continuous|-c]

       netstat          {--route|-r}           [address_family_options]
       [--extend|-e[--extend|-e]]     [--verbose|-v]     [--numeric|-n]
       [--numeric-hosts] [--numeric-ports] [--numeric-users] [--contin-
       uous|-c]
```



TCP   

UDP



ping  





gcc  make





