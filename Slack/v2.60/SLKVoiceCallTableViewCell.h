/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 2:24:39 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8DFB78BE-38F8-46CD-A2D2-C1EE6F510A67/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <UIKit/UITableViewCell.h>
#import <UIKit/UICollectionViewDataSource.h>

@protocol SLKMessageGenerics, SLKChannelGenerics;
@class SLKCallRoom, UICollectionView, NSMutableArray, UIImageView, UILabel, SLKReactionsView, UIView, UITapGestureRecognizer, NSString;

@interface SLKVoiceCallTableViewCell : UITableViewCell <UICollectionViewDataSource> {

	id<SLKMessageGenerics> _message;
	id<SLKChannelGenerics> _channel;
	SLKCallRoom* _callRoom;
	UICollectionView* _callParticipantsCollectionView;
	NSMutableArray* _fetchedCallParticipants;
	UIImageView* _avatar;
	UILabel* _usernameLabel;
	UILabel* _timeLabel;
	SLKReactionsView* _reactionsView;
	UIView* _callDetailsContainerView;
	UIImageView* _callIconImageView;
	UILabel* _callTitleLabel;
	UILabel* _callDetailLabel;
	UITapGestureRecognizer* _avatarTapGestureRecognizer;

}

@property (nonatomic,retain) id<SLKMessageGenerics> message;                                   //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) id<SLKChannelGenerics> channel;                                   //@synthesize channel=_channel - In the implementation block
@property (nonatomic,retain) SLKCallRoom * callRoom;                                           //@synthesize callRoom=_callRoom - In the implementation block
@property (nonatomic,retain) UICollectionView * callParticipantsCollectionView;                //@synthesize callParticipantsCollectionView=_callParticipantsCollectionView - In the implementation block
@property (nonatomic,retain) NSMutableArray * fetchedCallParticipants;                         //@synthesize fetchedCallParticipants=_fetchedCallParticipants - In the implementation block
@property (nonatomic,retain) UIImageView * avatar;                                             //@synthesize avatar=_avatar - In the implementation block
@property (nonatomic,retain) UILabel * usernameLabel;                                          //@synthesize usernameLabel=_usernameLabel - In the implementation block
@property (nonatomic,retain) UILabel * timeLabel;                                              //@synthesize timeLabel=_timeLabel - In the implementation block
@property (nonatomic,retain) SLKReactionsView * reactionsView;                                 //@synthesize reactionsView=_reactionsView - In the implementation block
@property (nonatomic,retain) UIView * callDetailsContainerView;                                //@synthesize callDetailsContainerView=_callDetailsContainerView - In the implementation block
@property (nonatomic,retain) UIImageView * callIconImageView;                                  //@synthesize callIconImageView=_callIconImageView - In the implementation block
@property (nonatomic,retain) UILabel * callTitleLabel;                                         //@synthesize callTitleLabel=_callTitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * callDetailLabel;                                        //@synthesize callDetailLabel=_callDetailLabel - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * avatarTapGestureRecognizer;              //@synthesize avatarTapGestureRecognizer=_avatarTapGestureRecognizer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)heightWithMessage:(id)arg1 constraintToSize:(CGSize)arg2 ;
-(void)setAvatarImage:(id)arg1 ;
-(void)setAvatarTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)avatarTapGestureRecognizer;
-(UILabel *)usernameLabel;
-(void)setUsernameLabel:(UILabel *)arg1 ;
-(void)setReactionsView:(SLKReactionsView *)arg1 ;
-(SLKReactionsView *)reactionsView;
-(SLKCallRoom *)callRoom;
-(void)setCallRoom:(SLKCallRoom *)arg1 ;
-(UICollectionView *)callParticipantsCollectionView;
-(void)setupViewsWithCellWidth:(double)arg1 ;
-(void)setFetchedCallParticipants:(NSMutableArray *)arg1 ;
-(void)messageDataUpdated:(id)arg1 ;
-(void)callRoomObjectUpdated:(id)arg1 ;
-(UIView *)callDetailsContainerView;
-(UIImageView *)callIconImageView;
-(UILabel *)callTitleLabel;
-(UILabel *)callDetailLabel;
-(void)downloadAvatar;
-(id)formattedDateForTimestamp:(id)arg1 ;
-(NSMutableArray *)fetchedCallParticipants;
-(void)setCallParticipantsCollectionView:(UICollectionView *)arg1 ;
-(void)setCallDetailsContainerView:(UIView *)arg1 ;
-(void)setCallIconImageView:(UIImageView *)arg1 ;
-(void)setCallTitleLabel:(UILabel *)arg1 ;
-(void)setCallDetailLabel:(UILabel *)arg1 ;
-(void)dealloc;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id<SLKMessageGenerics>)message;
-(void)setMessage:(id<SLKMessageGenerics>)arg1 ;
-(void)setTimeLabel:(UILabel *)arg1 ;
-(UILabel *)timeLabel;
-(void)setAvatar:(UIImageView *)arg1 ;
-(UIImageView *)avatar;
-(void)setChannel:(id<SLKChannelGenerics>)arg1 ;
-(id<SLKChannelGenerics>)channel;
@end
