/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:23 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface MusicUpNextViewUpdate : NSObject {

	unsigned long long _type;
	NSArray* _indexPaths;

}

@property (assign,nonatomic) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSArray * indexPaths;                 //@synthesize indexPaths=_indexPaths - In the implementation block
-(id)debugDescription;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(id)_stringForUpdateType:(unsigned long long)arg1 ;
-(void)setIndexPaths:(NSArray *)arg1 ;
-(NSArray *)indexPaths;
@end
