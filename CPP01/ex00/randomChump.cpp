/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforouz <arforouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 02:09:33 by arforouz          #+#    #+#             */
/*   Updated: 2025/07/20 02:09:33 by arforouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    randomChump(std::string name)
{
    Zombie zombie(name);
    zombie.announce();
}

/*
- **`Zombie zombie(name);`**
  - This creates a `Zombie` object **on the stack** (temporary object, local to this function).
- **`zombie.announce();`**
  - Since `zombie` is an **object**, not a pointer, you use the dot (`.`) operator to call its method.

---

### ```cpp

- **`Zombie zombie(name);`**
  - This creates a `Zombie` object **on the stack** (temporary object, local to this function).
- **`zombie.announce();`**
  - Since `zombie` is an **object**, not a pointer, you use the dot (`.`) operator to call its method.

---

### ```cpp
Zombie *newZombie(std::string name)
{
    Zombie *zombie = new Zombie(name); // Heap allocation (returns pointer)
    return (zombie);
}

*/