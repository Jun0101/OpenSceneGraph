// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/StaticMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/CopyOp>
#include <osg/Object>
#include <osg/State>
#include <osgAnimation/Animation>
#include <osgAnimation/Timeline>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

TYPE_NAME_ALIAS(std::map< unsigned int COMMA  osg::ref_ptr< osgAnimation::Action::Callback > >, osgAnimation::Action::FrameCallback)

BEGIN_OBJECT_REFLECTOR(osgAnimation::Action)
	I_DeclaringFile("osgAnimation/Timeline");
	I_BaseType(osg::Object);
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "Clone the type of an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "Clone an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "return the name of the object's library. ",
	          "Must be defined by derived classes. The OpenSceneGraph convention is that the namespace of a library is the same as the library name. ");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "return the name of the object's class type. ",
	          "Must be defined by derived classes. ");
	I_Constructor0(____Action,
	               "",
	               "");
	I_Constructor2(IN, const osgAnimation::Action &, x, IN, const osg::CopyOp &, x,
	               ____Action__C5_Action_R1__C5_osg_CopyOp_R1,
	               "",
	               "");
	I_Method2(void, setCallback, IN, double, when, IN, osgAnimation::Action::Callback *, callback,
	          Properties::NON_VIRTUAL,
	          __void__setCallback__double__Callback_P1,
	          "",
	          "");
	I_Method2(void, setCallback, IN, unsigned int, frame, IN, osgAnimation::Action::Callback *, callback,
	          Properties::NON_VIRTUAL,
	          __void__setCallback__unsigned_int__Callback_P1,
	          "",
	          "");
	I_Method1(osgAnimation::Action::Callback *, getCallback, IN, unsigned int, frame,
	          Properties::NON_VIRTUAL,
	          __Callback_P1__getCallback__unsigned_int,
	          "",
	          "");
	I_Method1(void, setNumFrames, IN, unsigned int, numFrames,
	          Properties::NON_VIRTUAL,
	          __void__setNumFrames__unsigned_int,
	          "",
	          "");
	I_Method1(void, setDuration, IN, double, duration,
	          Properties::NON_VIRTUAL,
	          __void__setDuration__double,
	          "",
	          "");
	I_Method0(unsigned int, getNumFrames,
	          Properties::NON_VIRTUAL,
	          __unsigned_int__getNumFrames,
	          "",
	          "");
	I_Method0(double, getDuration,
	          Properties::NON_VIRTUAL,
	          __double__getDuration,
	          "",
	          "");
	I_Method1(void, setLoop, IN, int, nb,
	          Properties::VIRTUAL,
	          __void__setLoop__int,
	          "",
	          "");
	I_Method0(unsigned int, getLoop,
	          Properties::VIRTUAL,
	          __unsigned_int__getLoop,
	          "",
	          "");
	I_Method3(bool, evaluateFrame, IN, unsigned int, frame, IN, unsigned int &, resultframe, IN, unsigned int &, nbloop,
	          Properties::NON_VIRTUAL,
	          __bool__evaluateFrame__unsigned_int__unsigned_int_R1__unsigned_int_R1,
	          "",
	          "");
	I_Method1(void, evaluate, IN, unsigned int, frame,
	          Properties::VIRTUAL,
	          __void__evaluate__unsigned_int,
	          "",
	          "");
	I_Method1(void, evaluateCallback, IN, unsigned int, frame,
	          Properties::VIRTUAL,
	          __void__evaluateCallback__unsigned_int,
	          "",
	          "");
	I_IndexedProperty(osgAnimation::Action::Callback *, Callback, 
	                  __Callback_P1__getCallback__unsigned_int, 
	                  __void__setCallback__unsigned_int__Callback_P1, 
	                  0);
	I_SimpleProperty(double, Duration, 
	                 __double__getDuration, 
	                 __void__setDuration__double);
	I_SimpleProperty(int, Loop, 
	                 0, 
	                 __void__setLoop__int);
	I_SimpleProperty(unsigned int, NumFrames, 
	                 0, 
	                 __void__setNumFrames__unsigned_int);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgAnimation::Action::Callback)
	I_DeclaringFile("osgAnimation/Timeline");
	I_BaseType(osg::Object);
	I_Constructor0(____Callback,
	               "",
	               "");
	I_Constructor2(IN, const osgAnimation::Action::Callback &, x, IN, const osg::CopyOp &, x,
	               ____Callback__C5_Callback_R1__C5_osg_CopyOp_R1,
	               "",
	               "");
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "Clone the type of an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "Clone an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "return the name of the object's library. ",
	          "Must be defined by derived classes. The OpenSceneGraph convention is that the namespace of a library is the same as the library name. ");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "return the name of the object's class type. ",
	          "Must be defined by derived classes. ");
	I_Method1(void, addNestedCallback, IN, osgAnimation::Action::Callback *, callback,
	          Properties::NON_VIRTUAL,
	          __void__addNestedCallback__Callback_P1,
	          "",
	          "");
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgAnimation::ActionAnimation)
	I_DeclaringFile("osgAnimation/Timeline");
	I_BaseType(osgAnimation::Action);
	I_Constructor1(IN, osgAnimation::Animation *, animation,
	               Properties::NON_EXPLICIT,
	               ____ActionAnimation__Animation_P1,
	               "",
	               "");
	I_Method1(void, evaluate, IN, unsigned int, frame,
	          Properties::VIRTUAL,
	          __void__evaluate__unsigned_int,
	          "",
	          "");
	I_Method0(osgAnimation::Animation *, getAnimation,
	          Properties::NON_VIRTUAL,
	          __Animation_P1__getAnimation,
	          "",
	          "");
	I_SimpleProperty(osgAnimation::Animation *, Animation, 
	                 __Animation_P1__getAnimation, 
	                 0);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgAnimation::BlendIn)
	I_DeclaringFile("osgAnimation/Timeline");
	I_BaseType(osgAnimation::Action);
	I_Constructor3(IN, osgAnimation::Animation *, animation, IN, double, duration, IN, double, weight,
	               ____BlendIn__Animation_P1__double__double,
	               "",
	               "");
	I_Method0(double, getWeight,
	          Properties::NON_VIRTUAL,
	          __double__getWeight,
	          "",
	          "");
	I_Method1(void, evaluate, IN, unsigned int, frame,
	          Properties::VIRTUAL,
	          __void__evaluate__unsigned_int,
	          "",
	          "");
	I_SimpleProperty(double, Weight, 
	                 __double__getWeight, 
	                 0);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgAnimation::BlendOut)
	I_DeclaringFile("osgAnimation/Timeline");
	I_BaseType(osgAnimation::Action);
	I_Constructor2(IN, osgAnimation::Animation *, animation, IN, double, duration,
	               ____BlendOut__Animation_P1__double,
	               "",
	               "");
	I_Method0(double, getWeight,
	          Properties::NON_VIRTUAL,
	          __double__getWeight,
	          "",
	          "");
	I_Method1(void, evaluate, IN, unsigned int, frame,
	          Properties::VIRTUAL,
	          __void__evaluate__unsigned_int,
	          "",
	          "");
	I_SimpleProperty(double, Weight, 
	                 __double__getWeight, 
	                 0);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgAnimation::RunAction)
	I_DeclaringFile("osgAnimation/Timeline");
	I_BaseType(osgAnimation::Action::Callback);
	I_Constructor2(IN, osgAnimation::Timeline *, tm, IN, osgAnimation::Action *, a,
	               ____RunAction__Timeline_P1__Action_P1,
	               "",
	               "");
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgAnimation::StripAnimation)
	I_DeclaringFile("osgAnimation/Timeline");
	I_BaseType(osgAnimation::Action);
	I_ConstructorWithDefaults4(IN, osgAnimation::Animation *, animation, , IN, double, blendInDuration, , IN, double, blendOutDuration, , IN, double, blendInWeightTarget, 1.0,
	                           ____StripAnimation__Animation_P1__double__double__double,
	                           "",
	                           "");
	I_Method0(osgAnimation::ActionAnimation *, getActionAnimation,
	          Properties::NON_VIRTUAL,
	          __ActionAnimation_P1__getActionAnimation,
	          "",
	          "");
	I_Method0(osgAnimation::BlendIn *, getBlendIn,
	          Properties::NON_VIRTUAL,
	          __BlendIn_P1__getBlendIn,
	          "",
	          "");
	I_Method0(osgAnimation::BlendOut *, getBlendOut,
	          Properties::NON_VIRTUAL,
	          __BlendOut_P1__getBlendOut,
	          "",
	          "");
	I_Method0(const osgAnimation::ActionAnimation *, getActionAnimation,
	          Properties::NON_VIRTUAL,
	          __C5_ActionAnimation_P1__getActionAnimation,
	          "",
	          "");
	I_Method0(const osgAnimation::BlendIn *, getBlendIn,
	          Properties::NON_VIRTUAL,
	          __C5_BlendIn_P1__getBlendIn,
	          "",
	          "");
	I_Method0(const osgAnimation::BlendOut *, getBlendOut,
	          Properties::NON_VIRTUAL,
	          __C5_BlendOut_P1__getBlendOut,
	          "",
	          "");
	I_Method0(unsigned int, getLoop,
	          Properties::VIRTUAL,
	          __unsigned_int__getLoop,
	          "",
	          "");
	I_Method1(void, setLoop, IN, unsigned int, loop,
	          Properties::NON_VIRTUAL,
	          __void__setLoop__unsigned_int,
	          "",
	          "");
	I_Method1(void, evaluate, IN, unsigned int, frame,
	          Properties::VIRTUAL,
	          __void__evaluate__unsigned_int,
	          "",
	          "");
	I_SimpleProperty(osgAnimation::ActionAnimation *, ActionAnimation, 
	                 __ActionAnimation_P1__getActionAnimation, 
	                 0);
	I_SimpleProperty(osgAnimation::BlendIn *, BlendIn, 
	                 __BlendIn_P1__getBlendIn, 
	                 0);
	I_SimpleProperty(osgAnimation::BlendOut *, BlendOut, 
	                 __BlendOut_P1__getBlendOut, 
	                 0);
	I_SimpleProperty(unsigned int, Loop, 
	                 __unsigned_int__getLoop, 
	                 __void__setLoop__unsigned_int);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgAnimation::Timeline)
	I_DeclaringFile("osgAnimation/Timeline");
	I_BaseType(osg::Object);
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "Clone the type of an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "Clone an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "return the name of the object's library. ",
	          "Must be defined by derived classes. The OpenSceneGraph convention is that the namespace of a library is the same as the library name. ");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "return the name of the object's class type. ",
	          "Must be defined by derived classes. ");
	I_Constructor0(____Timeline,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osgAnimation::Timeline &, nc, , IN, const osg::CopyOp &, op, osg::CopyOp::SHALLOW_COPY,
	                           ____Timeline__C5_Timeline_R1__C5_osg_CopyOp_R1,
	                           "",
	                           "");
	I_Method0(osg::State, getStatus,
	          Properties::NON_VIRTUAL,
	          __State__getStatus,
	          "",
	          "");
	I_Method1(const ActionList &, getActionLayer, IN, int, i,
	          Properties::NON_VIRTUAL,
	          __C5_ActionList_R1__getActionLayer__int,
	          "",
	          "");
	I_Method0(unsigned int, getCurrentFrame,
	          Properties::NON_VIRTUAL,
	          __unsigned_int__getCurrentFrame,
	          "",
	          "");
	I_Method0(double, getCurrentTime,
	          Properties::NON_VIRTUAL,
	          __double__getCurrentTime,
	          "",
	          "");
	I_Method0(void, play,
	          Properties::NON_VIRTUAL,
	          __void__play,
	          "",
	          "");
	I_Method1(void, gotoFrame, IN, unsigned int, frame,
	          Properties::NON_VIRTUAL,
	          __void__gotoFrame__unsigned_int,
	          "",
	          "");
	I_Method0(void, stop,
	          Properties::NON_VIRTUAL,
	          __void__stop,
	          "",
	          "");
	I_Method0(bool, getEvaluating,
	          Properties::NON_VIRTUAL,
	          __bool__getEvaluating,
	          "",
	          "");
	I_Method1(bool, isActive, IN, osgAnimation::Action *, activeAction,
	          Properties::NON_VIRTUAL,
	          __bool__isActive__Action_P1,
	          "",
	          "");
	I_Method1(void, removeAction, IN, osgAnimation::Action *, action,
	          Properties::NON_VIRTUAL,
	          __void__removeAction__Action_P1,
	          "",
	          "");
	I_MethodWithDefaults3(void, addActionAt, IN, unsigned int, frame, , IN, osgAnimation::Action *, action, , IN, int, priority, 0,
	                      Properties::VIRTUAL,
	                      __void__addActionAt__unsigned_int__Action_P1__int,
	                      "",
	                      "");
	I_MethodWithDefaults3(void, addActionAt, IN, double, t, , IN, osgAnimation::Action *, action, , IN, int, priority, 0,
	                      Properties::VIRTUAL,
	                      __void__addActionAt__double__Action_P1__int,
	                      "",
	                      "");
	I_Method1(void, evaluate, IN, unsigned int, frame,
	          Properties::VIRTUAL,
	          __void__evaluate__unsigned_int,
	          "",
	          "");
	I_Method1(void, evaluateCallback, IN, unsigned int, frame,
	          Properties::VIRTUAL,
	          __void__evaluateCallback__unsigned_int,
	          "",
	          "");
	I_Method1(void, update, IN, double, simulationTime,
	          Properties::VIRTUAL,
	          __void__update__double,
	          "",
	          "");
	I_ProtectedMethod1(void, setEvaluating, IN, bool, state,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__setEvaluating__bool,
	                   "",
	                   "");
	I_ProtectedMethod0(void, processPendingOperation,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__processPendingOperation,
	                   "",
	                   "");
	I_ProtectedMethod1(void, internalRemoveAction, IN, osgAnimation::Action *, action,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__internalRemoveAction__Action_P1,
	                   "",
	                   "");
	I_ProtectedMethod2(void, internalAddAction, IN, int, priority, IN, const FrameAction &, ftl,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__internalAddAction__int__C5_FrameAction_R1,
	                   "",
	                   "");
	I_SimpleProperty(unsigned int, CurrentFrame, 
	                 __unsigned_int__getCurrentFrame, 
	                 0);
	I_SimpleProperty(double, CurrentTime, 
	                 __double__getCurrentTime, 
	                 0);
	I_SimpleProperty(bool, Evaluating, 
	                 __bool__getEvaluating, 
	                 0);
	I_SimpleProperty(osg::State, Status, 
	                 __State__getStatus, 
	                 0);
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osg::ref_ptr< osgAnimation::Action::Callback >)
	I_DeclaringFile("osg/ref_ptr");
	I_Constructor0(____ref_ptr,
	               "",
	               "");
	I_Constructor1(IN, osgAnimation::Action::Callback *, ptr,
	               Properties::NON_EXPLICIT,
	               ____ref_ptr__T_P1,
	               "",
	               "");
	I_Constructor1(IN, const osg::ref_ptr< osgAnimation::Action::Callback > &, rp,
	               Properties::NON_EXPLICIT,
	               ____ref_ptr__C5_ref_ptr_R1,
	               "",
	               "");
	I_Method0(osgAnimation::Action::Callback *, get,
	          Properties::NON_VIRTUAL,
	          __T_P1__get,
	          "",
	          "");
	I_Method0(bool, valid,
	          Properties::NON_VIRTUAL,
	          __bool__valid,
	          "",
	          "");
	I_Method0(osgAnimation::Action::Callback *, release,
	          Properties::NON_VIRTUAL,
	          __T_P1__release,
	          "",
	          "");
	I_Method1(void, swap, IN, osg::ref_ptr< osgAnimation::Action::Callback > &, rp,
	          Properties::NON_VIRTUAL,
	          __void__swap__ref_ptr_R1,
	          "",
	          "");
	I_SimpleProperty(osgAnimation::Action::Callback *, , 
	                 __T_P1__get, 
	                 0);
END_REFLECTOR

STD_MAP_REFLECTOR(std::map< unsigned int COMMA  osg::ref_ptr< osgAnimation::Action::Callback > >)

