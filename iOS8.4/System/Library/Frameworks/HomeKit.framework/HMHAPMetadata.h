/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:02 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HomeKit/NSSecureCoding.h>

@class NSNumber, NSArray, NSDictionary;

@interface HMHAPMetadata : NSObject <NSSecureCoding> {

	NSNumber* _version;
	NSArray* _hapValueUnits;
	NSArray* _hapCharacteristics;
	NSArray* _hapServices;
	NSDictionary* _assistantServices;
	NSArray* _assistantCharacteristics;
	NSDictionary* _assistantUnits;

}

@property (nonatomic,retain) NSNumber * version;                              //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSArray * hapValueUnits;                         //@synthesize hapValueUnits=_hapValueUnits - In the implementation block
@property (nonatomic,retain) NSArray * hapCharacteristics;                    //@synthesize hapCharacteristics=_hapCharacteristics - In the implementation block
@property (nonatomic,retain) NSArray * hapServices;                           //@synthesize hapServices=_hapServices - In the implementation block
@property (nonatomic,retain) NSDictionary * assistantServices;                //@synthesize assistantServices=_assistantServices - In the implementation block
@property (nonatomic,retain) NSArray * assistantCharacteristics;              //@synthesize assistantCharacteristics=_assistantCharacteristics - In the implementation block
@property (nonatomic,retain) NSDictionary * assistantUnits;                   //@synthesize assistantUnits=_assistantUnits - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)getSharedInstance;
+(void)setSharedInstance:(id)arg1 ;
-(id)characteristicTypeDescription:(id)arg1 ;
-(id)getAssistantCharacteristic:(id)arg1 ;
-(BOOL)isStandardServiceType:(id)arg1 ;
-(BOOL)isStandardServiceName:(id)arg1 ;
-(BOOL)isStandardCharacteristicType:(id)arg1 ;
-(BOOL)isStandardCharacteristicName:(id)arg1 ;
-(id)serviceTypeDescription:(id)arg1 ;
-(id)serviceTypeLocalizedDescription:(id)arg1 ;
-(id)characteristicTypeLocalizedDescription:(id)arg1 ;
-(id)characteristicValueUnit:(id)arg1 ;
-(id)assistantCharacteristicFormatType:(id)arg1 ;
-(BOOL)supportsLocalization:(id)arg1 ;
-(id)mapToAssistantServiceName:(id)arg1 ;
-(id)mapFromAssistantServiceName:(id)arg1 ;
-(id)mapToAssistantCharacteristicName:(id)arg1 ;
-(id)mapReadCharcteristicFromAssistantName:(id)arg1 ;
-(id)mapWriteCharcteristicFromAssistantName:(id)arg1 ;
-(id)mapCharacteristicValueType:(id)arg1 ;
-(id)mapToAssistantUnitName:(id)arg1 ;
-(id)mapFromAssistantUnitName:(id)arg1 ;
-(id)mapFromAssistantCharacteristicValue:(id)arg1 name:(id)arg2 ;
-(id)mapToAssistantCharacteristicValue:(id)arg1 name:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setVersion:(NSNumber *)arg1 ;
-(NSNumber *)version;
-(NSArray *)hapCharacteristics;
-(NSArray *)hapServices;
-(void)setHapValueUnits:(NSArray *)arg1 ;
-(void)setHapCharacteristics:(NSArray *)arg1 ;
-(void)setHapServices:(NSArray *)arg1 ;
-(NSArray *)hapValueUnits;
-(void)setAssistantServices:(NSDictionary *)arg1 ;
-(void)setAssistantCharacteristics:(NSArray *)arg1 ;
-(void)setAssistantUnits:(NSDictionary *)arg1 ;
-(NSDictionary *)assistantServices;
-(NSArray *)assistantCharacteristics;
-(NSDictionary *)assistantUnits;
@end
