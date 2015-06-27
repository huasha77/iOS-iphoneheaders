/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:10 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSCHChartFeatureCategory.h>

@interface TSCHChartFeatureTwoAxis : TSCHChartFeatureCategory
-(id)supportedAxisScales;
-(unsigned)styleIndexForAxisID:(id)arg1 ;
-(Class)valueAxisClassForID:(id)arg1 scale:(int)arg2 ;
-(char)supportsMultipleSeriesTypes;
-(char)requiresYAxisOrdinal;
-(id)defaultDataFileName;
-(id)genericToSpecificPropertyMap;
-(id)userInterfaceName;
-(Class)presetImagerClass;
-(id)supportedSeriesTypes;
-(char)supportsGroupedShadows;
-(char)supportsEditing;
-(char)supportsSymbolOverhang;
-(char)supportsConnectingLines;
-(void)updateTitlesForExportingModel:(id)arg1 info:(id)arg2 ;
-(char)supportsIndividualShadowRendering;
-(void)p_initializeAxisIDs;
@end
