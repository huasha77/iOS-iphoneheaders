/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:26 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSTimer, NSString, NSMutableArray, MPMediaQuery, MPMediaItem;

@interface SWMusicRemoteController : NSObject {

	long long _musicSelection;
	int _currentVolumeDirection;
	NSTimer* _volumeAdjustTimer;
	NSString* _latestSelectedPlaylistName;
	NSMutableArray* _playlists;
	NSMutableArray* _workoutMixes;
	MPMediaQuery* _interruptedQueueAsQuery;
	MPMediaItem* _interruptedItem;
	double _interruptedPlaybackTime;
	long long _interruptedRepeatMode;
	MPMediaItem* _powersongItem;
	NSString* _nowPlayingTitle;
	NSString* _nowPlayingAlbum;
	NSString* _nowPlayingArtist;
	BOOL _nowPlayingIsPlaying;

}

@property (assign,nonatomic) long long musicSelection; 
@property (nonatomic,readonly) BOOL shouldControlMusic; 
@property (nonatomic,copy) NSString * latestSelectedPlaylistName;              //@synthesize latestSelectedPlaylistName=_latestSelectedPlaylistName - In the implementation block
+(id)sharedMusicController;
+(void)clearCachedDatabaseData;
-(void)play;
-(void)beginSeekingForward;
-(void)beginSeekingBackward;
-(void)endSeeking;
-(void)dealloc;
-(id)init;
-(id)_init;
-(void)pause;
-(BOOL)shouldControlMusic;
-(void)selectNextSong;
-(void)selectPreviousSong;
-(void)beginAdjustingVolume:(int)arg1 ;
-(void)endAdjustingVolume:(int)arg1 ;
-(void)goToNowPlaying;
-(long long)musicSelection;
-(id)currentSongName;
-(id)currentAlbumName;
-(id)currentArtistName;
-(void)_mediaLibraryChanged:(id)arg1 ;
-(void)_mediaRemoteNowPlayingIsPlayingChanged:(id)arg1 ;
-(void)_mediaRemoteNowPlayingInfoChanged:(id)arg1 ;
-(void)_releaseRemoteCachedData;
-(void)_adjustVolumeUp;
-(void)_adjustVolumeUpTimer:(id)arg1 ;
-(void)_adjustVolumeDown;
-(void)_adjustVolumeDownTimer:(id)arg1 ;
-(BOOL)isNowPlaying;
-(void)_startPlaylistWithPersistentUID:(unsigned long long)arg1 ;
-(void)_startPlaylistAtIndex:(unsigned long long)arg1 isWorkoutMix:(BOOL)arg2 ;
-(unsigned long long)_persistentUIDForPlaylistIndex:(unsigned long long)arg1 isWorkoutMix:(BOOL)arg2 ;
-(id)workoutMixes;
-(id)playlists;
-(void)setLatestSelectedPlaylistName:(NSString *)arg1 ;
-(void)setMusicSelection:(long long)arg1 ;
-(void)startWorkoutMixWithPersistentUID:(unsigned long long)arg1 ;
-(void)startPlaylistWithPersistentUID:(unsigned long long)arg1 ;
-(void)startWorkoutMixAtIndex:(unsigned long long)arg1 ;
-(void)startPlaylistAtIndex:(unsigned long long)arg1 ;
-(void)startShuffleSongs;
-(unsigned long long)persistentUIDForPlaylistIndex:(unsigned long long)arg1 ;
-(unsigned long long)persistentUIDForWorkoutMixIndex:(unsigned long long)arg1 ;
-(NSString *)latestSelectedPlaylistName;
@end
