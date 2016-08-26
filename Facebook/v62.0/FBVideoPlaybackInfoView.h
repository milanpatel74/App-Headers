/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
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
-(void)setVideoID:(NSString *)arg1 ;
-(void)setAutoplayReason:(NSString *)arg1 ;
-(NSString *)playerVersion;
-(void)setProtocolContainer:(NSString *)arg1 ;
-(void)setStallTime:(double)arg1 ;
-(void)setPlayerVersion:(NSString *)arg1 ;
-(void)setAssetDebugInfo:(NSString *)arg1 ;
-(NSString *)protocolContainer;
-(double)stallTime;
-(NSString *)autoplayReason;
-(NSString *)assetDebugInfo;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setPlayerState:(NSString *)arg1 ;
-(NSString *)playerState;
@end
