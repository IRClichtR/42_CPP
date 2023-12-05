/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContactClass.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftuernal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:53:17 by ftuernal          #+#    #+#             */
/*   Updated: 2023/12/05 16:53:33 by ftuernal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# define CONTACTCLASS_HPP

# include "define.hpp"

class Contact {

public:

  Contact(void);
  ~Contact(void);

  int               setContact();
  void              getContact() const;
  void              getShortContact(int index) const;
  void              printTrimName(std::string name) const;

private:

  std::string       _FirstName;
  std::string       _LastName;
  std::string       _NickName;
  std::string       _DarkestSecret;
  unsigned long     _PhoneNb;

  int               _setFirstName();
  int               _setLastName();
  int               _setNickName();
  int               _setPhoneNb();
  int               _setDarkestSecret();
  
};

#endif // !CONTACTCLASS_HPP
