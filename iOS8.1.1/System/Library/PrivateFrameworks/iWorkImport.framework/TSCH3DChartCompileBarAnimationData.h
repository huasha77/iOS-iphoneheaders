/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:23 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSCH3DChartCompileAnimationData.h>

@class NSNumber;

@interface TSCH3DChartCompileBarAnimationData : TSCH3DChartCompileAnimationData {

	NSNumber* mCurrentInterceptValue;

}
+(BOOL)hasCompiledGeometryForScene:(id)arg1 seriesIndex:(unsigned long long)arg2 ;
+(float)interceptForScene:(id)arg1 seriesIndex:(unsigned long long)arg2 ;
+(void)submitToProcessor:(id)arg1 portion:(int)arg2 scene:(id)arg3 seriesIndex:(unsigned long long)arg4 ;
+(id)p_compiledGeometryForScene:(id)arg1 seriesIndex:(unsigned long long)arg2 ;
+(id)interleavedArrayForScene:(id)arg1 seriesIndex:(unsigned long long)arg2 ;
-(BOOL)transformBuffers;
-(void)processElementArrays;
-(id)compiledGeometry;
-(BOOL)compileEntireBuffer;
-(void)p_updateInterceptValue;
-(void)p_addAnimationTimeSlices;
-(void)p_addVertexRenormalizations;
-(void)p_addCapAttributes;
-(void)dealloc;
@end
