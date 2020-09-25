/*
 * fileio.h
 *
 *  Created on: Sep 23, 2020
 *      Author: Tyler Trimble
 */

#ifndef FILEIO_H_
#define FILEIO_H_

#include <string>
#include <vector>
#include "constants.h"

int loadData(const std::string filename, std::vector<process> &myProcesses);

int saveData(const std::string filename, std::vector<process> &myProcesses);

#endif /* FILEIO_H_ */
