/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:40 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSTWidthHeightCache : NSObject {

	vector<TSTWidthHeightCache_Private::WHCCol, std::__1::allocator<TSTWidthHeightCache_Private::WHCCol> >* mFittingColumnWidth;
	vector<TSTWidthHeightCache_Private::WHCRow, std::__1::allocator<TSTWidthHeightCache_Private::WHCRow> >* mFittingRowHeight;
	vector<double, std::__1::allocator<double> >* mModelColumnWidth;
	vector<double, std::__1::allocator<double> >* mModelRowHeight;
	unsigned short mMaxRow;
	unsigned char mMaxCol;
	opaque_pthread_rwlock_t mLock;

}
-(id)initWithNumRows:(unsigned short)arg1 andNumCols:(unsigned short)arg2 ;
-(BOOL)resetModelCache;
-(BOOL)resetModelCacheRange:(SCD_Struct_TS496)arg1 ;
-(double)getModelWidthForColumn:(unsigned char)arg1 ;
-(BOOL)setModelWidth:(double)arg1 forColumn:(unsigned char)arg2 ;
-(double)getModelHeightForRow:(unsigned short)arg1 ;
-(BOOL)setModelHeight:(double)arg1 forRow:(unsigned short)arg2 ;
-(double)getFitWidthForCol:(unsigned char)arg1 ;
-(void)resetColWidthsStartingWith:(unsigned char)arg1 andEndingWith:(unsigned char)arg2 ;
-(void)resetAllCol;
-(double)getFitHeightForRow:(unsigned short)arg1 ;
-(void)resetRowHeightsStartingWith:(unsigned short)arg1 andEndingWith:(unsigned short)arg2 ;
-(id)validateChangeDescriptors:(id)arg1 tableModel:(id)arg2 ;
-(BOOL)setFitHeight:(double)arg1 forCellID:(SCD_Struct_TS272)arg2 ;
-(void)setFittingHeightsFromCollection:(id)arg1 ;
-(BOOL)setFitWidth:(double)arg1 forCellID:(SCD_Struct_TS272)arg2 ;
-(void)_increaseRowCapacity:(unsigned)arg1 ;
-(void)_increaseColCapacity:(unsigned)arg1 ;
-(BOOL)moveRowsFrom:(SCD_Struct_TS496)arg1 toRow:(unsigned short)arg2 ;
-(BOOL)moveColsFrom:(SCD_Struct_TS496)arg1 toCol:(unsigned char)arg2 ;
-(BOOL)deleteRowsStartingWith:(unsigned short)arg1 andEndingWith:(unsigned short)arg2 ;
-(BOOL)deleteColsStartingWith:(unsigned char)arg1 andEndingWith:(unsigned char)arg2 ;
-(BOOL)insertRows:(unsigned short)arg1 atRow:(unsigned short)arg2 ;
-(BOOL)insertCols:(unsigned short)arg1 atColumn:(unsigned char)arg2 ;
-(void)resetWidthsHeightsForRange:(SCD_Struct_TS496)arg1 ;
-(BOOL)setFitDims:(CGSize)arg1 forCellID:(SCD_Struct_TS272)arg2 ;
-(void)resetAllRow;
-(void)resetFittingHeightsFromCollection:(id)arg1 ;
-(BOOL)verifyDims:(CGSize)arg1 forCellID:(SCD_Struct_TS272)arg2 ;
-(void)logInternalState;
-(void)dealloc;
-(id)init;
@end
