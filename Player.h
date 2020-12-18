/*
 * Player.h
 *
 *  Created on: 9 ����. 2020 �.
 *      Author: ����
 */

#ifndef PLAYER_H_
#define PLAYER_H_

#include <cmath>
#include <memory>
#include "Map.h"

static constexpr double Pi = acos(-1.);
class Player
{
public:
	static constexpr double DEFAULT_STEP = 0.05;
	static constexpr double DEFAULT_TURN = Pi / 90;
	static constexpr double DEFAULT_FOV = Pi / 3;
protected:
	std::shared_ptr<Map> _map;
	double _x, _y, _dir;
public:
	Player(std::shared_ptr<Map> & map);

	void reset();//����������� � ��������� �������

	double dir() const { return _dir; }
	double x() const { return _x; }
	double y() const {	return _y; }

	void walk_forward(double dist = DEFAULT_STEP);
	void walk_backward(double dist = DEFAULT_STEP);
	void shift_right(double dist = DEFAULT_STEP);
	void shift_left(double dist = DEFAULT_STEP);
	void turn_right(double angle = DEFAULT_TURN);
	void turn_left(double anglet = DEFAULT_TURN);
};

#endif /* PLAYER_H_ */
