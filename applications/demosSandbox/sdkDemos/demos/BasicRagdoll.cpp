/* Copyright (c) <2003-2016> <Newton Game Dynamics>
* 
* This software is provided 'as-is', without any express or implied
* warranty. In no event will the authors be held liable for any damages
* arising from the use of this software.
* 
* Permission is granted to anyone to use this software for any purpose,
* including commercial applications, and to alter it and redistribute it
* freely
*/

#include "toolbox_stdafx.h"
#include "SkyBox.h"
#include "DemoMesh.h"
#include "DemoCamera.h"
#include "PhysicsUtils.h"
#include "TargaToOpenGl.h"
#include "DemoEntityManager.h"
#include "DebugDisplay.h"
#include "HeightFieldPrimitive.h"

/*
struct dPasiveRagDollDefinition
{
	char m_boneName[32];
	char m_shapeType[32];

	dFloat m_shapePitch;
	dFloat m_shapeYaw;
	dFloat m_shapeRoll;

	dFloat m_shape_x;
	dFloat m_shape_y;
	dFloat m_shape_z;

	dFloat m_radio;
	dFloat m_height;
	dFloat m_mass;

	dFloat m_minTwistAngle;
	dFloat m_maxTwistAngle;
	dFloat m_coneAngle;

	dFloat m_framePitch;
	dFloat m_frameYaw;
	dFloat m_frameRoll;

	dFloat m_parentRollOffset;

	dFloat m_frictionTorque;
};

static dPasiveRagDollDefinition skeletonRagDoll[] =
{
	{ "mixamorig:Hips", "capsule", 0.0f, 90.0f, 90.0f, 0.0f, 0.0f, 0.0f, 0.13f, 0.14f, 30.0f, 0.0f, -0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f },

	{ "mixamorig:LeftUpLeg", "capsule", 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.05f, 0.34f, 14.0f, -45.0f, 45.0f, 120.0f, 0.0f, -90.0f, -0.0f, -30.0f, 100.0f },
//	{ "Bip01 L Calf", "capsule", 0.0f, 90.0f, 0.0f, 0.0f, 0.0f, 0.19f, 0.05f, 0.34f, 10.0f, -140.0f, 10.0f, 0.0f, 90.0f, 0.0f, 90.0f, 0.0f, 50.0f },
//	{ "Bip01 L Foot", "capsule", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 3.0f, 0.0f, 0.0f, 45.0f, 0.0f, -90.0f, -0.0f, 0.0f, 50.0f },

//	{ "mixamorig:RightUpLeg", "capsule", 0.0f, 90.0f, 0.0f, 0.0f, 0.0f, 0.19f, 0.05f, 0.34f, 14.0f, -45.0f, 45.0f, 120.0f, 0.0f, -90.0f, -0.0f, 30.0f, 100.0f },
//	{ "Bip01_R_Calf", "capsule", 0.0f, 90.0f, 0.0f, 0.0f, 0.0f, 0.19f, 0.05f, 0.34f, 10.0f, -140.0f, 10.0f, 0.0f, 90.0f, 0.0f, 90.0f, 0.0f, 50.0f },
//	{ "Bip01_R_Foot", "convexhull", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 3.0f, 0.0f, 0.0f, 45.0f, 0.0f, -90.0f, -0.0f, 0.0f, 50.0f },
//
//	{ "Bip01_Spine", "capsule", 0.0f, 0.0f, -90.0f, 0.0f, 0.0f, 0.06f, 0.07f, 0.14f, 20.0f, 30.0f, -30.0f, 30.0f, 0.0f, -90.0f, 0.0f, 0.0f, 200.0f },
//	{ "Bip01_Spine1", "capsule", 0.0f, 0.0f, -90.0f, 0.0f, 0.0f, 0.06f, 0.07f, 0.12f, 20.0f, 30.0f, -30.0f, 30.0f, 0.0f, -90.0f, 0.0f, 0.0f, 150.0f },
//	{ "Bip01_Spine2", "capsule", 0.0f, 0.0f, -90.0f, 0.0f, 0.0f, 0.06f, 0.07f, 0.08f, 20.0f, 30.0f, -30.0f, 30.0f, 0.0f, -90.0f, 0.0f, 0.0f, 100.0f },
//
//	{ "Bip01_Neck", "capsule", 0.0f, 90.0f, 0.0f, 0.0f, 0.0f, 0.05f, 0.03f, 0.04f, 5.0f, 30.0f, -30.0f, 30.0f, 0.0f, -90.0f, 0.0f, 0.0f, 100.0f },
//	{ "Bip01_Head", "sphere", 0.0f, 90.0f, 0.0f, 0.0f, 0.0f, 0.09f, 0.09f, 0.0f, 5.0f, 30.0f, -60.0f, 60.0f, 0.0f, -90.0f, 0.0f, 0.0f, 100.0f },
//
//	{ "Bip01_L_UpperArm", "capsule", 0.0f, 90.0f, 0.0f, 0.0f, 0.0f, 0.12f, 0.03f, 0.23f, 10.0f, 80.0f, 30.0f, 120.0f, 0.0f, -90.0f, 0.0f, 30.0f, 100.0f },
//	{ "Bip01_L_Forearm", "capsule", 0.0f, 90.0f, 0.0f, 0.0f, 0.0f, 0.12f, 0.03f, 0.23f, 7.0f, -150.0f, 0.0f, 0.0f, 0.0f, 0.0f, 90.0f, 0.0f, 50.0f },
//	{ "Bip01_L_Hand", "convexhull", 0.0f, 00.0f, 0.0f, 0.0f, 0.0f, 0.00f, 0.00f, 0.00f, 2.0f, 0.0f, -45.0f, 45.0f, 0.0f, 0.0f, 90.0f, 0.0f, 10.0f },
//
//	{ "Bip01_R_UpperArm", "capsule", 0.0f, 90.0f, 0.0f, 0.0f, 0.0f, 0.12f, 0.03f, 0.23f, 10.0f, 80.0f, 30.0f, 120.0f, 0.0f, -90.0f, 0.0f, -30.0f, 100.0f },
//	{ "Bip01_R_Forearm", "capsule", 0.0f, 90.0f, 0.0f, 0.0f, 0.0f, 0.12f, 0.03f, 0.23f, 7.0f, 0.0f, 150.0f, 0.0f, 0.0f, 0.0f, -90.0f, 0.0f, 50.0f },
//	{ "Bip01_R_Hand", "convexhull", 0.0f, 00.0f, 0.0f, 0.0f, 0.0f, 0.00f, 0.00f, 0.00f, 2.0f, 0.0f, -45.0f, 45.0f, 0.0f, 0.0f, -90.0f, 0.0f, 10.0f },
};
*/

