/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:58 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OADColorPalette;
@class OADDefaultProperties, OADStyleMatrix, OADFontScheme, OADColorScheme, OADColorMap;

@interface OADDrawingTheme : NSObject {

	OADDefaultProperties* mShapeDefaults;
	OADDefaultProperties* mLineDefaults;
	OADDefaultProperties* mTextDefaults;
	OADStyleMatrix* mStyleMatrix;
	OADFontScheme* mFontScheme;
	OADColorScheme* mColorScheme;
	OADColorMap* mColorMap;
	id<OADColorPalette> mColorPalette;

}

@property (nonatomic,readonly) OADDefaultProperties * shapeDefaults; 
@property (nonatomic,readonly) OADDefaultProperties * lineDefaults; 
@property (nonatomic,readonly) OADDefaultProperties * textDefaults; 
@property (nonatomic,readonly) OADStyleMatrix * styleMatrix; 
@property (nonatomic,readonly) OADFontScheme * fontScheme; 
@property (nonatomic,retain) OADColorScheme * colorScheme; 
@property (nonatomic,readonly) OADColorMap * colorMap; 
@property (nonatomic,retain) id<OADColorPalette> colorPalette; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(OADColorScheme *)colorScheme;
-(void)setColorScheme:(OADColorScheme *)arg1 ;
-(OADStyleMatrix *)styleMatrix;
-(OADColorMap *)colorMap;
-(OADFontScheme *)fontScheme;
-(OADDefaultProperties *)lineDefaults;
-(OADDefaultProperties *)shapeDefaults;
-(OADDefaultProperties *)textDefaults;
-(id<OADColorPalette>)colorPalette;
-(void)setColorPalette:(id<OADColorPalette>)arg1 ;
-(id)initWithStyleMatrix:(id)arg1 fontScheme:(id)arg2 colorScheme:(id)arg3 colorMap:(id)arg4 colorPalette:(id)arg5 ;
-(id)initWithTheme:(id)arg1 colorMap:(id)arg2 colorPalette:(id)arg3 ;
-(void)applyThemeOverrides:(id)arg1 colorMapOverride:(id)arg2 ;
@end
