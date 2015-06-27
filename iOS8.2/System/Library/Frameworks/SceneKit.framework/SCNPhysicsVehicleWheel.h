/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:49 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/NSCopying.h>
#import <SceneKit/NSSecureCoding.h>

@class SCNNode, SCNPhysicsVehicle;

@interface SCNPhysicsVehicleWheel : NSObject <NSCopying, NSSecureCoding> {

	id _reserved;
	SCNNode* _node;
	SCNPhysicsVehicle* _vehicle;
	int _wheelIndex;
	float _suspensionStiffness;
	float _suspensionCompression;
	float _suspensionDamping;
	float _maximumSuspensionTravel;
	float _frictionSlip;
	float _maximumSuspensionForce;
	SCNVector3 _connectionPosition;
	SCNVector3 _steeringAxis;
	SCNVector3 _axle;
	float _radius;
	float _suspensionRestLength;
	char _isFront;

}

@property (readonly) SCNNode * node; 
@property (assign) float suspensionStiffness; 
@property (assign) float suspensionCompression; 
@property (assign) float suspensionDamping; 
@property (assign) float maximumSuspensionTravel; 
@property (assign) float frictionSlip; 
@property (assign) float maximumSuspensionForce; 
@property (assign) SCNVector3 connectionPosition; 
@property (assign) SCNVector3 steeringAxis; 
@property (assign) SCNVector3 axle; 
@property (assign) float radius; 
@property (assign) float suspensionRestLength; 
+(id)SCNJSExportProtocol;
+(id)wheelWithNode:(id)arg1 ;
+(char)supportsSecureCoding;
-(void)setConnectionPosition:(SCNVector3)arg1 ;
-(float)suspensionStiffness;
-(void)setSuspensionStiffness:(float)arg1 ;
-(float)suspensionCompression;
-(void)setSuspensionCompression:(float)arg1 ;
-(float)suspensionDamping;
-(void)setSuspensionDamping:(float)arg1 ;
-(float)maximumSuspensionTravel;
-(void)setMaximumSuspensionTravel:(float)arg1 ;
-(float)frictionSlip;
-(void)setFrictionSlip:(float)arg1 ;
-(float)maximumSuspensionForce;
-(void)setMaximumSuspensionForce:(float)arg1 ;
-(SCNVector3)connectionPosition;
-(SCNVector3)steeringAxis;
-(void)setSteeringAxis:(SCNVector3)arg1 ;
-(SCNVector3)axle;
-(void)setAxle:(SCNVector3)arg1 ;
-(float)suspensionRestLength;
-(void)setSuspensionRestLength:(float)arg1 ;
-(char)isFront;
-(void)setIsFront:(char)arg1 ;
-(void)_setVehicle:(id)arg1 ;
-(void)_setWheelIndex:(int)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SCNNode *)node;
-(void)setNode:(SCNNode *)arg1 ;
-(float)radius;
-(void)setRadius:(float)arg1 ;
@end