struct dPasiveRagDollDefinition
{
	struct dPasiveRagDollJointLimitx
	{
		dFloat m_minTwistAngle;
		dFloat m_maxTwistAngle;
		dFloat m_coneAngle;
	};

	struct dPasiveRagDollFrameMatrix
	{
		dFloat m_pitch;
		dFloat m_yaw;
		dFloat m_roll;
	};

	char m_boneName[32];
	char m_shapeType[32];
	dFloat m_mass;
	dFloat m_radius;
	dFloat m_friction;
	dPasiveRagDollJointLimitx m_jointLimits;
	dPasiveRagDollFrameMatrix m_frameBasics;
};

static dPasiveRagDollDefinition skeletonRagDoll[] =
{
	{ "mixamorig:Hips", "rootCapsule", 30.0f, 0.1f},

	{ "mixamorig:LeftUpLeg", "capsule", 20.0f, 0.07f, 200.0f, {-45.0f, 45.0f, 120.0f}, {0.0f, 0.0f, 180.0f}},
	{ "mixamorig:LeftLeg", "capsule", 15.0f, 0.06f, 100.0f, {-140.0f, 10.0f, 0.0f}, {0.0f, 90.0f, 90.0f}},

	{ "mixamorig:RightUpLeg", "capsule", 20.0f, 0.07f, 200.0f, {-45.0f, 45.0f, 120.0f}, {0.0f, 0.0f, 180.0f}},
	{ "mixamorig:RightLeg", "capsule", 15.0f, 0.06f, 100.0f, {-140.0f, 10.0f, 0.0f}, {0.0f, 90.0f, 90.0f}},

};


