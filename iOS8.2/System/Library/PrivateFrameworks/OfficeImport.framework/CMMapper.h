/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:33 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/CMMapperRootArchiver.h>

@interface CMMapper : NSObject <CMMapperRootArchiver> {

	CMMapper* mParent;

}
-(id)root;
-(void)addAttribute:(id)arg1 toNode:(id)arg2 value:(id)arg3 ;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(void)addStyleUsingGlobalCacheTo:(id)arg1 style:(id)arg2 ;
-(id)archiver;
-(void)addStyleUsingGlobalCacheTo:(id)arg1 style:(id)arg2 embedStyle:(char)arg3 ;
-(void)addStyle:(id)arg1 withName:(id)arg2 ;
-(void)mapStylesheetAt:(id)arg1 stylesheet:(id)arg2 ;
-(void)startMappingWithState:(id)arg1 ;
-(void)mapElement:(id)arg1 atIndex:(unsigned)arg2 withState:(id)arg3 isLastElement:(char)arg4 ;
-(void)finishMappingWithState:(id)arg1 ;
-(void)setParent:(id)arg1 ;
-(id)initWithParent:(id)arg1 ;
-(id)parent;
@end
