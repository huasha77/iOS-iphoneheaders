/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:57 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Radio/RadioRequest.h>

@class SSURLConnectionRequest, NSNumber, NSString, RadioPlayEventCollection, NSArray;

@interface RadioGetHistoryRequest : RadioRequest {

	SSURLConnectionRequest* _request;
	BOOL _fetchForAccount;
	BOOL _includesAds;
	BOOL _aggregateSessions;
	BOOL _shouldProcessCategories;
	NSNumber* _accountUniqueIdentifier;
	unsigned long long _maxNumberOfTracks;
	long long _stationID;
	NSString* _stationHash;
	RadioPlayEventCollection* _playEventCollection;
	NSArray* _playActivityFeedEvents;

}

@property (nonatomic,copy,readonly) NSNumber * accountUniqueIdentifier;                 //@synthesize accountUniqueIdentifier=_accountUniqueIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long maxNumberOfTracks;                      //@synthesize maxNumberOfTracks=_maxNumberOfTracks - In the implementation block
@property (assign,nonatomic) BOOL fetchForAccount;                                      //@synthesize fetchForAccount=_fetchForAccount - In the implementation block
@property (assign,nonatomic) BOOL includesAds;                                          //@synthesize includesAds=_includesAds - In the implementation block
@property (assign,nonatomic) long long stationID;                                       //@synthesize stationID=_stationID - In the implementation block
@property (nonatomic,copy) NSString * stationHash;                                      //@synthesize stationHash=_stationHash - In the implementation block
@property (assign,nonatomic) BOOL aggregateSessions;                                    //@synthesize aggregateSessions=_aggregateSessions - In the implementation block
@property (nonatomic,copy) RadioPlayEventCollection * playEventCollection;              //@synthesize playEventCollection=_playEventCollection - In the implementation block
@property (nonatomic,copy) NSArray * playActivityFeedEvents;                            //@synthesize playActivityFeedEvents=_playActivityFeedEvents - In the implementation block
@property (assign,nonatomic) BOOL shouldProcessCategories;                              //@synthesize shouldProcessCategories=_shouldProcessCategories - In the implementation block
-(NSString *)stationHash;
-(long long)stationID;
-(void)cancel;
-(id)init;
-(void)setStationHash:(NSString *)arg1 ;
-(void)setStationID:(long long)arg1 ;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(RadioPlayEventCollection *)playEventCollection;
-(NSArray *)playActivityFeedEvents;
-(BOOL)shouldProcessCategories;
-(unsigned long long)maxNumberOfTracks;
-(void)setMaxNumberOfTracks:(unsigned long long)arg1 ;
-(id)_newHistoryCategoryWithDictionary:(id)arg1 ;
-(id)_newHistoryItemWithDictionary:(id)arg1 ;
-(BOOL)fetchForAccount;
-(BOOL)includesAds;
-(BOOL)aggregateSessions;
-(void)setFetchForAccount:(BOOL)arg1 ;
-(void)setAggregateSessions:(BOOL)arg1 ;
-(void)setShouldProcessCategories:(BOOL)arg1 ;
-(void)setIncludesAds:(BOOL)arg1 ;
-(void)startWithHistoryCompletionHandler:(/*^block*/id)arg1 ;
-(void)setPlayActivityFeedEvents:(NSArray *)arg1 ;
-(void)setPlayEventCollection:(RadioPlayEventCollection *)arg1 ;
-(NSNumber *)accountUniqueIdentifier;
@end
