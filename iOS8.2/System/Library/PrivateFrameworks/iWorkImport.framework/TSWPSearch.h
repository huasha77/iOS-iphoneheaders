/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:18 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSKSearch.h>

@class NSString, TSWPFilteredString, TSWPStorage;

@interface TSWPSearch : TSKSearch {

	NSString* _searchedString;
	TSWPFilteredString* _filteredString;
	TSWPStorage* _storage;
	NSRange _range;

}

@property (assign,nonatomic) NSRange range;                                             //@synthesize range=_range - In the implementation block
@property (nonatomic,readonly) NSString * searchedString;                               //@synthesize searchedString=_searchedString - In the implementation block
@property (nonatomic,retain,readonly) TSWPFilteredString * filteredString;              //@synthesize filteredString=_filteredString - In the implementation block
@property (nonatomic,readonly) TSWPStorage * storage;                                   //@synthesize storage=_storage - In the implementation block
-(TSWPFilteredString *)filteredString;
-(id)initWithString:(id)arg1 options:(unsigned)arg2 hitBlock:(/*^block*/id)arg3 storage:(id)arg4 range:(NSRange)arg5 ;
-(void)foundHitWithRange:(NSRange)arg1 ;
-(NSString *)searchedString;
-(char)isComplete;
-(void)dealloc;
-(NSRange)range;
-(void)setRange:(NSRange)arg1 ;
-(TSWPStorage *)storage;
@end
