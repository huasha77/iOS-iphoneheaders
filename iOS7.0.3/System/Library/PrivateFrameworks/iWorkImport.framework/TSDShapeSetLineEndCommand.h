/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:50 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSKCommand.h>

@class TSDShapeInfo, TSDLineEnd;

@interface TSDShapeSetLineEndCommand : TSKCommand {

	TSDShapeInfo* mShape;
	TSDLineEnd* mLineEnd;
	BOOL mIsHeadLineEnd;

}

@property (nonatomic,readonly) TSDShapeInfo * shape; 
@property (nonatomic,readonly) BOOL isHeadLineEnd; 
@property (nonatomic,readonly) TSDLineEnd * lineEnd; 
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)p_do;
-(id)initWithShape:(id)arg1 lineEnd:(id)arg2 isHeadLineEnd:(BOOL)arg3 ;
-(BOOL)isHeadLineEnd;
-(id)lineEnd;
-(void)dealloc;
-(void)undo;
-(void)redo;
-(void)commit;
-(id)shape;
-(BOOL)process;
-(id)actionString;
@end
