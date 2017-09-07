#pragma once
#include "GameActor.h"
#include "BaseLogicComponent.h"

class Command
{
public:
	virtual ~Command() {}
	virtual void Execute(GameActor& actor) = 0;
};

class MoveUp : public Command
{
public:
	virtual ~MoveUp() {}
	virtual void Execute(GameActor& actor)
	{
		StrongActorComponentPtr behaviorComponent = actor.GetComponentByName(EComponentNames::BaseLogicComponentEnum);

		if (behaviorComponent != nullptr)
		{
			std::dynamic_pointer_cast<BaseLogicComponent>(behaviorComponent)->MoveUp();
		}
	};
};

class MoveDown : public Command
{
public:
	virtual ~MoveDown() {}
	virtual void Execute(GameActor& actor)
	{
		StrongActorComponentPtr behaviorComponent = actor.GetComponentByName(EComponentNames::BaseLogicComponentEnum);

		if (behaviorComponent != nullptr)
		{
			std::dynamic_pointer_cast<BaseLogicComponent>(behaviorComponent)->MoveDown();
		}
	};
};

class MoveRight : public Command
{
public:
	virtual ~MoveRight() {}
	virtual void Execute(GameActor& actor)
	{
		StrongActorComponentPtr behaviorComponent = actor.GetComponentByName(EComponentNames::BaseLogicComponentEnum);

		if (behaviorComponent != nullptr)
		{
			std::dynamic_pointer_cast<BaseLogicComponent>(behaviorComponent)->MoveRight();
		}
	};
};

class MoveLeft : public Command
{
public:
	virtual ~MoveLeft() {}
	virtual void Execute(GameActor& actor)
	{
		StrongActorComponentPtr behaviorComponent = actor.GetComponentByName(EComponentNames::BaseLogicComponentEnum);

		if (behaviorComponent != nullptr)
		{
			std::dynamic_pointer_cast<BaseLogicComponent>(behaviorComponent)->MoveLeft();
		}
	};
};