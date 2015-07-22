/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:36 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VoiceMemos/RCComposition.h>

@class RCComposition;

@interface RCPlaceholderComposition : RCComposition {

	RCComposition* _underlyingComposition;

}

@property (nonatomic,readonly) RCComposition * underlyingComposition;              //@synthesize underlyingComposition=_underlyingComposition - In the implementation block
-(id)initWithUnderlyingComposition:(id)arg1 ;
-(RCComposition *)underlyingComposition;
@end
