/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:32 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Game Center.app/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterFoundation/GKScore.h>

@class GKGameRecord, NSString;

@interface AchievementHeadToHeadScore : GKScore {

	GKGameRecord* _gameRecord;
	GKGameRecord* _otherGameRecord;
	NSString* _otherPlayerID;

}

@property (nonatomic,retain) GKGameRecord * gameRecord;                       //@synthesize gameRecord=_gameRecord - In the implementation block
@property (nonatomic,retain) GKGameRecord * otherGameRecord;                  //@synthesize otherGameRecord=_otherGameRecord - In the implementation block
@property (nonatomic,readonly) NSString * otherPlayerID;                      //@synthesize otherPlayerID=_otherPlayerID - In the implementation block
@property (nonatomic,readonly) int playerAchievementCount; 
@property (nonatomic,readonly) int playerAchievementPoints; 
@property (nonatomic,readonly) int otherPlayerAchievementCount; 
@property (nonatomic,readonly) int otherPlayerAchievementPoints; 
@property (nonatomic,readonly) int availableAchievementCount; 
@property (nonatomic,readonly) int availableAchievementPoints; 
-(GKGameRecord *)otherGameRecord;
-(int)playerAchievementCount;
-(int)availableAchievementCount;
-(int)playerAchievementPoints;
-(int)availableAchievementPoints;
-(NSString *)otherPlayerID;
-(int)otherPlayerAchievementCount;
-(int)otherPlayerAchievementPoints;
-(id)otherPlayer;
-(void)setOtherGameRecord:(GKGameRecord *)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)game;
-(GKGameRecord *)gameRecord;
-(void)setGameRecord:(GKGameRecord *)arg1 ;
@end
