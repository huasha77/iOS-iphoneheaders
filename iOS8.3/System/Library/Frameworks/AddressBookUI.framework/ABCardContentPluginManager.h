/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:34:57 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface ABCardContentPluginManager : NSObject {

	NSString* _pluginsDirectory;

}

@property (nonatomic,readonly) NSString * pluginsDirectory;              //@synthesize pluginsDirectory=_pluginsDirectory - In the implementation block
-(id)bundleNameForLabel:(id)arg1 ;
-(Class)contentProviderForBundleName:(id)arg1 ;
-(NSString *)pluginsDirectory;
-(Class)contentProviderClassForPerson:(void*)arg1 ;
-(void)dealloc;
@end
