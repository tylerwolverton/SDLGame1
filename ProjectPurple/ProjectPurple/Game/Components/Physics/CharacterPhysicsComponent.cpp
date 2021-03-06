#include "CharacterPhysicsComponent.h"
#include "GameActor.h"
#include "TransformComponent.h"
#include "ActorFactory.h"
#include "ServiceLocator.h"

CharacterPhysicsComponent::CharacterPhysicsComponent(ComponentId componentId,
                                                     const std::shared_ptr<TransformComponent>& transformCompPtr, 
                                                     float maxSpeed,
                                                     float mass,
                                                     float restitution,
                                                     const Vector2D<float>& velocity, 
                                                     const Vector2D<float>& acceleration)
    : PhysicsComponent(componentId, transformCompPtr, maxSpeed, mass, restitution, velocity, acceleration)
{
}

CharacterPhysicsComponent::~CharacterPhysicsComponent()
{
}

bool CharacterPhysicsComponent::SignalCollision(ActorId actorId)
{
    bool stopResolvingCollisions = false;
    auto actorPtr = ServiceLocator::GetActorFactory()->GetActor(actorId);
    if (actorPtr == nullptr)
    {
        return stopResolvingCollisions;
    }
    
    return stopResolvingCollisions;
}