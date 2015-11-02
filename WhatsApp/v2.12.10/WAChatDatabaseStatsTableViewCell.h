/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:56 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIView, WAProfilePictureThumbnailView, UILabel, NSLayoutConstraint;

@interface WAChatDatabaseStatsTableViewCell : UITableViewCell {

	UIView* _containerView;
	WAProfilePictureThumbnailView* _imageViewContactPicture;
	UILabel* _nameLabel;
	UILabel* _detailLabel;
	UILabel* _textType;
	UILabel* _imageType;
	UILabel* _videoType;
	UILabel* _audioType;
	UILabel* _locationType;
	UILabel* _contactType;
	UILabel* _totalType;
	UILabel* _textCount;
	UILabel* _imageCount;
	UILabel* _videoCount;
	UILabel* _audioCount;
	UILabel* _locationCount;
	UILabel* _contactCount;
	UILabel* _totalCount;
	UILabel* _imageSize;
	UILabel* _videoSize;
	UILabel* _audioSize;
	UILabel* _totalSize;
	NSLayoutConstraint* _nameToDetailConstraint;
	NSLayoutConstraint* _nameToContainerConstraint;

}

@property (nonatomic,retain) UIView * containerView;                                               //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) WAProfilePictureThumbnailView * imageViewContactPicture;              //@synthesize imageViewContactPicture=_imageViewContactPicture - In the implementation block
@property (nonatomic,retain) UILabel * nameLabel;                                                  //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) UILabel * detailLabel;                                                //@synthesize detailLabel=_detailLabel - In the implementation block
@property (nonatomic,retain) UILabel * textType;                                                   //@synthesize textType=_textType - In the implementation block
@property (nonatomic,retain) UILabel * imageType;                                                  //@synthesize imageType=_imageType - In the implementation block
@property (nonatomic,retain) UILabel * videoType;                                                  //@synthesize videoType=_videoType - In the implementation block
@property (nonatomic,retain) UILabel * audioType;                                                  //@synthesize audioType=_audioType - In the implementation block
@property (nonatomic,retain) UILabel * locationType;                                               //@synthesize locationType=_locationType - In the implementation block
@property (nonatomic,retain) UILabel * contactType;                                                //@synthesize contactType=_contactType - In the implementation block
@property (nonatomic,retain) UILabel * totalType;                                                  //@synthesize totalType=_totalType - In the implementation block
@property (nonatomic,retain) UILabel * textCount;                                                  //@synthesize textCount=_textCount - In the implementation block
@property (nonatomic,retain) UILabel * imageCount;                                                 //@synthesize imageCount=_imageCount - In the implementation block
@property (nonatomic,retain) UILabel * videoCount;                                                 //@synthesize videoCount=_videoCount - In the implementation block
@property (nonatomic,retain) UILabel * audioCount;                                                 //@synthesize audioCount=_audioCount - In the implementation block
@property (nonatomic,retain) UILabel * locationCount;                                              //@synthesize locationCount=_locationCount - In the implementation block
@property (nonatomic,retain) UILabel * contactCount;                                               //@synthesize contactCount=_contactCount - In the implementation block
@property (nonatomic,retain) UILabel * totalCount;                                                 //@synthesize totalCount=_totalCount - In the implementation block
@property (nonatomic,retain) UILabel * imageSize;                                                  //@synthesize imageSize=_imageSize - In the implementation block
@property (nonatomic,retain) UILabel * videoSize;                                                  //@synthesize videoSize=_videoSize - In the implementation block
@property (nonatomic,retain) UILabel * audioSize;                                                  //@synthesize audioSize=_audioSize - In the implementation block
@property (nonatomic,retain) UILabel * totalSize;                                                  //@synthesize totalSize=_totalSize - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * nameToDetailConstraint;                          //@synthesize nameToDetailConstraint=_nameToDetailConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * nameToContainerConstraint;                       //@synthesize nameToContainerConstraint=_nameToContainerConstraint - In the implementation block
+(double)preferredRowHeightExpanded:(BOOL)arg1 ;
-(UILabel *)contactCount;
-(WAProfilePictureThumbnailView *)imageViewContactPicture;
-(void)setImageViewContactPicture:(WAProfilePictureThumbnailView *)arg1 ;
-(void)formatCellWithRecord:(id)arg1 detailType:(long long)arg2 ;
-(void)setDetailLabelHidden:(BOOL)arg1 withAnimation:(BOOL)arg2 ;
-(void)layoutViews;
-(void)setLabelFonts;
-(id)createDetailLabelWithAlignment:(long long)arg1 dark:(BOOL)arg2 ;
-(void)createDetailLabels;
-(NSLayoutConstraint *)nameToDetailConstraint;
-(UILabel *)textCount;
-(UILabel *)audioCount;
-(UILabel *)locationCount;
-(UILabel *)audioSize;
-(NSLayoutConstraint *)nameToContainerConstraint;
-(void)setVideoType:(UILabel *)arg1 ;
-(UILabel *)totalType;
-(void)setTotalType:(UILabel *)arg1 ;
-(void)setTextCount:(UILabel *)arg1 ;
-(void)setAudioCount:(UILabel *)arg1 ;
-(void)setLocationCount:(UILabel *)arg1 ;
-(void)setContactCount:(UILabel *)arg1 ;
-(void)setAudioSize:(UILabel *)arg1 ;
-(void)setNameToDetailConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setNameToContainerConstraint:(NSLayoutConstraint *)arg1 ;
-(UILabel *)contactType;
-(UILabel *)nameLabel;
-(void)setNameLabel:(UILabel *)arg1 ;
-(void)setContactType:(UILabel *)arg1 ;
-(UILabel *)videoSize;
-(void)setVideoSize:(UILabel *)arg1 ;
-(void)setImageSize:(UILabel *)arg1 ;
-(UILabel *)detailLabel;
-(void)setDetailLabel:(UILabel *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIView *)containerView;
-(void)setContainerView:(UIView *)arg1 ;
-(UILabel *)imageSize;
-(UILabel *)imageCount;
-(void)setImageCount:(UILabel *)arg1 ;
-(UILabel *)videoCount;
-(void)setVideoCount:(UILabel *)arg1 ;
-(void)setImageType:(UILabel *)arg1 ;
-(void)setTotalSize:(UILabel *)arg1 ;
-(void)setTotalCount:(UILabel *)arg1 ;
-(UILabel *)videoType;
-(UILabel *)locationType;
-(UILabel *)textType;
-(void)setTextType:(UILabel *)arg1 ;
-(UILabel *)totalCount;
-(UILabel *)imageType;
-(UILabel *)totalSize;
-(void)setLocationType:(UILabel *)arg1 ;
-(void)setAudioType:(UILabel *)arg1 ;
-(UILabel *)audioType;
@end