class CrashDummyManager: public dCustomTransformManager
{
	public: 
	CrashDummyManager (DemoEntityManager* const scene)
		:dCustomTransformManager (scene->GetNewton())
	{
		// create a material for early collision culling
		m_material = NewtonMaterialCreateGroupID(scene->GetNewton());
		NewtonMaterialSetCallbackUserData (scene->GetNewton(), m_material, m_material, this);
		NewtonMaterialSetCollisionCallback (scene->GetNewton(), m_material, m_material, OnBoneAABBOverlap, NULL);
	}

	virtual void OnDebug(dCustomJoint::dDebugDisplay* const debugContext)
	{
	}

	virtual void OnPreUpdate (dCustomTransformController* const controller, dFloat timestep, int threadIndex) const
	{
	}

//	static int OnBoneAABBOverlap (const NewtonMaterial* const material, const NewtonBody* const body0, const NewtonBody* const body1, int threadIndex)
	static int OnBoneAABBOverlap(const NewtonJoint* const contactJoint, dFloat timestep, int threadIndex)
	{
		const NewtonBody* const body0 = NewtonJointGetBody0(contactJoint);
		const NewtonBody* const body1 = NewtonJointGetBody1(contactJoint);
		const NewtonCollision* const collision0 = NewtonBodyGetCollision(body0);
		const NewtonCollision* const collision1 = NewtonBodyGetCollision(body1);
		const dCustomTransformController::dSkeletonBone* const bone0 = (dCustomTransformController::dSkeletonBone*)NewtonCollisionGetUserData (collision0);
		const dCustomTransformController::dSkeletonBone* const bone1 = (dCustomTransformController::dSkeletonBone*)NewtonCollisionGetUserData (collision1);

//		dAssert(0);
		dAssert (bone0);
		dAssert (bone1);
//		if (bone0->m_controller && bone1->m_controller) {
//			return bone0->m_controller->SelfCollisionTest (bone0, bone1) ? 1 : 0;
//		}
		return 1;
	}

	void GetDimentions(DemoEntity* const bodyPart, dVector& origin, dVector& size) const
	{	
		DemoMesh* const mesh = (DemoMesh*)bodyPart->GetMesh();
		dAssert (mesh->IsType(DemoMesh::GetRttiType()));

		dFloat* const array = mesh->m_vertex;
		dVector pmin( 1.0e20f,  1.0e20f,  1.0e20f, 0.0f);
		dVector pmax(-1.0e20f, -1.0e20f, -1.0e20f, 0.0f);

		for (int i = 0; i < mesh->m_vertexCount; i ++) {
			dFloat x = array[i * 3 + 0];
			dFloat y = array[i * 3 + 1];
			dFloat z = array[i * 3 + 2];

			pmin.m_x = x < pmin.m_x ? x : pmin.m_x;
			pmin.m_y = y < pmin.m_y ? y : pmin.m_y;
			pmin.m_z = z < pmin.m_z ? z : pmin.m_z;
									  
			pmax.m_x = x > pmax.m_x ? x : pmax.m_x;
			pmax.m_y = y > pmax.m_y ? y : pmax.m_y;
			pmax.m_z = z > pmax.m_z ? z : pmax.m_z;
		}

		size = (pmax - pmin).Scale (0.5f);
		origin = (pmax + pmin).Scale (0.5f);
		origin.m_w = 1.0f;
	}


