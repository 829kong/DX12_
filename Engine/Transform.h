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

	// Todo : 온갖 Parent/Child 관계

private:
	// Todo : World 위치 관련
};

