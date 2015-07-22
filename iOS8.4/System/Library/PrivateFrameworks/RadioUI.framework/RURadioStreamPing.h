/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:58 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSData;

@interface RURadioStreamPing : NSObject {

	double _timestamp;
	long long _type;
	NSData* _value;

}

@property (nonatomic,readonly) double timestamp;                 //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) long long type;                   //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSData * value;              //@synthesize value=_value - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)timestamp;
-(long long)type;
-(NSData *)value;
-(id)initWithType:(long long)arg1 value:(id)arg2 timestamp:(double)arg3 ;
@end
