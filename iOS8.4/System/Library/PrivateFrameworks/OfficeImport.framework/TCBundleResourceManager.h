/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:05 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSMutableDictionary;

@interface TCBundleResourceManager : NSObject {

	NSMutableDictionary* mPackageMap;

}
+(id)instance;
+(void)disposeInstance;
-(id)packageWithName:(id)arg1 cacheResult:(BOOL)arg2 ;
-(void)dealloc;
-(id)init;
-(id)dataForResource:(id)arg1 ofType:(id)arg2 inPackage:(id)arg3 cacheResult:(BOOL)arg4 ;
-(xmlDoc*)xmlDocumentForResource:(id)arg1 ofType:(id)arg2 inPackage:(id)arg3 cacheResult:(BOOL)arg4 ;
@end
