/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generateTree.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 11:56:29 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/09/22 19:03:51 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>

const std::string   ASCIITreeGenerator( void )
{
    std::string trees[3] = {
"\n\
  ⠀⠀⠀⠀⠀⠀⠀⠀  ⡠⠖⠒⠢⣄⣀⡀⣀⣀⠀⡠⠔⠒⠒⢤⡀⠀⠀ ⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡴⡇⠀⠀⠀⠁⠠⡋⠀⠀⠙⠦⠀⠀⠀⠀⣧⠤⣀⠀⠀⠀ \n\
⠀⠀⠀⠀⠀⠀⠀⡠⠖⠊⠑⠲⣄⣀⣠⠖⠘⠛⠀⠀⠀⠀⠀⠀⠀⠀⠁⠀⢸⠇⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⣸⣇⡀⠀⠀⠈⠁⠀⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⠋⠲⣄⠀⠀\n\
⠀⠀⠀⠀⣠⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡼⠂⠀\n\
⠀⠀⠀⢀⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠀⠀⢱⠀⠀⠀⠀⠀⠀⠀⠐⠺⡄⠀⠀\n\
⠀⡠⠊⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠠⡀⠀⢀⡼⠀⠀⠀⠀⠀⠀⠀⠀⢀⡇⠀⠀\n\
⢰⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⠈⠉⠁⡹⠀⠀⠀⣄⣀⡠⠟⢘⣯⣀⠀⠀\n\
⠸⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⡷⠺⡍⠒⣿⣀⣠⡀⠀⠀⠀⠀⠀⠈⠀⠈⡷⠀\n\
⠀⢸⠚⠉⠀⠀⠀⠀⠀⠀⠀⠀⢀⣶⠺⡁⠀⠙⠚⠀⠁⡏⢧⣀⡄⠀⠀⠀⠀⠐⠒⣇⠀\n\
⠀⠸⣄⣀⣰⠀⠀⠀⠀⠀⠀⠲⣟⣿⡦⣷⠀⠀⠀⠀⢠⠁⣸⣿⣷⢶⡆⢀⣤⡀⣠⡾⠁\n\
⠀⠀⠀⠀⠱⣀⠀⢀⡱⠄⠤⠜⠋⠻⡄⠀⠀⠀⠀⠀⣸⣴⡿⣏⠀⢀⣭⣁⣀⡽⠁⠀⠀\n\
⠀⠀⠀⠀⠀⠀⠈⠀⠀⠀⠀⠀⠀⠀⠸⠀⠀⠀⠀⠀⣿⡼⠁⠀⠉⠉⠀⠀⠀⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡆⠀⠀⠀⠀⢿⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⣧⠀⠀⠀⠀⠸⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡼⠁⠀⠀⠀⠀⠈⣇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⡴⠒⢋⣁⡀⠀⠀⠀⠀⠀⠘⠢⢄⣀⠀⠀⠀⠀⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠉⠉⠉⠁⠉⠙⠒⠤⣘⣗⠒⠒⠒⠚⠛⠃⠀⠀⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀", 
"\n\
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠠⣤⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⡀⠀⠀⠀⣸⣷⣦⡀⠀⠀⠀⠀⣿⢷⡄⠀⠀⠀⠀⠀⠀⢀⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣿⣧⡀⠀⠀⢹⣷⠈⢿⣆⠀⠀⠀⣿⠈⣿⡄⠀⠀⣀⡴⢶⣿⡟⣷⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⠀⠀⠀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⠀⣿⣇⠀⠀⠈⢻⣆⠘⣿⠀⠀⣀⣽⣧⣸⣿⣴⡞⣉⣰⡞⢻⡇⢸⡇⠀⢀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣷⣶⣶⣷⣄⣿⠛⢷⣶⣿⣸⣿⣿⣤⣄⡀⠀⠉⠻⣿⣶⠞⢉⣽⡿⢿⣿⠛⠛⠋⠁⠀⢸⣇⣸⡿⢾⣿⡛⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⣿⣌⣿⠀⠹⣿⣦⠀⠙⣿⣿⠛⢷⣄⠉⠻⣿⠀⣀⢻⣷⡶⠛⠁⠀⢠⡇⠀⢠⣴⡄⠀⢸⡟⣫⣼⣿⣟⣛⣛⣛⣷⣦⣤⠀⠀⠀⠀⠀⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⠀⠀⢀⣤⣬⣿⣿⡄⠀⣿⡟⠛⠶⠾⣿⡄⠀⠙⠛⠲⢿⣷⣿⠘⣿⠀⠀⠀⠀⣼⠁⠀⢸⡇⢻⣾⡿⠛⠋⠁⠀⠉⠉⠉⣿⠁⣨⠿⠛⢛⣿⠟⠀⠀⠀⠀⠀\n\
⠀⠀⠀⠀⢠⣿⣷⣄⠈⣿⣍⠉⠛⠿⣶⣿⠃⠀⠀⠀⢸⣧⡀⠀⠀⠀⠀⠉⣿⡇⢿⣇⠀⠀⠀⣿⠀⠀⢸⡇⣸⡏⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣡⡤⠾⠋⠁⠀⠀⠀⠀⠀⠀\n\
⠀⠀⠀⢀⣀⣿⡆⢿⡄⠈⠛⠶⠶⠶⠾⠿⣷⣄⠀⠀⠈⣿⣇⠀⠀⠀⠀⠀⣿⡇⠀⢿⣦⡀⠀⣿⠀⠀⠈⣷⣏⡀⠀⠀⠀⠀⠀⢀⣠⣾⠟⠉⠁⠀⢀⣠⣴⠶⢶⣶⣄⠀⠀\n\
⠀⠀⠀⢸⣿⠻⣿⣼⡇⠀⠀⠀⠀⠀⠀⠀⠈⠻⢷⣦⣀⠘⢿⣆⠀⠀⠀⠀⣿⡇⠀⠀⠹⣧⣀⣿⠀⢠⡼⣿⡏⠻⣦⡀⢀⣤⣴⣿⣿⣥⣤⣤⣤⡶⣿⣿⡷⠶⠞⠛⠉⠀⠀\n\
⠀⠀⠀⠈⢿⣄⠈⢻⡇⠀⢀⣤⣶⣶⣦⡤⠀⠀⠀⠈⠛⠻⢿⣿⣷⣄⠀⠀⣿⡇⠀⠀⠀⢻⣿⣿⡾⠋⢠⣾⣷⣄⢸⡏⠉⠉⠀⠀⠀⠀⠀⠉⠻⣷⣄⠉⢻⣦⡄⠀⠀⠀⠀\n\
⠀⠀⢸⡿⣿⣿⠶⣤⣿⣾⡿⣤⣤⠾⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⠻⣷⣄⣿⣿⠀⠀⠀⠈⣿⣿⠀⠀⣸⠏⢹⡏⠛⣿⠀⠀⠀⠀⠀⠀⢀⣀⡴⠟⠉⠛⠻⠿⠇⠀⠀⠀⠀\n\
⠀⠀⢸⣧⠈⢿⣆⠀⠈⢿⣧⠀⠀⠀⠀⠀⠀⢀⣀⣀⣀⠀⠀⠀⠀⠀⠙⢿⣿⣿⡄⠀⠀⠀⢹⣿⣤⠾⢻⡆⠸⣇⠀⠀⣀⣀⣀⣤⠶⠾⣿⡛⢷⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀\n\
⠀⠀⠀⠹⣷⣬⣿⠀⠀⠀⠹⣷⣄⡀⢀⣴⣾⣛⣩⣿⠟⠁⠀⠀⠀⠀⠀⠀⢻⣿⣿⠀⢀⣤⣿⣿⠋⠀⠈⢳⣴⣿⡶⠿⠛⠉⠉⠀⠀⠀⠈⠿⣦⣙⣷⡄⠀⠀⠀⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠙⣿⣤⣀⡀⠀⠀⠙⢿⣮⣉⠉⠉⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⢻⣿⣶⡿⠋⢹⣿⠀⣠⣶⠟⠻⢷⣤⣤⣀⣀⣀⣤⣄⡀⠀⠀⠀⠉⠉⠀⠀⢀⣤⡴⢶⡆⠀\n\
⠀⠀⠀⠀⠀⠀⠀⠈⠙⠛⠛⠿⠷⠾⠿⣿⣦⣄⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⡿⠁⠀⢸⣿⣿⠋⠀⠀⠀⠀⠈⠉⠙⠛⠙⢻⡈⠛⣷⣄⠀⠀⢀⣴⣾⣯⣴⠾⠛⠃⠀\n\
⢀⣀⡀⠀⠀⠀⠀⣀⣤⡶⣦⣄⣀⠀⠀⠀⠉⠻⠿⢿⣿⣿⣿⣿⣿⣶⣦⣤⣀⢸⣿⣇⠀⠀⣾⣿⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢈⣷⣦⣨⣿⠶⢾⣿⣿⠿⠿⣦⣀⡀⠀⠀\n\
⢸⣏⡙⢷⣦⡀⠈⠽⠶⠶⠶⠿⢿⣀⠀⠀⠀⠀⠀⠀⠀⠈⠉⠉⠉⠉⠙⢿⣿⣿⣿⣿⠀⢀⣿⣿⠀⣀⣀⣀⣀⣤⣤⣶⡶⠾⢿⣟⢿⡍⠉⠀⢀⣿⣿⠉⠳⠶⣄⣹⣷⡄⠀\n\
⠀⠙⠷⣶⣾⣿⠀⠀⠀⠀⠀⠀⠀⠙⢿⣦⣤⣤⣀⣀⣀⣠⣤⣤⣤⣤⣀⠀⠙⢿⣿⡟⠀⣼⣿⣿⣿⢿⣿⣿⣟⠛⠛⠉⠀⠀⢈⣿⠀⣿⣄⣀⣿⡏⣼⡇⠀⠀⠀⠉⠉⠀⠀\n\
⠀⠀⠀⢈⣟⠻⢷⣦⣤⣤⣤⣤⣤⣤⡶⠿⠿⠛⠛⠛⠛⠋⠙⠛⠛⠻⢿⣿⣦⣼⣿⣇⣼⣿⠛⠁⠀⠀⠀⠉⠛⠛⢻⣿⣿⠛⠛⠻⣷⣿⠋⠉⠻⣿⣿⣧⣤⣶⡶⠶⣤⣄⡀\n\
⠀⠀⢀⣾⠿⣦⠀⠀⠀⠀⠀⠀⣠⣶⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⠿⣿⣿⣿⣿⡟⠀⠀⠀⠀⠀⠀⠀⠀⢸⡟⢹⣷⠀⠀⠀⠉⠀⠀⠀⠉⠀⠻⣿⡈⠻⣶⣴⠿⠟\n\
⠀⠀⢸⣇⢠⣿⠀⠀⠀⠀⠀⠀⣿⡜⣿⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⠁⠀⠀⠀⠀⠀⠀⠀⠀⢸⣇⣾⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠻⣦⣬⣷⡄⠀\n\
⠀⠀⠈⠻⣾⡋⠀⠀⠀⠀⠀⠀⠘⢿⣿⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠛⠛⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠉⠁⠀\n\
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⣿⣿⡟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢻⣿⣿⣷⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⣿⣿⣿⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢻⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⣿⣿⣿⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⡿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣿⣿⣿⣿⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣿⣿⣿⣿⣿⣿⣦⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣴⣿⡿⠛⠻⣿⣍⠛⠿⣿⣿⣷⣶⣶⣤⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠿⠿⠿⠛⠋⠀⠀⠀⣿⣿⠀⠀⠀⠀⠀⠀⠈⠹⠟⠂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀",
"\n\
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣦⣼⠻⠿⣦⣄⠀⢀⣼⢦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⡾⠃⠀⠀⠀⠉⠙⠚⠙⢿⣿⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⡾⣦⢾⣦⣤⠀⠀⢀⢙⡿⠃⠀⠀⠀⠀⠀⠀⠀⠀⠉⣿⡀⢀⣼⠿⣷⣼⣦⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⡴⠾⠋⠀⠀⠀⠉⣻⡿⠞⠛⢻⣅⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠙⡿⠛⠁⠀⠉⠁⠛⣿⣾⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⢿⡄⠀⠀⠀⠀⠀⠀⠈⠁⠀⠀⠀⠀⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣼⡁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣾⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢈⣹⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⣿⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣀⡶⣿⡉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⢰⣦⣶⣶⣤⣀⠀⠀⠀⠀⢹⣷⣶⣦⣤⡶⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢻⣦⠀⢹⣧⣦⣴⠆⢠⣦⣦⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n\
⠀⠀⠀⢀⣠⣶⡾⠃⠀⠀⠉⠟⠷⢶⣶⣶⡀⠀⣀⣤⣸⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣤⣀⣤⣠⣤⡶⣿⣳⠟⠁⣤⣾⠀⠀⠘⠷⠋⠀⣸⣇⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n\
⠀⢰⣿⠟⠈⠁⠀⠀⠀⠀⠀⠀⠀⠀⠈⠛⠷⡼⠏⠀⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣾⠛⠀⠈⠘⠃⠉⠀⠀⠈⠛⠒⠋⠀⠀⠀⠀⠀⠀⠀⠈⠉⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀\n\
⣰⣿⡿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣴⡄⢀⣴⡇⠀⢀⣠⣾⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢾⡇⢀⣀⡀⠀⠀⠀⠀⠀⠀\n\
⠋⣿⣶⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣠⣤⠀⠀⠀⢿⡽⣿⠿⣧⠷⣼⣧⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠛⠋⢯⡆⠀⠀⠀⠀⠀⠀\n\
⠀⣾⡿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠋⠱⣿⣿⢶⠀⠀⢣⣿⡆⠈⡷⢷⡜⣷⣤⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⠇⠀⠀⠀⠀⠀⠀\n\
⢸⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⣿⣓⣾⠽⣇⠀⢁⡞⠑⠛⢻⡾⣷⣀⡄⣀⣤⣠⠄⠀⣠⣤⠀⠀⠀⠀⠀⠀⣀⡀⣤⣠⣤⡼⣉⣤⣦⡀⢀⠀⠀⠀\n\
⠈⠙⣿⣄⠀⣠⣦⡄⠀⠀⢰⣶⣆⠀⠀⡀⠀⠀⠀⠀⢠⣀⣴⠋⠉⠹⣆⢹⣄⠸⠀⢠⠟⢸⠃⠈⠉⢻⡏⢻⠁⠀⢠⣟⣞⣀⠀⠀⢀⠀⠀⠿⢽⣧⣹⣠⣿⠏⠉⠙⠛⢻⣖⠴⣦\n\
⠀⠀⠛⠿⠺⠻⠻⣧⣶⣴⣾⡿⣿⣴⠟⢛⡷⠂⠀⠀⡀⠀⠁⠀⠀⠀⠈⠛⣛⠓⣆⣞⠀⡏⠀⠀⠀⣸⠃⡏⢀⡠⠼⡟⢫⣧⡖⠊⠉⠀⠀⠀⠀⠀⠉⠙⠁⠀⠀⠀⠀⠀⠀⠀⣿\n\
⠀⠀⠀⠀⠀⠀⠀⠈⠛⢻⣿⣤⣀⠀⢠⡾⠁⠀⠀⠳⣽⠂⢀⠀⣀⡴⣶⣶⠉⢷⠈⠙⠀⣇⠀⠀⣰⢃⡼⠛⠉⣠⡤⠿⠻⣆⠙⢦⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢿\n\
⠀⠀⠀⠀⠀⠀⠀⢀⣀⣠⡏⠉⠻⡷⡞⠀⠀⠀⣠⠞⣠⠴⠞⠋⠁⠀⠈⢿⣇⡤⡶⠛⣷⣭⠀⠀⠀⠀⠁⣻⣋⣀⣀⣀⢀⣈⠳⠸⠷⠤⠆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣸\n\
⠀⠀⠀⠀⢠⣾⣟⠟⠛⠋⠀⠀⠀⠀⠀⠀⠀⠠⢃⣰⠃⠀⠀⠀⠀⠀⠀⠈⠟⠀⠀⠀⢱⢿⡀⠠⡤⢤⣼⠟⠋⠛⠉⠋⠁⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣸⠻\n\
⠀⠀⠀⠀⠈⣿⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⠇⣼⠁⡟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣀⣀⣄⣰⡞⠻⠃⠀\n\
⠀⠀⠀⠀⠀⢻⣧⣤⣀⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣀⣴⠾⠋⠀⠃⠠⡇⠀⠀⣀⡀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣛⣋⡁⠉⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⠉⠙⠉⣿⢂⣄⠀⠀⠀⠀⠀⣿⢀⡀⠀⠀⠀⠀⠀⢴⣤⠶⠷⠛⠉⢳⠀⠀⠀⠀⣰⠿⣤⢦⠟⢻⢻⡟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠉⠻⣻⠟⠀⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⢻⣿⣦⣴⣤⡿⢿⣋⣿⠇⠀⠀⠀⠀⠀⠈⠙⠲⡄⠀⠀⢸⠀⠀⠀⣰⠃⠀⠉⠉⠀⣾⡛⠁⠀⠀⠀⠀⠀⠀⠀⠀⣰⢦⣦⣤⣤⣴⡏⠀⠀⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠀⠉⠀⠁⠀⠈⣯⡀⡀⡀⢀⠀⣠⡄⣼⠶⠾⠃⠀⠀⡞⠀⠀⠀⢹⠀⠀⠀⠀⠀⠈⢷⢦⣤⣄⠀⠀⠀⢠⣤⣴⠟⠀⠀⠉⠀⠈⠀⠀⠀⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠛⠓⠛⠛⠛⠋⠛⠋⠀⠀⠀⠀⠀⡇⠀⠀⠀⢸⡇⠀⠀⠀⠀⠀⠀⠈⠀⠹⠷⣾⡍⠛⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣷⠀⠀⠀⢸⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⡀⠀⠀⢸⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⡇⠀⠀⠸⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⡇⠀⠀⠀⢧⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣰⠏⠀⠀⠀⠀⢈⡻⠆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" };
    
    srand( time( NULL ) );
    int random = ( rand() % 3 );
    return ( trees[random] );
}