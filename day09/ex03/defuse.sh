# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    defuse.sh                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/21 22:09:23 by srodrigu          #+#    #+#              #
#    Updated: 2016/07/21 22:09:26 by srodrigu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

 -A '-000001' bomb.txt && stat -f %a -t %X bomb.txt
