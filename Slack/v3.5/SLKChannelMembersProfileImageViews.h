/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:55 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <UIKit/UIView.h>

@protocol SLKChannelMembersProfileImageViewsDelegate;
@class NSArray, SLKDependencies;

@interface SLKChannelMembersProfileImageViews : UIView {

	BOOL _canTapProfileImages;
	id<SLKChannelMembersProfileImageViewsDelegate> _delegate;
	double _imageViewSize;
	NSArray* _profileImageButtonsArray;
	SLKDependencies* _dependencies;

}

@property (assign,nonatomic) double imageViewSize;                                                        //@synthesize imageViewSize=_imageViewSize - In the implementation block
@property (nonatomic,retain) NSArray * profileImageButtonsArray;                                          //@synthesize profileImageButtonsArray=_profileImageButtonsArray - In the implementation block
@property (assign,nonatomic,__weak) SLKDependencies * dependencies;                                       //@synthesize dependencies=_dependencies - In the implementation block
@property (assign,nonatomic) BOOL canTapProfileImages;                                                    //@synthesize canTapProfileImages=_canTapProfileImages - In the implementation block
@property (assign,nonatomic,__weak) id<SLKChannelMembersProfileImageViewsDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setupProfileImagesForMemberIds:(id)arg1 ;
-(void)didTapProfileButton:(id)arg1 ;
-(void)setProfileImageButtonsArray:(NSArray *)arg1 ;
-(double)imageViewSize;
-(void)setImageViewSize:(double)arg1 ;
-(NSArray *)profileImageButtonsArray;
-(BOOL)canTapProfileImages;
-(id)initWithMembersInChannel:(id)arg1 dependencies:(id)arg2 ;
-(void)setCanTapProfileImages:(BOOL)arg1 ;
-(SLKDependencies *)dependencies;
-(void)setDelegate:(id<SLKChannelMembersProfileImageViewsDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<SLKChannelMembersProfileImageViewsDelegate>)delegate;
-(CGSize)intrinsicContentSize;
-(long long)numberOfRows;
-(void)setDependencies:(SLKDependencies *)arg1 ;
@end