	NewtonCollision* MakeSphere(DemoEntity* const bodyPart, const dPasiveRagDollDefinition& definition) const
	{
		dAssert (0);
		return NULL;
/*
		dVector size(0.0f);
		dVector origin(0.0f);
		dMatrix matrix (dGetIdentityMatrix());

		matrix.m_posit.m_x = definition.m_shape_x;
		matrix.m_posit.m_y = definition.m_shape_y;
		matrix.m_posit.m_z = definition.m_shape_z;
		return NewtonCreateSphere(GetWorld(), definition.m_radio, 0, &matrix[0][0]);
*/
	}

	NewtonCollision* MakeBox(DemoEntity* const bodyPart) const
	{
		dAssert (0);
//		dVector size(0.0f);
//		dVector origin(0.0f);
//		dMatrix matrix (GetIdentityMatrix());
//		GetDimentions(bone, matrix.m_posit, size);
//		return NewtonCreateBox (nWorld, 2.0f * size.m_x, 2.0f * size.m_y, 2.0f * size.m_z, 0, &matrix[0][0]);
		return NULL;
	}

	NewtonCollision* MakeConvexHull(DemoEntity* const bodyPart) const
	{
		dFloat points[1024 * 16][3];

		DemoMesh* const mesh = (DemoMesh*)bodyPart->GetMesh();
		dAssert (mesh->IsType(DemoMesh::GetRttiType()));
		dAssert (mesh->m_vertexCount && (mesh->m_vertexCount < int (sizeof (points)/ sizeof (points[0]))));

		// go over the vertex array and find and collect all vertices's weighted by this bone.
		dFloat* const array = mesh->m_vertex;
		for (int i = 0; i < mesh->m_vertexCount; i ++) {
			points[i][0] = array[i * 3 + 0];
			points[i][1] = array[i * 3 + 1];
			points[i][2] = array[i * 3 + 2];
		}

		return NewtonCreateConvexHull (GetWorld(), mesh->m_vertexCount, &points[0][0], 3 * sizeof (dFloat), 1.0e-3f, 0, NULL);
	}

	NewtonCollision* MakeRootCapsule(DemoEntity* const bodyPart, const dPasiveRagDollDefinition& definition) const
	{
		DemoEntity* spine = NULL;
		DemoEntity* leftLeg = NULL;
		DemoEntity* rightLeg = NULL;
		for (DemoEntity* ptr = bodyPart->GetChild(); ptr; ptr = ptr->GetSibling()) {
			const dString& name = ptr->GetName();
			if (name == "mixamorig:LeftUpLeg") {
				leftLeg = ptr;
			} else if (name == "mixamorig:RightUpLeg") {
				rightLeg = ptr;
			} else if (name == "mixamorig:Spine") {
				spine = ptr;
			}
		}

		dAssert (spine);
		dAssert (leftLeg);
		dAssert (rightLeg);

		//dVector hipRadius (spine->GetCurrentMatrix().m_posit);
		dVector hipHeigh (rightLeg->GetCurrentMatrix().m_posit - leftLeg->GetCurrentMatrix().m_posit);

		dFloat height = dSqrt (hipHeigh.DotProduct3(hipHeigh));
		//dFloat radio = dSqrt (hipRadius.DotProduct3(hipRadius));
		dFloat radio = definition.m_radius;

		dMatrix matrix (dGrammSchmidt(hipHeigh.Normalize()));
		return NewtonCreateCapsule (GetWorld(), radio, radio, height, 0, &matrix[0][0]);
	}

	NewtonCollision* MakeCapsule(DemoEntity* const bodyPart, const dPasiveRagDollDefinition& definition) const
	{
		const DemoEntity* const child = bodyPart->GetChild();

		dVector capsuleLenth (child->GetCurrentMatrix().m_posit);

		dFloat radio = definition.m_radius;
		dFloat height = dSqrt (capsuleLenth.DotProduct3(capsuleLenth));

		dMatrix matrix (dGrammSchmidt(capsuleLenth.Normalize()));
		matrix.m_posit = matrix.m_front.Scale (height * 0.5f);
		matrix.m_posit.m_w = 1.0f;
		return NewtonCreateCapsule(GetWorld(), radio, radio, height, 0, &matrix[0][0]);
	}
	
