Vim�UnDo� �8t/M��Ų�?(6K�5T-�xZ�hH����   3                 5       5   5   5    PF��    _�                             ����                                                                                                                                                                                                                                                                                                                                                             PE��     �                   5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             PE��    �          A      fndef SERVER_H5�_�                    	       ����                                                                                                                                                                                                                                                                                                                                                             PE�     �   
              * */�      
          &/* If nonzero, print verbose messages.�   	              * extern int verbose;5�_�                    	       ����                                                                                                                                                                                                                                                                                                                                                             PE�     �      
          $ If nonzero, print verbose messages.5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             PE�     �                & * extern void* xmalloc (size_t size);5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             PE�     �                ( //* extern void* xmalloc (size_t size);5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             PE�     �                >/* Like malloc, except aborts the program if allocation fails.5�_�      	                     ����                                                                                                                                                                                                                                                                                                                                                             PE�     �                ;Like malloc, except aborts the program if allocation fails.5�_�      
           	          ����                                                                                                                                                                                                                                                                                                                                                             PE�     �         A      & * extern void* xmalloc (size_t size);5�_�   	              
          ����                                                                                                                                                                                                                                                                                                                                                             PE�     �                A */* Like realloc, except aborts the program if allocation fails.5�_�   
                        ����                                                                                                                                                                                                                                                                                                                                                             PE�     �                C //*[> Like realloc, except aborts the program if allocation fails.5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             PE�     �         A      A */* Like realloc, except aborts the program if allocation fails.5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             PE�     �         A      @ /* Like realloc, except aborts the program if allocation fails.5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             PE�     �         A      ? * Like realloc, except aborts the program if allocation fails.5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             PE�     �                >  Like realloc, except aborts the program if allocation fails.5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             PE�      �                
      * */�                C     /* Like strdup, except aborts the program if allocation fails.�                -      * extern char* xstrdup (const char* s);5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             PE�!     �                A      Like strdup, except aborts the program if allocation fails.5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             PE�%     �                */5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             PE�&     �                */5�_�                    "        ����                                                                                                                                                                                                                                                                                                                                                             PE�2     �   "   $          )     */* A name describing the module. */�       "          D    /* The shared library handle corresponding to the loaded module.�   !   #               * void* handle;5�_�                    !        ����                                                                                                                                                                                                                                                                                                                                                             PE�3     �       "          B     The shared library handle corresponding to the loaded module.5�_�                    #        ����                                                                                                                                                                                                                                                                                                                                                             PE�5     �   "   $          %    /* A name describing the module. 5�_�                    #        ����                                                                                                                                                                                                                                                                                                                                                             PE�6     �   "   $          "    A name describing the module. 5�_�                    %        ����                                                                                                                                                                                                                                                                                                                                                             PE�7     �   '   )          	     * */�   $   &          D    /* The function that generates the HTML results for this module.�   &   (          	     * };�   %   '          (     * void (* generate_function) (int);5�_�                    %        ����                                                                                                                                                                                                                                                                                                                                                             PE�8     �   $   &          B     The function that generates the HTML results for this module.5�_�                    )        ����                                                                                                                                                                                                                                                                                                                                                             PE�<     �   (   )              */5�_�                    )       ����                                                                                                                                                                                                                                                                                                                                                             PE�=     �   (   )              11.25�_�                    1       ����                                                                                                                                                                                                                                                                                                                                                             PE�D     �   3   4          
        */�   0   2          >    /* Close a server module and deallocate the MODULE object.�   2   4          '     */*** Symbols defined in server.c.�   1   3          ?     * extern void module_close (struct server_module* module);5�_�                    1       ����                                                                                                                                                                                                                                                                                                                                                             PE�E     �   0   2          <     Close a server module and deallocate the MODULE object.5�_�                    8       ����                                                                                                                                                                                                                                                                                                                                                             PE�M     �   7   8          
    11.2.15�_�                     8       ����                                                                                                                                                                                                                                                                                                                                                             PE�N     �   7   8              /* SERVER_H */5�_�      !               8       ����                                                                                                                                                                                                                                                                                                                                                             PE�N     �   7   8              Common Functions5�_�       "           !   8       ����                                                                                                                                                                                                                                                                                                                                                             PE�N     �   7   8          P    (see Listing 11.2) contains functions of general utility that are used throu5�_�   !   #           "   8        ����                                                                                                                                                                                                                                                                                                                                                             PE�O     �   7   8           5�_�   "   $           #   	        ����                                                                                                                                                                                                                                                                                                                                                             PE�Q    �   5   7          I    extern void server_run (struct in_addr local_address, uint16_t port);�   4   6          3    /* Run the server on LOCAL_ADDRESS and PORT. */�   3   5          )    ************************************/�   2   4          %    /*** Symbols defined in server.c.�   1   3          =     extern void module_close (struct server_module* module);�   0   2          >     //Close a server module and deallocate the MODULE object.�   /   1          G    extern struct server_module* module_open (const char* module_path);�   .   0          K     * server_module structure representing it. Otherwise, returns NULL. */�   -   /          J     * server module exists with this path, loads the module and returns a�   ,   .          F    /* Attempt to load a server module with the name MODULE_PATH. If a�   +   -          	     * */�   *   ,               * Implementation 223�   )   +               * extern char* module_dir;�   (   *          3    /* The directory from which modules are loaded.�   '   )               �   &   (               };�   %   '          &     void (* generate_function) (int);�   $   &          D     //The function that generates the HTML results for this module.�   !   #               void* handle;�       "          D     //The shared library handle corresponding to the loaded module.�                      �                +      extern char* xstrdup (const char* s);�                C      //Like strdup, except aborts the program if allocation fails.�                4     extern void* xrealloc (void* ptr, size_t size);�                @  //Like realloc, except aborts the program if allocation fails.�                %  extern void* xmalloc (size_t size);�   
              �   	              extern int verbose;�      
          & //If nonzero, print verbose messages.5�_�   #   %           $           ����                                                                                                                                                                                                                                                                                                                                                             PE�b     �         7      !/*** Symbols defined in common.c.   ( * ************************************/5�_�   $   &           %          ����                                                                                                                                                                                                                                                                                                                                                             PE�g    �         6    5�_�   %   '           &           ����                                                                                                                                                                                                                                                                                                                                                             PE�u    �   
              5�_�   &   (           '           ����                                                                                                                                                                                                                                                                                                                                                             PE�y     �                /* The name of this program. */5�_�   '   )           (           ����                                                                                                                                                                                                                                                                                                                                                             PE�y    �                The name of this program. 5�_�   (   *           )          ����                                                                                                                                                                                                                                                                                                                                                             PE��   
 �         6    5�_�   )   +           *           ����                                                                                                                                                                                                                                                                                                                                                             PE��    �         7       /*** Symbols defined in module.c   * * **************************************/5�_�   *   ,           +   (        ����                                                                                                                                                                                                                                                                                                                                                             PE��     �   *   ,           * */�   '   )          //* The directory from which modules are loaded.�   )   +           * Implementation 223�   (   *           * extern char* module_dir;5�_�   +   -           ,   (        ����                                                                                                                                                                                                                                                                                                                                                             PE��     �   '   )          - The directory from which modules are loaded.5�_�   ,   /           -   *       ����                                                                                                                                                                                                                                                                                                                                                             PE��    �   )   *           Implementation 2235�_�   -   0   .       /   0        ����                                                                                                                                                                                                                                                                                                                                                             PE�    �   0   2   5    5�_�   /   1           0   2        ����                                                                                                                                                                                                                                                                                                                                                             PE�     �   1   3   6      !/*** Symbols defined in server.c.   & ************************************/5�_�   0   2           1   '        ����                                                                                                                                                                                                                                                                                                                                                             PE�      �   &   '           5�_�   1   3           2   )        ����                                                                                                                                                                                                                                                                                                                                                             PE�!     �   (   )           5�_�   2   4           3   '        ����                                                                                                                                                                                                                                                                                                                                                             PE�#    �   '   )           extern char* module_dir;�   &   (          / //The directory from which modules are loaded.5�_�   3   5           4           ����                                                                                                                                                                                                                                                                                                                                                             PF��    �                 5�_�   4               5          ����                                                                                                                                                                                                                                                                                                                                                             PF��    �          2      struct server_module {5�_�   -           /   .   4        ����                                                                                                                                                                                                                                                                                                                                                             PE�     �   3   6        5��