#pragma once
#include "Component.h"

struct TransformMatrix
{
	Vec4 offset;
};

class Transform	: public Component
{
public:
	Transform();
	virtual ~Transform();

	// Todo : �°� Parent/Child ����

private:
	// Todo : World ��ġ ����
};