	NewtonBody* CreateRagDollBodyPart (DemoEntity* const bodyPart, const dPasiveRagDollDefinition& definition) 
	{
		NewtonCollision* shape = NULL;
		if (!strcmp (definition.m_shapeType, "sphere")) {
			shape = MakeSphere (bodyPart, definition);
		} else if (!strcmp (definition.m_shapeType, "capsule")) {
			shape = MakeCapsule(bodyPart, definition);
		} else if (!strcmp (definition.m_shapeType, "box")) {
			shape = MakeBox (bodyPart);
		} else if (!strcmp(definition.m_shapeType, "rootCapsule")) {
			shape = MakeRootCapsule(bodyPart, definition);
		} else {
			shape = MakeConvexHull(bodyPart);
		}

		// calculate the bone matrix
		dMatrix matrix (bodyPart->CalculateGlobalMatrix());

		NewtonWorld* const world = GetWorld();

		// create the rigid body that will make this bone
		NewtonBody* const bone = NewtonCreateDynamicBody (world, shape, &matrix[0][0]);

		// calculate the moment of inertia and the relative center of mass of the solid
		NewtonBodySetMassProperties (bone, definition.m_mass, shape);

		// save the user data with the bone body (usually the visual geometry)
		NewtonBodySetUserData(bone, bodyPart);

		// assign the material for early collision culling
		NewtonBodySetMaterialGroupID (bone, m_material);

		// set the bod part force and torque call back to the gravity force, skip the transform callback
		NewtonBodySetForceAndTorqueCallback (bone, PhysicsApplyGravityForce);

		// destroy the collision helper shape 
		NewtonDestroyCollision (shape);
		return bone;
	}

	void ConnectBodyParts (NewtonBody* const bone, NewtonBody* const parent, const dPasiveRagDollDefinition& definition) const
	{
		dMatrix matrix;
		NewtonBodyGetMatrix(bone, &matrix[0][0]);
	
//		dMatrix pinAndPivotInGlobalSpace (dGetIdentityMatrix());
//		pinAndPivotInGlobalSpace.m_front = dVector (0.0f, 0.0f, -1.0f, 0.0);
//		pinAndPivotInGlobalSpace.m_up = dVector (-1.0f, 0.0f, 0.0f, 0.0);
//		pinAndPivotInGlobalSpace.m_right = pinAndPivotInGlobalSpace.m_front.CrossProduct(pinAndPivotInGlobalSpace.m_up);
//dVector xxx0;
//dVector xxx1;
//pinAndPivotInGlobalSpace.GetEulerAngles(xxx0, xxx1);

		dPasiveRagDollDefinition::dPasiveRagDollFrameMatrix frameAngle (definition.m_frameBasics);
		dMatrix pinAndPivotInGlobalSpace (dPitchMatrix(frameAngle.m_pitch * dDegreeToRad) * dYawMatrix(frameAngle.m_yaw * dDegreeToRad) * dRollMatrix(frameAngle.m_roll * dDegreeToRad));
		pinAndPivotInGlobalSpace = pinAndPivotInGlobalSpace * matrix;

//		dMatrix parentRollMatrix (dRollMatrix (definition.m_parentRollOffset * dDegreeToRad) * pinAndPivotInGlobalSpace);
		dMatrix parentRollMatrix (dGetIdentityMatrix () * pinAndPivotInGlobalSpace);

		dPasiveRagDollDefinition::dPasiveRagDollJointLimitx jointLimits (definition.m_jointLimits);
		dCustomBallAndSocket* const joint = new dCustomBallAndSocket(pinAndPivotInGlobalSpace, parentRollMatrix, bone, parent);
		joint->EnableCone(true);
		joint->SetConeFriction(definition.m_friction);
		joint->SetConeLimits(jointLimits.m_coneAngle * dDegreeToRad);

		joint->EnableTwist(true);
		joint->SetTwistFriction(definition.m_friction);
		joint->SetTwistLimits(jointLimits.m_minTwistAngle * dDegreeToRad, jointLimits.m_maxTwistAngle * dDegreeToRad);
	}

