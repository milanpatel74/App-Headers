/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:15 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class NSString, IGLocation, UIImageView, UILabel;

@interface IGLocationSuggestionPlaceCell : UICollectionViewCell {

	NSString* _locationTitle;
	IGLocation* _location;
	UIImageView* _imageView;
	UILabel* _textLabel;

}

@property (nonatomic,retain) NSString * locationTitle;              //@synthesize locationTitle=_locationTitle - In the implementation block
@property (nonatomic,retain) IGLocation * location;                 //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;               //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UILabel * textLabel;                   //@synthesize textLabel=_textLabel - In the implementation block
+(id)cellFont;
-(void)setLocationTitle:(NSString *)arg1 ;
-(NSString *)locationTitle;
-(id)cellBackgroundColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(UILabel *)textLabel;
-(id)textColor;
-(UIImageView *)imageView;
-(IGLocation *)location;
-(void)setTextLabel:(UILabel *)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setLocation:(IGLocation *)arg1 ;
@end
