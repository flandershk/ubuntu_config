Vim�UnDo� : Τ�R�O@�T�d���:?;{ͨ�9��T   =                 -   -   -   -   ,    PC    ! _�                             ����                                                                                                                                                                                                                                                                                                                                                             PC�     �                   5�_�                    	        ����                                                                                                                                                                                                                                                                                                                                                             PC�     �      	              4.45�_�                    	       ����                                                                                                                                                                                                                                                                                                                                                             PC�     �      	          -        Synchronization and Critical Sections5�_�                    	       ����                                                                                                                                                                                                                                                                                                                                                             PC�     �      	          	        {5�_�                    	       ����                                                                                                                                                                                                                                                                                                                                                             PC�     �      	          	        }5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             PC�     �      	          	     * */�                C    /* Create an exception-signaling thread exit with RETURN_VALUE.�                ,     * : thread_return_value_ (return_value)�                /     * ThreadExitException (void* return_value)5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             PC�     �                A     Create an exception-signaling thread exit with RETURN_VALUE.5�_�      	                     ����                                                                                                                                                                                                                                                                                                                                                             PC�     �                         */�                B    /* The return value that will be used when exiting the thread.�                &     */* Do some useful things here...�                     * while (1) {�                     * {�                     * void do_some_work ()�                	     * };�                "     * void* thread_return_value_;5�_�      
           	          ����                                                                                                                                                                                                                                                                                                                                                             PC�     �                @     The return value that will be used when exiting the thread.5�_�   	              
   #       ����                                                                                                                                                                                                                                                                                                                                                             PC�     �   "   $                   * ex.DoThreadExit ();5�_�   
                 #       ����                                                                                                                                                                                                                                                                                                                                                             PC�     �   "   $                    //* ex.DoThreadExit ();5�_�                    "       ����                                                                                                                                                                                                                                                                                                                                                             PC�     �   !   #          B        /* Some function indicated that we should exit the thread.5�_�                    "       ����                                                                                                                                                                                                                                                                                                                                                             PC�     �   !   #          ?        Some function indicated that we should exit the thread.5�_�                    #   	    ����                                                                                                                                                                                                                                                                                                                            #   	       '   	          	    PC�     �   "                       * ex.DoThreadExit ();            * }            * return NULL;            * }   
         *5�_�                            ����                                                                                                                                                                                                                                                                                                                            #   	       '   	          	    PC�    �   &   (          	         �   %   '                    }�   $   &                    return NULL;�   #   %                    }�   "   $                    ex.DoThreadExit ();�                }�                    */�                $    /* Do some useful things here...�                     while (1) {�                     {�                     void do_some_work ()�                     };�                      void* thread_return_value_;�                B     //The return value that will be used when exiting the thread.�   
                 void* DoThreadExit ()�   	                  * constructor. */�      
          G    /* Actually exit the thread, using the return value provided in the�      	               �                *     : thread_return_value_ (return_value)�                -     ThreadExitException (void* return_value)�                C     //Create an exception-signaling thread exit with RETURN_VALUE.5�_�                            ����                                                                                                                                                                                                                                                                                                                            #   	       '   	          	    PC�    �         '    5�_�                    (        ����                                                                                                                                                                                                                                                                                                                            $   	       (   	          	    PC.     �   (               �   (            5�_�                    *       ����                                                                                                                                                                                                                                                                                                                            $   	       (   	          	    PC3     �   )   ,   +      {5�_�                    *       ����                                                                                                                                                                                                                                                                                                                            $   	       (   	          	    PC5    �   )   -   ,      {5�_�                    ,       ����                                                                                                                                                                                                                                                                                                                            $   	       (   	          	    PCV    �   +   -   .          pthread_5�_�                    ,   <    ����                                                                                                                                                                                                                                                                                                                            $   	       (   	          	    PCq    �   ,   .   /          �   ,   .   .    5�_�                           ����                                                                                                                                                                                                                                                                                                                            $   	       (   	          	    PC�    �      	   0      
          �      	   /    5�_�                    
        ����                                                                                                                                                                                                                                                                                                                            %   	       )   	          	    PC�    �                          void* DoThreadExit ()�   
                        * constructor. */�   	             M          /* Actually exit the thread, using the return value provided in the5�_�                            ����                                                                                                                                                                                                                                                                                                                            %   	       )   	          	    PC�     �         1       �         0    5�_�                            ����                                                                                                                                                                                                                                                                                                                            )   	       -   	          	    PC�     �         4      {5�_�                           ����                                                                                                                                                                                                                                                                                                                            )   	       -   	          	    PC�    �         4      {5�_�                           ����                                                                                                                                                                                                                                                                                                                            *   	       .   	          	    PC     �         5          while (1) {5�_�                    &       ����                                                                                                                                                                                                                                                                                                                            +   	       /   	          	    PC     �   %   (   6      	    try {5�_�                    *   #    ����                                                                                                                                                                                                                                                                                                                            ,   	       0   	          	    PC    �   )   ,   7      $    catch (ThreadExitException ex) {5�_�                           ����                                                                                                                                                                                                                                                                                                                            -   	       1   	          	    PC1     �         9              �         8    5�_�                            ����                                                                                                                                                                                                                                                                                                                            .   	       2   	          	    PC6    �         9              printf();5�_�      !                       ����                                                                                                                                                                                                                                                                                                                                                             PCn     �         :       �         9    5�_�       "           !          ����                                                                                                                                                                                                                                                                                                                                                             PC     �         ;      &        printf("do thread exit...\n");5�_�   !   #           "          ����                                                                                                                                                                                                                                                                                                                                                             PC     �         ;               ("do thread exit...\n");5�_�   "   $           #          ����                                                                                                                                                                                                                                                                                                                                                             PC�     �         ;      (        cout << ("do thread exit...\n");5�_�   #   %           $      %    ����                                                                                                                                                                                                                                                                                                                                                             PC�     �         ;      '        cout << "do thread exit...\n");5�_�   $   &           %      %    ����                                                                                                                                                                                                                                                                                                                                                             PC�     �         ;      &        cout << "do thread exit...\n";5�_�   %   '           &      -    ����                                                                                                                                                                                                                                                                                                                                                             PC�    �         ;      /        cout << "do thread exit...\n" << endl;;5�_�   &   (           '           ����                                                                                                                                                                                                                                                                                                                                                             PC�    �         ;       should_exit_thread_immediately()5�_�   '   )           (           ����                                                                                                                                                                                                                                                                                                                                                             PC�     �         ;      %void should_exit_thread_immediately()5�_�   (   *           )           ����                                                                                                                                                                                                                                                                                                                                                             PC�    �         ;       should_exit_thread_immediately()5�_�   )   +           *           ����                                                                                                                                                                                                                                                                                                                                                             PC�    �          <          �          ;    5�_�   *   ,           +   0   %    ����                                                                                                                                                                                                                                                                                                                                                             PC�    �   0   2   =      
        //�   0   2   <    5�_�   +   -           ,   ;       ����                                                                                                                                                                                                                                                                                                                                                             PC�   ! �   :   <   =          pthread_join(thread_id);5�_�   ,               -   ;       ����                                                                                                                                                                                                                                                                                                                                                             PC      �   :   <   =          pthread_j           in(thread_id, NULL);5��