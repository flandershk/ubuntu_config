Vim�UnDo� ��5��j�K�X��تcE�Z��*�a�Źn?��r                                     P,|�    _�                             ����                                                                                                                                                                                                                                                                                                                                                             P,|�     �               5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             P,|�     �         "    5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             P,|�     �          #       5�_�                       
    ����                                                                                                                                                                                                                                                                                                                                                             P,|�    �         $      #include "Iterator.h"5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             P,|�     �                "class Aggregate: public IAggregate5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             P,|�     �                {5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             P,|�     �                public:5�_�      	                     ����                                                                                                                                                                                                                                                                                                                                                             P,|�     �                    enum {SIZE = 3};5�_�      
           	          ����                                                                                                                                                                                                                                                                                                                                                             P,|�    �                    Aggregate()5�_�   	              
          ����                                                                                                                                                                                                                                                                                                                                                             P,|�     �   
                  IIterator* create_iterator()5�_�   
                        ����                                                                                                                                                                                                                                                                                                                                                             P,|�     �                    Object get_item(int index)5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             P,|�     �                    int get_size()5�_�                            ����                                                                                                                                                                                                                                                                                                                                                 V       P,|�     �                private:       Object m_objects[SIZE];   };5�_�                             ����                                                                                                                                                                                                                                                                                                                                                V       P,|�    �                    }�                        return SIZE;�                    {�                    int Aggregate::get_size()�                    }�                	        }�                            return -1;�                	        {�                        else �                	        }�                $            return m_objects[index];�                	        {�                %        if (index < this->get_size())�                    {�                )    Object Aggregate::get_item(int index)�                    }�                "        return new Iterator(this);�                    {�   
             +    IIterator* Aggregate::create_iterator()�   	                 }�      
          	        }�      	                      m_objects[i] = i;�                	        {�                &        for (int i = 0; i < SIZE; i++)�                    {5��