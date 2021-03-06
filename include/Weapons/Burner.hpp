/* Burner.hpp

Copyright (c) 2010 - 2011 by Felix Lauer and Simon Schneegans

This program is free software: you can redistribute it and/or modify it
under the terms of the GNU General Public License as published by the Free
Software Foundation, either version 3 of the License, or (at your option)
any later version.

This program is distributed in the hope that it will be useful, but WITHOUT
ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
more details.

You should have received a copy of the GNU General Public License along with
this program.  If not, see <http://www.gnu.org/licenses/>. */

# ifndef BURNER_HPP_INCLUDED
# define BURNER_HPP_INCLUDED

# include "Weapons/Weapon.hpp"

/// Weapon: Burner.
/// A short distance weapon, which burns nearby enemies.

class Burner: public Weapon {
    public:
        /// Ctor which constructs the weapon.
        Burner(Ship* parent):
              Weapon(weapons::wBurner, parent, sf::String("WT-FLAMER")) {};

        /// Spawns some particles.
        void fire() const;

        /// Draws the weapon.
        void draw(float alpha) const;

        /// Returns the maximum distance from which this weapon should be used.
        float maxDistance() const;

        /// Returns the minimum distance from which this weapon should be used.
        float minDistance() const;

        /// Returns the maximum angle from which this weapon should be used.
        float maxAngle()   const;
};

# endif // BURNER_HPP_INCLUDED



