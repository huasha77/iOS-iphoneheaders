/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:28 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHRenderer.h>

@interface TSCHChartGridRenderer : TSCHRenderer
-(void)p_renderBackground:(CGContextRef)arg1 style:(id)arg2 ;
-(void)p_renderBackground:(CGContextRef)arg1 ;
-(void)p_renderGridlines:(CGContextRef)arg1 axis:(id)arg2 locations:(id)arg3 showProperty:(int)arg4 strokeProperty:(int)arg5 shadowProperty:(int)arg6 opacityProperty:(int)arg7 ;
-(void)p_renderIntoContext:(CGContextRef)arg1 visible:(CGRect)arg2 ;
-(void)dealloc;
-(id)init;
@end