	dCustomJoint* FindJoint(NewtonBody* const child, NewtonBody* const parent)
	{
		for (NewtonJoint* joint = NewtonBodyGetFirstJoint(child); joint; joint = NewtonBodyGetNextJoint(child, joint)) {
			dCustomJoint* const cJoint = (dCustomJoint*) NewtonJointGetUserData(joint);
			if (((child == cJoint->GetBody0()) && (parent == cJoint->GetBody1())) ||
				((child == cJoint->GetBody1()) && (parent == cJoint->GetBody0()))) {
				return cJoint;
			}
		}
		dAssert (0);
		return NULL;
	}

	virtual void OnUpdateTransform(const dCustomTransformController::dSkeletonBone* const bone, const dMatrix& localMatrix) const
	{
		NewtonBody* const body = bone->GetBody();
		DemoEntity* const ent = (DemoEntity*)NewtonBodyGetUserData(body);
		DemoEntityManager* const scene = (DemoEntityManager*)NewtonWorldGetUserData(NewtonBodyGetWorld(body));

		dQuaternion rot(localMatrix);
		ent->SetMatrix(*scene, rot, localMatrix.m_posit);
	}

	dCustomTransformController* CreateRagDoll(const dMatrix& location, const DemoEntity* const model, dPasiveRagDollDefinition* const definition, int defintionCount)
	{

		NewtonWorld* const world = GetWorld();
		DemoEntityManager* const scene = (DemoEntityManager*)NewtonWorldGetUserData(world);

		// make a clone of the mesh 
		DemoEntity* const ragDollEntity = (DemoEntity*)model->CreateClone();
		scene->Append(ragDollEntity);

		// add the root bone
		DemoEntity* const rootEntity = (DemoEntity*)ragDollEntity->Find(definition[0].m_boneName);
		NewtonBody* const rootBone = CreateRagDollBodyPart(rootEntity, definition[0]);

		// build the rag doll with rigid bodies connected by joints
		dCustomTransformController* const controller = CreateController(rootBone, dGetIdentityMatrix());

		controller->SetCalculateLocalTransforms(true);

		//dCustomTransformController::dSkeletonBone* const bone0 = controller->AddRoot(rootBone, dGetIdentityMatrix());
		// save the controller as the collision user data, for collision culling
		NewtonCollisionSetUserData(NewtonBodyGetCollision(rootBone), controller);

		int stackIndex = 0;
		DemoEntity* childEntities[32];
		dCustomTransformController::dSkeletonBone* parentBones[32];
		for (DemoEntity* child = rootEntity->GetChild(); child; child = child->GetSibling()) {
			parentBones[stackIndex] = controller;
			childEntities[stackIndex] = child;
			stackIndex++;
		}

		// walk model hierarchic adding all children designed as rigid body bones. 
		while (stackIndex) {
			stackIndex--;
			DemoEntity* const entity = childEntities[stackIndex];
			dCustomTransformController::dSkeletonBone* parentBone = parentBones[stackIndex];

			const char* const name = entity->GetName().GetStr();
			for (int i = 0; i < defintionCount; i++) {
				if (!strcmp(definition[i].m_boneName, name)) {
					NewtonBody* const bone = CreateRagDollBodyPart(entity, definition[i]);

					// connect this body part to its parent with a ragdoll joint
					NewtonBody* const parentBody = parentBone->GetBody();
					ConnectBodyParts(bone, parentBody, definition[i]);

					dMatrix bindMatrix(entity->GetParent()->CalculateGlobalMatrix((DemoEntity*)NewtonBodyGetUserData(parentBody)).Inverse());
					parentBone = controller->AddBone(bone, bindMatrix, parentBone);
					// save the controller as the collision user data, for collision culling
					NewtonCollisionSetUserData(NewtonBodyGetCollision(bone), parentBone);
					break;
				}
			}

			for (DemoEntity* child = entity->GetChild(); child; child = child->GetSibling()) {
				parentBones[stackIndex] = parentBone;
				childEntities[stackIndex] = child;
				stackIndex++;
			}
		}

		// set the collision mask
		// note this container work best with a material call back for setting bit field 
		//dAssert(0);
		//controller->SetDefaultSelfCollisionMask();

		// transform the entire contraction to its location
		dMatrix worldMatrix(rootEntity->GetCurrentMatrix() * location);
		NewtonBodySetMatrixRecursive(rootBone, &worldMatrix[0][0]);

		return controller;
	}

