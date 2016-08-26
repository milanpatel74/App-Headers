/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:21 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, NSString;

@interface FBVideoPlaybackInfoView : UIView {

	UILabel* _protocolContainerLabel;
	UILabel* _stallTimeLabel;
	UILabel* _autoplayCheckLabel;
	UILabel* _playerStateLabel;
	UILabel* _playerVersionLabel;
	UILabel* _assetDebugInfoLabel;
	UILabel* _videoIdLabel;
	NSString* _protocolContainer;
	double _stallTime;
	NSString* _autoplayReason;
	NSString* _playerState;
	NSString* _playerVersion;
	NSString* _assetDebugInfo;
	NSString* _videoID;

}

@property (nonatomic,copy) NSString * protocolContainer;              //@synthesize protocolContainer=_protocolContainer - In the implementation block
@property (assign,nonatomic) double stallTime;                        //@synthesize stallTime=_stallTime - In the implementation block
@property (nonatomic,copy) NSString * autoplayReason;                 //@synthesize autoplayReason=_autoplayReason - In the implementation block
@property (nonatomic,copy) NSString * playerState;                    //@synthesize playerState=_playerState - In the implementation block
@property (nonatomic,copy) NSString * playerVersion;                  //@synthesize playerVersion=_playerVersion - In the implementation block
@property (nonatomic,copy) NSString * assetDebugInfo;                 //@synthesize assetDebugInfo=_assetDebugInfo - In the implementation block
@property (nonatomic,copy) NSString * videoID;                        //@synthesize videoID=_videoID - In the implementation block
+(id)makeLabel:(id)arg1 ;
-(NSString *)videoID;
-(void)setProtocolContainer:(NSString *)arg1 ;
-(void)setStallTime:(double)arg1 ;
-(void)setAutoplayReason:(NSString *)arg1 ;
-(void)setPlayerVersion:(NSString *)arg1 ;
-(void)setAssetDebugInfo:(NSString *)arg1 ;
-(void)setVideoID:(NSString *)arg1 ;
-(NSString *)protocolContainer;
-(double)stallTime;
-(NSString *)autoplayReason;
-(NSString *)playerVersion;
-(NSString *)assetDebugInfo;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setPlayerState:(NSString *)arg1 ;
-(NSString *)playerState;
@end
