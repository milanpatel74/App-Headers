/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:44 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class ALSdk, AVPlayer, AVPlayerLayer;

@interface ALVideoView : UIView {

	ALSdk* _sdk;

}

@property (nonatomic,retain) AVPlayer * player; 
@property (nonatomic,readonly) AVPlayerLayer * playerLayer; 
@property (nonatomic,retain) ALSdk * sdk;                                //@synthesize sdk=_sdk - In the implementation block
+(Class)layerClass;
-(ALSdk *)sdk;
-(void)setSdk:(ALSdk *)arg1 ;
-(id)initWithSdk:(id)arg1 player:(id)arg2 ;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(AVPlayer *)player;
-(AVPlayerLayer *)playerLayer;
@end
