/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:41 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/NSCopying.h>

@class NSIndexSet;

@interface TSTCellRegion : NSObject <NSCopying> {

	unsigned long long mCellRangesCount;
	SCD_Struct_TS496* mCellRanges;
	SCD_Struct_TS496 mBoundingCellRange;
	unsigned long long mCellCount;
	NSIndexSet* mIntersectingColumnsIndexSet;
	NSIndexSet* mIntersectingRowsIndexSet;
	SCD_Struct_TS272 mUpperLeftCellID;
	SCD_Struct_TS272 mBottomRightCellID;

}

@property (nonatomic,readonly) SCD_Struct_TS496 boundingCellRange; 
@property (nonatomic,readonly) unsigned long long cellCount; 
@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,readonly) BOOL isRectangle; 
@property (nonatomic,readonly) SCD_Struct_TS272 upperLeftCellID; 
@property (nonatomic,readonly) SCD_Struct_TS272 bottomRightCellID; 
@property (nonatomic,readonly) unsigned short numberOfIntersectingColumns; 
@property (nonatomic,readonly) unsigned short numberOfIntersectingRows; 
+(id)regionFromRange:(SCD_Struct_TS496)arg1 ;
+(id)invalidRegion;
+(id)region:(id)arg1 addingRange:(SCD_Struct_TS496)arg2 ;
+(id)region:(id)arg1 subtractingRange:(SCD_Struct_TS496)arg2 ;
+(id)regionFromCellMap:(id)arg1 ;
+(id)region:(id)arg1 intersectingRange:(SCD_Struct_TS496)arg2 ;
+(id)unionEveryRangeInRegion:(id)arg1 withRange:(SCD_Struct_TS496)arg2 ;
+(id)region:(id)arg1 addingRegion:(id)arg2 ;
+(id)region:(id)arg1 subtractingRegion:(id)arg2 ;
+(id)regionFromCellDiffMap:(id)arg1 ;
+(id)regionFillingColumnsFromRegion:(id)arg1 ;
+(id)regionFillingRowsFromRegion:(id)arg1 ;
+(id)regionFromRowIndices:(id)arg1 ;
+(id)regionFromColumnIndices:(id)arg1 ;
-(void)fillCellRangeColMajorSet:(set<TSUColumnRowRect, TSTCellRangeColumnMajorLess, std::__1::allocator<TSUColumnRowRect> >*)arg1 leftToRight:(BOOL)arg2 ;
-(void)fillCellRangeRowMajorSet:(set<TSUColumnRowRect, TSTCellRangeRowMajorLess, std::__1::allocator<TSUColumnRowRect> >*)arg1 leftToRight:(BOOL)arg2 ;
-(void)saveToMessage:(CellRegion*)arg1 ;
-(id)initFromMessage:(const CellRegion*)arg1 ;
-(id)regionOffsetBy:(SCD_Struct_TS479)arg1 ;
-(SCD_Struct_TS272)suitableAnchor;
-(SCD_Struct_TS272)suitableCursor;
-(id)regionByAddingRange:(SCD_Struct_TS496)arg1 ;
-(SCD_Struct_TS272)upperLeftCellID;
-(SCD_Struct_TS272)bottomRightCellID;
-(void)enumerateCellRangesUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)equalsCellRange:(SCD_Struct_TS496)arg1 ;
-(BOOL)containsCellID:(SCD_Struct_TS272)arg1 ;
-(id)regionBySubtractingRange:(SCD_Struct_TS496)arg1 ;
-(SCD_Struct_TS496)boundingCellRange;
-(BOOL)equalsCellRegion:(id)arg1 ;
-(BOOL)containsCellRegion:(id)arg1 ;
-(NSObject*)iterator;
-(BOOL)intersectsCellRange:(SCD_Struct_TS496)arg1 ;
-(BOOL)containsCellRange:(SCD_Struct_TS496)arg1 ;
-(BOOL)isRectangle;
-(NSObject*)rightToLeftIterator;
-(BOOL)partiallyIntersectsCellRange:(SCD_Struct_TS496)arg1 ;
-(void)enumerateMissingRowsIntersectingCellRange:(SCD_Struct_TS496)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateRowsIntersectingCellRange:(SCD_Struct_TS496)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateMissingColumnsIntersectingCellRange:(SCD_Struct_TS496)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateColumnsIntersectingCellRange:(SCD_Struct_TS496)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)regionByUnioningEveryRangeInRegionWithRange:(SCD_Struct_TS496)arg1 ;
-(id)regionByAddingRegion:(id)arg1 ;
-(id)regionByIntersectingRange:(SCD_Struct_TS496)arg1 ;
-(id)regionBySubtractingRegion:(id)arg1 ;
-(id)regionByAddingColumns:(id)arg1 ;
-(id)regionByRemovingColumns:(id)arg1 ;
-(id)regionByAddingRows:(id)arg1 ;
-(id)regionByRemovingRows:(id)arg1 ;
-(void)enumerateColumnRangesUsingBlock:(/*^block*/id)arg1 ;
-(id)intersectingColumnsIndexSet;
-(id)intersectingRowsIndexSet;
-(unsigned short)numberOfIntersectingRows;
-(unsigned short)numberOfIntersectingColumns;
-(void)p_calculateAncillaryInformation;
-(void)p_insertRangeIntoRegion:(SCD_Struct_TS496)arg1 ;
-(void)p_calculateIntersectingColumns;
-(void)p_calculateIntersectingRows;
-(void)p_calculateUpperLeftAndBottomRightCellIDAndBoundingCellRange;
-(id)regionByIntersectingRowIndices:(id)arg1 ;
-(id)regionByIntersectingColumnIndices:(id)arg1 ;
-(id)regionByApplyingRowMapping:(id)arg1 ;
-(BOOL)intersectsColumn:(unsigned char)arg1 ;
-(BOOL)intersectsRow:(unsigned short)arg1 ;
-(NSObject*)topToBottomIterator;
-(void)enumerateCellIDsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateInDirection:(int)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateRowRangesUsingBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(BOOL)isValid;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(unsigned long long)cellCount;
-(void)enumerateRowsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateColumnsUsingBlock:(/*^block*/id)arg1 ;
@end

