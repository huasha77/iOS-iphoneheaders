/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:14 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface PBColorScheme : NSObject
+(void)addColorWithIndex:(int)arg1 fromScheme:(PptColorSchemeAtom*)arg2 colorTransform:(/*function pointer*/ void*)arg3 atIndex:(int)arg4 inScheme:(id)arg5 ;
+(void)addColorWithIndex:(int)arg1 fromScheme:(PptColorSchemeAtom*)arg2 atIndex:(int)arg3 inScheme:(id)arg4 ;
+(void)readFromColorScheme:(PptColorSchemeAtom*)arg1 toColorScheme:(id)arg2 colorMap:(id)arg3 state:(id)arg4 ;
+(void)writeFromSlideBase:(id)arg1 toSlideContainer:(id)arg2 state:(id)arg3 ;
@end