	int m_material;
};

void PassiveRagdoll (DemoEntityManager* const scene)
{
	// load the sky box
	scene->CreateSkyBox();


	//CreateLevelMesh (scene, "flatPlane.ngd", true);
	CreateHeightFieldTerrain(scene, HEIGHTFIELD_DEFAULT_SIZE, HEIGHTFIELD_DEFAULT_CELLSIZE, 1.5f, 0.2f, 200.0f, -50.0f);

	// load a skeleton mesh 
//	DemoEntity ragDollModel(dGetIdentityMatrix(), NULL);
//	ragDollModel.LoadNGD_mesh ("ragdoll.ngd", scene->GetNewton(), scene->GetShaderCache());
//	dPointer<DemoEntity> ragDollModel (DemoEntity::LoadNGD_mesh("ragdoll.ngd", scene->GetNewton(), scene->GetShaderCache()));
	dPointer<DemoEntity> ragDollModel (DemoEntity::LoadNGD_mesh("whiteman.ngd", scene->GetNewton(), scene->GetShaderCache()));

	//  create a skeletal transform controller for controlling rag doll
	CrashDummyManager* const manager = new CrashDummyManager (scene);

	NewtonWorld* const world = scene->GetNewton();
	dMatrix matrix (dGetIdentityMatrix());

//	dVector origin (-10.0f, 1.0f, 0.0f, 1.0f);
	dVector origin (FindFloor (world, dVector (-10.0f, 50.0f, 0.0f, 1.0f), 2.0f * 50.0f));

	dVector p(origin + dVector(0.0f, 0.0f, 0.0f, 0.0f));
	matrix.m_posit = FindFloor(world, p, 100.0f);
	matrix.m_posit.m_y += 2.0f;
	dCustomTransformController* const ragdoll = manager->CreateRagDoll(matrix, &(*ragDollModel), skeletonRagDoll, sizeof(skeletonRagDoll) / sizeof(skeletonRagDoll[0]));

	// attach this ragdoll to world with a fix joint
	dMatrix rootMatrix; 
	NewtonBodyGetMatrix(ragdoll->GetBody(), &rootMatrix[0][0]);
	new dCustom6dof (rootMatrix, ragdoll->GetBody());

	int count = 3;
	for (int x = 0; x < count; x ++) {
		for (int z = 0; z < count; z ++) {
			dVector p (origin + dVector (10.0f + (x - count / 2) * 3.0f - count / 2, 0.0f, (z - count / 2) * 3.0f, 0.0f));
			matrix.m_posit = FindFloor (world, p, 100.0f);
			matrix.m_posit.m_y += 2.0f;
//			manager->CreateRagDoll (matrix, &ragDollModel, skeletonRagDoll, sizeof (skeletonRagDoll) / sizeof (skeletonRagDoll[0]));
		}
	}

//	const int defaultMaterialID = NewtonMaterialGetDefaultGroupID(scene->GetNewton());
	const dVector location(origin);
	const dVector size(0.25f, 0.25f, 0.375f, 0.0f);
//	const int count1 = 5;
	const dMatrix shapeOffsetMatrix(dGetIdentityMatrix());
//	AddPrimitiveArray(scene, 10.0f, location, size, count1, count1, 5.0f, _BOX_PRIMITIVE, defaultMaterialID, shapeOffsetMatrix);

//	origin.m_x -= 25.0f;
	origin.m_x -= 4.0f;
	origin.m_y += 3.0f;
	dQuaternion rot;
	scene->SetCameraMatrix(rot, origin);
}
