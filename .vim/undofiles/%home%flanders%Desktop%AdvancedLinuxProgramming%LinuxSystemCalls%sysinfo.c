Vim�UnDo� :�얦)m�f�����Q�����c�I-o|��w�                                     PE�    _�                             ����                                                                                                                                                                                                                                                                                                                                                             PE�v     �                   5�_�                            ����                                                                                                                                                                                                                                                                                                                                                          PE�z     �      	         <linux/sys.h>   	<stdio.h>   <sys/sysinfo.h>�               <linux/kernel.h>5�_�                            ����                                                                                                                                                                                                                                                                                                                                                          PE�~     �                 nclude   #include   #include   #include5�_�                            ����                                                                                                                                                                                                                                                                                                                                                          PE�    �             5�_�                            ����                                                                                                                                                                                                                                                                                                                                                          PE��     �                2    printf (“process count : %d\n”, si.procs);�                0        : %5.1f MB\n”, si.freeram / megabyte);�                1        : %5.1f MB\n”, si.totalram / megabyte);�                >    printf (“system uptime : %ld days, %ld:%02ld:%02ld\n”,5�_�                            ����                                                                                                                                                                                                                                                                                                                                                          PE��    �                0    printf (“process count : %d\n", si.procs);�                    printf (“free RAM�                    printf (“total RAM�                <    printf (“system uptime : %ld days, %ld:%02ld:%02ld\n",5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             PE��    �                #include <linux/sys.h>5�_�      	                     ����                                                                                                                                                                                                                                                                                                                                                             PE��     �                   printf ("total RAM   /        : %5.1f MB\n", si.totalram / megabyte);5�_�      
           	          ����                                                                                                                                                                                                                                                                                                                                                             PE��     �                   printf ("free RAM   .        : %5.1f MB\n", si.freeram / megabyte);5�_�   	              
          ����                                                                                                                                                                                                                                                                                                                                                             PE�     �               :    printf ("system uptime : %ld days, %ld:%02ld:%02ld\n",   2        si.uptime / day, (si.uptime % day) / hour,5�_�   
                    :    ����                                                                                                                                                                                                                                                                                                                                                             PE�   
 �               e    printf ("system uptime : %ld days, %ld:%02ld:%02ld\n", si.uptime / day, (si.uptime % day) / hour,   9        (si.uptime % hour) / minute, si.uptime % minute);5�_�                          ����                                                                                                                                                                                                                                                                                                                                                             PE��     �                 �              5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             PE��     �                #ifndef SYSINFO__5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             PE��     �                #ifndef __SYSINFO__5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             PE��     �                �             5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             PE��    �                �             5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             PE��     �               
#error aaa5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             PE��    �               #error "aaa5�_�                            ����                                                                                                                                                                                                                                                                                                                                                V       PE�    �                #endif�                #error "aaa"�                 #ifndef __SYSINFO_C__5�_�                       e    ����                                                                                                                                                                                                                                                                                                                                                             PE�     �               �    printf ("system uptime : %ld days, %ld:%02ld:%02ld\n", si.uptime / day, (si.uptime % day) / hour, (si.uptime % hour) / minute, si.uptime % minute); printf ("total RAM : %5.1f MB\n", si.totalram / megabyte);5��