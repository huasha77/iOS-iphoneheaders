/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:16 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SymptomAnalytics/ObjectAnalytics.h>

@interface UsageAnalytics : ObjectAnalytics
-(id)init;
-(id)allUsageMarkersWithTag:(unsigned)arg1 andMetadata:(unsigned)arg2 ;
-(id)usageMarkersWithTag:(unsigned)arg1 andMetadata:(unsigned)arg2 fromDate:(id)arg3 untilDate:(id)arg4 ;
-(id)lastHappenedWithTag:(unsigned)arg1 andMetadata:(unsigned)arg2 ;
-(id)usageMarkersWithTag:(unsigned)arg1 fromDate:(id)arg2 untilDate:(id)arg3 ;
-(id)allUsageMarkersWithTag:(unsigned)arg1 ;
-(id)lastHappenedWithTag:(unsigned)arg1 ;
-(id)initWithWorkspace:(id)arg1 withCache:(char)arg2 ;
@end
