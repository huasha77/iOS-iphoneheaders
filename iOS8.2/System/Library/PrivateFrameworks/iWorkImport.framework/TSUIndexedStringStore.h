/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:01 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableArray;

@interface TSUIndexedStringStore : NSObject {

	int _lock;
	NSMutableDictionary* _indexByString;
	NSMutableArray* _stringByIndex;

}
-(void)dealloc;
-(unsigned)count;
-(id)init;
-(unsigned)indexForString:(id)arg1 ;
-(id)stringForIndex:(unsigned)arg1 ;
@end
