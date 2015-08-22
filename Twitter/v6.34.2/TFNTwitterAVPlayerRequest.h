/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:38 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class AVPlayer;

@interface TFNTwitterAVPlayerRequest : NSObject {

	BOOL _cancelled;
	BOOL _observingPlayerStatus;
	/*^block*/id _completionHandler;
	AVPlayer* _player;

}

@property (assign,nonatomic) BOOL cancelled;                          //@synthesize cancelled=_cancelled - In the implementation block
@property (nonatomic,copy) id completionHandler;                      //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) BOOL observingPlayerStatus;              //@synthesize observingPlayerStatus=_observingPlayerStatus - In the implementation block
@property (nonatomic,retain) AVPlayer * player;                       //@synthesize player=_player - In the implementation block
-(void)_stopObservingPlayerStatus;
-(BOOL)observingPlayerStatus;
-(void)setObservingPlayerStatus:(BOOL)arg1 ;
-(void)_didFinishLoadingAssetSucceeded:(BOOL)arg1 ;
-(void)_invokeCompletionHandlerWithPlayer:(id)arg1 ;
-(void)requestAVPlayerWithProvider:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancel;
-(void)dealloc;
-(id)completionHandler;
-(BOOL)cancelled;
-(void)setCancelled:(BOOL)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(AVPlayer *)player;
@end
