/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:21 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSString, TSUColor;

@interface TSAExportableDocumentType : NSObject {

	NSString* _type;
	NSString* _localizedName;
	TSUColor* _exportFormatChooserItemTextColor;
	NSString* _exportProgressMessage;

}

@property (nonatomic,readonly) NSString * type;                                          //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * localizedName;                                 //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,readonly) TSUColor * exportFormatChooserItemTextColor;              //@synthesize exportFormatChooserItemTextColor=_exportFormatChooserItemTextColor - In the implementation block
@property (nonatomic,readonly) NSString * exportProgressMessage;                         //@synthesize exportProgressMessage=_exportProgressMessage - In the implementation block
+(id)exportableTypeWithType:(id)arg1 localizedName:(id)arg2 exportFormatChooserItemTextColor:(id)arg3 exportProgressMessage:(id)arg4 ;
+(id)exportableTypeWithType:(id)arg1 localizedName:(id)arg2 exportFormatChooserItemTextColor:(id)arg3 ;
-(id)initWithType:(id)arg1 localizedName:(id)arg2 exportFormatChooserItemTextColor:(id)arg3 exportProgressMessage:(id)arg4 ;
-(id)exportFormatChooserItemTextColor;
-(id)exportProgressMessage;
-(void)dealloc;
-(id)description;
-(id)type;
-(id)localizedName;
@end
