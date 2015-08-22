/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:27 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class TFNAssetsLibraryGroup, UILabel, UIImageView;

@interface T1PhotoGalleryAlbumPickerCell : UITableViewCell {

	BOOL _selectedAlbum;
	TFNAssetsLibraryGroup* _group;
	UILabel* _titleLabel;
	UILabel* _imageCountLabel;
	UIImageView* _checkmarkImageView;

}

@property (nonatomic,retain) TFNAssetsLibraryGroup * group;                          //@synthesize group=_group - In the implementation block
@property (assign,getter=isSelectedAlbum,nonatomic) BOOL selectedAlbum;              //@synthesize selectedAlbum=_selectedAlbum - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                   //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * imageCountLabel;                              //@synthesize imageCountLabel=_imageCountLabel - In the implementation block
@property (nonatomic,retain) UIImageView * checkmarkImageView;                       //@synthesize checkmarkImageView=_checkmarkImageView - In the implementation block
-(UILabel *)imageCountLabel;
-(void)_updateSelectionState;
-(BOOL)isSelectedAlbum;
-(void)setImageCountLabel:(UILabel *)arg1 ;
-(void)setSelectedAlbum:(BOOL)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UILabel *)titleLabel;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)prepareForReuse;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setGroup:(TFNAssetsLibraryGroup *)arg1 ;
-(TFNAssetsLibraryGroup *)group;
-(void)setCheckmarkImageView:(UIImageView *)arg1 ;
-(UIImageView *)checkmarkImageView;
@end
