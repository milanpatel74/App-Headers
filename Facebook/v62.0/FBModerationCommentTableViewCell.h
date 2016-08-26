/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBSwipeTableViewCell.h>

@class NSArray, FBModerationFlagIndicatorView, UIView, UIImageView, UILabel, FBMemPagesModerationData, UIButton;

@interface FBModerationCommentTableViewCell : FBSwipeTableViewCell {

	NSArray* _actions;
	FBModerationFlagIndicatorView* _flaggedView;
	UIView* separatorView;
	UIImageView* _thumbnailImageView;
	UILabel* _contextLabel;
	UILabel* _titleLabel;
	UILabel* _likedStateLabel;
	UILabel* _previewLabel;
	UILabel* _timestampLabel;
	FBMemPagesModerationData* _moderationData;
	UIButton* _flagButton;
	UIButton* _likeButton;
	UIButton* _archiveButton;

}

@property (nonatomic,copy) FBMemPagesModerationData * moderationData;              //@synthesize moderationData=_moderationData - In the implementation block
@property (nonatomic,readonly) UIImageView * thumbnailImageView;                   //@synthesize thumbnailImageView=_thumbnailImageView - In the implementation block
@property (nonatomic,readonly) UILabel * contextLabel;                             //@synthesize contextLabel=_contextLabel - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                               //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * likedStateLabel;                          //@synthesize likedStateLabel=_likedStateLabel - In the implementation block
@property (nonatomic,readonly) UILabel * previewLabel;                             //@synthesize previewLabel=_previewLabel - In the implementation block
@property (nonatomic,readonly) UILabel * timestampLabel;                           //@synthesize timestampLabel=_timestampLabel - In the implementation block
@property (nonatomic,retain) UIButton * flagButton;                                //@synthesize flagButton=_flagButton - In the implementation block
@property (nonatomic,retain) UIButton * likeButton;                                //@synthesize likeButton=_likeButton - In the implementation block
@property (nonatomic,retain) UIButton * archiveButton;                             //@synthesize archiveButton=_archiveButton - In the implementation block
-(void)setLikeButton:(UIButton *)arg1 ;
-(UILabel *)contextLabel;
-(void)_configureFlagButtonAsFlagged:(BOOL)arg1 ;
-(void)_configureArchiveButtonFilterType:(unsigned long long)arg1 ;
-(void)_configureSeenState:(id)arg1 ;
-(void)_configureLikeButtonAsLiked:(BOOL)arg1 likersCount:(long long)arg2 ;
-(void)_disableCell;
-(void)_enableCell;
-(void)loadActionPanelView;
-(void)configureWithModerationEntry:(id)arg1 filterType:(unsigned long long)arg2 ;
-(UILabel *)likedStateLabel;
-(UILabel *)previewLabel;
-(UILabel *)timestampLabel;
-(FBMemPagesModerationData *)moderationData;
-(void)setModerationData:(FBMemPagesModerationData *)arg1 ;
-(UIButton *)flagButton;
-(UIButton *)archiveButton;
-(void)markCellAsRead:(id)arg1 ;
-(void)setArchiveButton:(UIButton *)arg1 ;
-(void)setFlagButton:(UIButton *)arg1 ;
-(void)markCellAsLiked:(BOOL)arg1 ;
-(void)markCellAsFlagged:(BOOL)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UILabel *)titleLabel;
-(void)setThumbnailImage:(id)arg1 ;
-(UIImageView *)thumbnailImageView;
-(UIButton *)likeButton;
@end
